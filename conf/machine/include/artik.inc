# Common settings for Samsung Artik boards
IMAGE_CLASSES += "artik-sdimg"

PREFERRED_PROVIDER_u-boot ?= "u-boot-artik"
PREFERRED_PROVIDER_virtual/kernel ?= "linux-yocto-artik"

MACHINE_FEATURES += " bluetooth pci rtc ethernet serial usbgadget wifi"

KERNEL_IMAGETYPE = "zImage"

# Comment it out until sdimg creation error  will be solved
#IMAGE_FSTYPES += "tar.bz2 ext4 artik-sdimg"
IMAGE_FSTYPES += "tar.bz2 ext4"

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += "bcm4354-bt bcm4354-nvram-config"
MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += "kernel-modules"

KERNEL_MODULE_AUTOLOAD += "dhd"
KERNEL_MODULE_PROBECONF += "dhd"
module_conf_dhd = "options dhd firmware_path=/lib/firmware/brcm/brcmfmac4354-sdio.bin nvram_path=/lib/firmware/brcm/brcmfmac4354-sdio.txt"

