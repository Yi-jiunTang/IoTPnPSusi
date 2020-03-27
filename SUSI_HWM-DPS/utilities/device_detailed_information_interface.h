﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.2.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年10月2日
 ***********************************************************************************************/

#ifndef DEVICE_DETAILED_INFORMATION_INTERFACE_H
#define DEVICE_DETAILED_INFORMATION_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../SUSI_HWM.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum DEVICE_DETAILED_INFORMATION_READONLY_PROPERTY_TAG
{
    Device_Detailed_Information_BIOS_REVISION,
    Device_Detailed_Information_EC_FW,
    Device_Detailed_Information_DRIVER_VERSION,
    Device_Detailed_Information_LIB_VERSION,
    Device_Detailed_Information_FW_VERSION,
    Device_Detailed_Information_LASTCONNECTEDAT_PROPERTY
} DEVICE_DETAILED_INFORMATION_PROPERTY;

// DigitalTwin interface name from service perspective.
static const char Device_Detailed_InformationInterfaceId[] = "urn:Advantech:${Model_Name}:DeviceDetailedInformation:1";
static const char Device_Detailed_InformationInterfaceInstanceName[] = "Device_Detailed_Information";

// Telemetry names for this interface.

// Property names for this interface.


#define Device_Detailed_InformationInterface_BiosRevisionProperty "BiosVersion"

#define Device_Detailed_InformationInterface_ECFirmwareProperty "ECFirmware"

#define Device_Detailed_InformationInterface_DriverVersionProperty "DriverVersion"

#define Device_Detailed_InformationInterface_LibraryVersionProperty "LibraryVersion"

#define Device_Detailed_InformationInterface_FirmwareVersionProperty "FirmwareVersion"

#define Device_Detailed_InformationInterface_LastConnectedAtProperty "LastConnectedAt"

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE Device_Detailed_InformationInterface_Create();

void Device_Detailed_InformationInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportAll();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportBiosVersion();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportECFirmware();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportDriverVersion();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportLibraryVersion();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportFirmwareVersion();

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportLastConnectedAt();

#ifdef __cplusplus
}
#endif

#endif  // DEVICE_DETAILED_INFORMATION_INTERFACE_H
