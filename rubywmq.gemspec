require 'date'

spec = Gem::Specification.new do |s|
  s.name = 'rubywmq'
  s.version = File.read('VERSION').strip
  s.date = '2012-04-16'
  s.author = [ 'Reid Morrison', 'Carilda A Thomas' ]
  s.email = [ 'rubywmq@gmail.com', 'carilda.thomas@gmail.com' ]
  s.homepage = 'https://github.com/carilda/rubywmq'
  s.platform = Gem::Platform::RUBY
  s.summary = 'Ruby interface into WebSphere MQ (MQSeries) [updated]'
  s.description = 'RubyWMQ is a Ruby interface into WebSphere MQ, previously called MQSeries'
  s.files = Dir['examples/**/*.rb'] + File.readlines('Manifest.txt').map { |l| l.chomp }
  s.rubyforge_project = 'rubywmq'
  s.extensions << 'ext/wmq/extconf.rb'
  s.test_file = 'test/test.rb'
  s.has_rdoc = true
  s.required_ruby_version = '>= 1.9.3'
  s.extra_rdoc_files = ['README', 'LICENSE', 'VERSION']  
  s.requirements << 'WebSphere MQ v5.3, v6 or v7 Client or Server with MQ and Ruby SDK'
end

# if $0 == __FILE__
#   Gem::Builder.new(spec).build
# end
