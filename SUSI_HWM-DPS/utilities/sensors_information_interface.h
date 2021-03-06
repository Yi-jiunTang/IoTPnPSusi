﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.2.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年10月2日
 ***********************************************************************************************/

#ifndef SENSORS_INFORMATION_INTERFACE_H
#define SENSORS_INFORMATION_INTERFACE_H

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

typedef enum SENSORS_INFORMATION_TELEMETRY_TAG
{
    Sensors_Information_VVCORE_TELEMETRY,
    Sensors_Information_VVCORE2_TELEMETRY,
    Sensors_Information_V25V_TELEMETRY,
    Sensors_Information_V33V_TELEMETRY,
    Sensors_Information_V5V_TELEMETRY,
    Sensors_Information_V12V_TELEMETRY,
    Sensors_Information_V5VSTANDBY_TELEMETRY,
    Sensors_Information_V3VSTANDBY_TELEMETRY,
    Sensors_Information_VCMOSBATTERY_TELEMETRY,
    Sensors_Information_V5NV_TELEMETRY,
    Sensors_Information_V12NV_TELEMETRY,
    Sensors_Information_VVTT_TELEMETRY,
    Sensors_Information_V24V_TELEMETRY,
    Sensors_Information_TCPU_TELEMETRY,
    Sensors_Information_TCHIPSET_TELEMETRY,
    Sensors_Information_TSYSTEM_TELEMETRY,
    Sensors_Information_TCPU2_TELEMETRY,
    Sensors_Information_FCPU_TELEMETRY,
    Sensors_Information_FSYSTEM_TELEMETRY,
    Sensors_Information_FCPU2_TELEMETRY,
} SENSORS_INFORMATION_TELEMETRY;

// DigitalTwin interface name from service perspective.
static const char Sensors_InformationInterfaceId[] = "urn:Advantech:${Model_Name}:SensorsInformation:1";
static const char Sensors_InformationInterfaceInstanceName[] = "Sensors_Information";

// Telemetry names for this interface.

static const char Sensors_InformationInterface_VvcoreTelemetry[] = "vvcore";

static const char Sensors_InformationInterface_Vvcore2Telemetry[] = "vvcore2";

static const char Sensors_InformationInterface_V25vTelemetry[] = "v25v";

static const char Sensors_InformationInterface_V33vTelemetry[] = "v33v";

static const char Sensors_InformationInterface_V5vTelemetry[] = "v5v";

static const char Sensors_InformationInterface_V12vTelemetry[] = "v12v";

static const char Sensors_InformationInterface_V5vstandbyTelemetry[] = "v5vstandby";

static const char Sensors_InformationInterface_V3vstandbyTelemetry[] = "v3vstandby";

static const char Sensors_InformationInterface_VcmosbatteryTelemetry[] = "vcmosbattery";

static const char Sensors_InformationInterface_V5nvTelemetry[] = "v5nv";

static const char Sensors_InformationInterface_V12nvTelemetry[] = "v12nv";

static const char Sensors_InformationInterface_VvttTelemetry[] = "vvtt";

static const char Sensors_InformationInterface_V24vTelemetry[] = "v24v";

static const char Sensors_InformationInterface_TcpuTelemetry[] = "tcpu";

static const char Sensors_InformationInterface_TchipsetTelemetry[] = "tchipset";

static const char Sensors_InformationInterface_TsystemTelemetry[] = "tsystem";

static const char Sensors_InformationInterface_Tcpu2Telemetry[] = "tcpu2";

static const char Sensors_InformationInterface_FcpuTelemetry[] = "fcpu";

static const char Sensors_InformationInterface_FsystemTelemetry[] = "fsystem";

static const char Sensors_InformationInterface_Fcpu2Telemetry[] = "fcpu2";

// Property names for this interface.

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE Sensors_InformationInterface_Create();

void Sensors_InformationInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendVvcore();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendVvcore2();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV25v();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV33v();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV5v();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV12v();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV5vstandby();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV3vstandby();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendVcmosbattery();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV5nv();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV12nv();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendVvtt();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendV24v();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendTcpu();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendTchipset();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendTsystem();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendTcpu2();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendFcpu();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendFsystem();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendFcpu2();

DIGITALTWIN_CLIENT_RESULT Sensors_InformationInterface_Telemetry_SendAll();

#ifdef __cplusplus
}
#endif

#endif  // SENSORS_INFORMATION_INTERFACE_H
