# TBS5520SE
Modified multi-standard dual TV Tuner USB Box TBS5520SE Linux driver for mainline kernel using DKMS.
Inspired by crazycat69 & TBS Technologies Linux media drivers.

Manual build
make -C /lib/modules/$(uname -r)/build M=$(pwd) modules

Install to DKMS
cp -a dvb-usb-tbs5520se-1 /usr/src
dkms install -m dvb-usb-tbs5520se -v 1

Remove from DKMS
dkms remove -m dvb-usb-tbs5520se -v 1 --all
rm -rf /usr/src/dvb-usb-tbs5520se-1
