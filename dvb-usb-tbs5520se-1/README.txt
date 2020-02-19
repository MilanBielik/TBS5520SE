Manual build
make -C /lib/modules/$(uname -r)/build M=$(pwd) modules

Install to DKMS
cp -a dvb-usb-tbs5520se-1 /usr/src
dkms install -m dvb-usb-tbs5520se -v 1

Remove from DKMS
dkms remove -m dvb-usb-tbs5520se -v 1 --all
rm -rf /usr/src/dvb-usb-tbs5520se-1
