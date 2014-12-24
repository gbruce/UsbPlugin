
#include "UsbPlugin.h"
#include "libusb-1.0/libusb.h"

libusb_context * GlobalContext = 0;

void UsbInit() {
    int result = libusb_init(&GlobalContext);
    
    libusb_device_handle* handle = libusb_open_device_with_vid_pid(GlobalContext, 0x1915, 0x7777);
    
    libusb_claim_interface(handle,
}

int GetNumDevices() {
    return 0;
};