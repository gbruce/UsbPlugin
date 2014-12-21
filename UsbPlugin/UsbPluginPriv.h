/*
 *  UsbPluginPriv.h
 *  UsbPlugin
 *
 *  Created by Guillermo Bruce on 12/21/14.
 *  Copyright (c) 2014 Guillermo Bruce. All rights reserved.
 *
 */

#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(hidden)

class CUsbPlugin {
	public:
		CFStringRef UUID(void);
};

#pragma GCC visibility pop
