/*
 *  UsbPlugin.cp
 *  UsbPlugin
 *
 *  Created by Guillermo Bruce on 12/21/14.
 *  Copyright (c) 2014 Guillermo Bruce. All rights reserved.
 *
 */

#include "UsbPlugin.h"
#include "UsbPluginPriv.h"

CFStringRef UsbPluginUUID(void)
{
	CUsbPlugin* theObj = new CUsbPlugin;
	return theObj->UUID();
}

CFStringRef CUsbPlugin::UUID()
{
	return CFSTR("0001020304050607");
}
