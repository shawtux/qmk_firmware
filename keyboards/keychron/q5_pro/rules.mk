OPT_DEFS += -DNO_USB_STARTUP_CHECK -DENABLE_FACTORY_TEST
OPT_DEFS += -DKC_BLUETOOTH_ENABLE

SRC += matrix.c

include keyboards/keychron/bluetooth/bluetooth.mk
