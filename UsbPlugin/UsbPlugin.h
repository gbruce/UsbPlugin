/*
 *  UsbPlugin.h
 *  UsbPlugin
 *
 *  Created by Guillermo Bruce on 12/21/14.
 *  Copyright (c) 2014 Guillermo Bruce. All rights reserved.
 *
 */

extern "C" {
#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(default)

/* External interface to the UsbPlugin, C-based */

CFStringRef UsbPluginUUID(void);

#pragma GCC visibility pop
}
