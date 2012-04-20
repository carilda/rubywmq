################################################################################
#  Copyright 2006 J. Reid Morrison. Dimension Solutions, Inc.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
################################################################################

require 'mkmf'
require './generate/generate_reason'
require './generate/generate_const'
require './generate/generate_structs'

include_path = ''
if RUBY_PLATFORM =~ /mswin32/
  include_path = 'C:\Program Files\IBM\WebSphere MQ\Tools\c\include'
  dir_config('mqm', include_path, '.')
  bit64 = RUBY_PLATFORM =~ /64/
else
  bit64 = system('file `which ruby` | grep 64 >/dev/null')
  include_path = '/opt/mqm/inc'
  if bit64 == true
    my_mqm_lib = '/opt/mqm/lib64'
  else
    my_mqm_lib = '/opt/mqm/lib'
  end
  dir_config('mqm', include_path, my_mqm_lib)
end

# This will add /opt/mqm/inc (or whatever) to the include path in the Makefile
have_header('cmqc.h') || raise

# Check for WebSphere MQ Server library
unless (RUBY_PLATFORM =~ /win/i) || (RUBY_PLATFORM =~ /solaris/i) || (RUBY_PLATFORM =~ /linux/i)
  have_library('mqm') || raise
end

# Generate Source Files
# creates ./wmq_reason.c from MQ headers
GenerateReason.generate(include_path+'/')

# creates wmq_const_admin.rb and wmq_const.rb in ../../lib/wmq
GenerateConst.generate(include_path+'/', '../../lib/wmq/')

# creates ./wmq_structs.c from wmq_structs.erb and MQ headers
GenerateStructs.new(include_path+'/', 'generate').generate

# Generate Makefile
create_makefile('wmq/wmq')
