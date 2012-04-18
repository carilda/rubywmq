cd wmq && ruby extconf.rb --with-mqm-include=/opt/mqm/inc --with-mqm-lib=/opt/mqm/lib
make
# Uncomment the following lines for platforms other than Solaris, Windows and Linux
#cd wmq && ruby extconf_client.rb --with-mqm-include=/opt/mqm/inc --with-mqm-lib=/opt/mqm/lib
#make

