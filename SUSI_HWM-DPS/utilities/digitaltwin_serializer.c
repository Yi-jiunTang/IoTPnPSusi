﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.2.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年10月2日
 ***********************************************************************************************/

#include "digitaltwin_serializer.h"

//
// Serialize telemetry data
//

bool Sensors_Information_SerializeVvcoreTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double vvcore = Sensors_Information_Telemetry_ReadVvcore();

    int neededSize = snprintf(NULL, 0, "%f", vvcore);

    if (neededSize > size - 1)
    {
        LogError("Failed to build vvcore payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", vvcore);
    }

    return true;
}

bool Sensors_Information_SerializeVvcore2Telemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double vvcore2 = Sensors_Information_Telemetry_ReadVvcore2();

    int neededSize = snprintf(NULL, 0, "%f", vvcore2);

    if (neededSize > size - 1)
    {
        LogError("Failed to build vvcore2 payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", vvcore2);
    }

    return true;
}


bool Sensors_Information_SerializeV25vTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v25v = Sensors_Information_Telemetry_ReadV25v();

    int neededSize = snprintf(NULL, 0, "%f", v25v);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v25v payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v25v);
    }

    return true;
}

bool Sensors_Information_SerializeV33vTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v33v = Sensors_Information_Telemetry_ReadV33v();

    int neededSize = snprintf(NULL, 0, "%f", v33v);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v33v payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v33v);
    }

    return true;
}

bool Sensors_Information_SerializeV5vTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v5v = Sensors_Information_Telemetry_ReadV5v();

    int neededSize = snprintf(NULL, 0, "%f", v5v);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v5v payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v5v);
    }

    return true;
}

bool Sensors_Information_SerializeV12vTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v12v = Sensors_Information_Telemetry_ReadV12v();

    int neededSize = snprintf(NULL, 0, "%f", v12v);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v12v payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v12v);
    }

    return true;
}

bool Sensors_Information_SerializeV5vstandbyTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v5vstandby = Sensors_Information_Telemetry_ReadV5vstandby();

    int neededSize = snprintf(NULL, 0, "%f", v5vstandby);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v5vstandby payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v5vstandby);
    }

    return true;
}

bool Sensors_Information_SerializeV3vstandbyTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v3vstandby = Sensors_Information_Telemetry_ReadV3vstandby();

    int neededSize = snprintf(NULL, 0, "%f", v3vstandby);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v3vstandby payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v3vstandby);
    }

    return true;
}

bool Sensors_Information_SerializeVcmosbatteryTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double vcmosbattery = Sensors_Information_Telemetry_ReadVcmosbattery();

    int neededSize = snprintf(NULL, 0, "%f", vcmosbattery);

    if (neededSize > size - 1)
    {
        LogError("Failed to build vcmosbattery payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", vcmosbattery);
    }

    return true;
}

bool Sensors_Information_SerializeV5nvTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v5nv = Sensors_Information_Telemetry_ReadV5nv();

    int neededSize = snprintf(NULL, 0, "%f", v5nv);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v5nv payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v5nv);
    }

    return true;
}

bool Sensors_Information_SerializeV12nvTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v12nv = Sensors_Information_Telemetry_ReadV12nv();

    int neededSize = snprintf(NULL, 0, "%f", v12nv);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v12nv payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v12nv);
    }

    return true;
}

bool Sensors_Information_SerializeVvttTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double vvtt = Sensors_Information_Telemetry_ReadVvtt();

    int neededSize = snprintf(NULL, 0, "%f", vvtt);

    if (neededSize > size - 1)
    {
        LogError("Failed to build vvtt payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", vvtt);
    }

    return true;
}

bool Sensors_Information_SerializeV24vTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double v24v = Sensors_Information_Telemetry_ReadV24v();

    int neededSize = snprintf(NULL, 0, "%f", v24v);

    if (neededSize > size - 1)
    {
        LogError("Failed to build v24v payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", v24v);
    }

    return true;
}

bool Sensors_Information_SerializeTcpuTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double tcpu = Sensors_Information_Telemetry_ReadTcpu();

    int neededSize = snprintf(NULL, 0, "%f", tcpu);

    if (neededSize > size - 1)
    {
        LogError("Failed to build tcpu payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", tcpu);
    }

    return true;
}

bool Sensors_Information_SerializeTchipsetTelemetry(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double tchipset = Sensors_Information_Telemetry_ReadTchipset();

    int neededSize = snprintf(NULL, 0, "%f", tchipset);

    if (neededSize > size - 1)
    {
        LogError("Failed to build tchipset payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", tchipset);
    }

    return true;
}

bool Sensors_Information_SerializeTsystemTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double tsystem = Sensors_Information_Telemetry_ReadTsystem();

    int neededSize = snprintf(NULL, 0, "%f", tsystem);

    if (neededSize > size - 1)
    {
        LogError("Failed to build tsystem payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", tsystem);
    }

    return true;
}

bool Sensors_Information_SerializeTcpu2Telemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double tcpu2 = Sensors_Information_Telemetry_ReadTcpu2();

    int neededSize = snprintf(NULL, 0, "%f", tcpu2);

    if (neededSize > size - 1)
    {
        LogError("Failed to build tcpu2 payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", tcpu2);
    }

    return true;
}

bool Sensors_Information_SerializeFcpuTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double fcpu = Sensors_Information_Telemetry_ReadFcpu();

    int neededSize = snprintf(NULL, 0, "%f", fcpu);

    if (neededSize > size - 1)
    {
        LogError("Failed to build fcpu payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", fcpu);
    }

    return true;
}

bool Sensors_Information_SerializeFsystemTelemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double fsystem = Sensors_Information_Telemetry_ReadFsystem();

    int neededSize = snprintf(NULL, 0, "%f", fsystem);

    if (neededSize > size - 1)
    {
        LogError("Failed to build fsystem payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", fsystem);
    }

    return true;
}

bool Sensors_Information_SerializeFcpu2Telemetry(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    double fcpu2 = Sensors_Information_Telemetry_ReadFcpu2();

    int neededSize = snprintf(NULL, 0, "%f", fcpu2);

    if (neededSize > size - 1)
    {
        LogError("Failed to build fcpu2 payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%f", fcpu2);
    }

    return true;
}
//
// Serialize read-only property
//
// Device_Detailed_information
bool Device_Detailed_Information_SerializeBiosVersionProperty(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* biosVersion = Device_Detailed_Information_Property_GetBiosVersion();

    int neededSize = snprintf(NULL, 0, "\"%s\"", biosVersion);

    if (neededSize > size - 1)
    {
        LogError("Failed to build BiosVersion payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", biosVersion);
    }

    free(biosVersion);
    return true;
}

bool Device_Detailed_Information_SerializeECFirmwareProperty(char* payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* eCFirmware = Device_Detailed_Information_Property_GetECFirmware();

    int neededSize = snprintf(NULL, 0, "\"%s\"", eCFirmware);

    if (neededSize > size - 1)
    {
        LogError("Failed to build ECFirmware payload string");
        //return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", eCFirmware);
    }

    free(eCFirmware);
    return true;
}

bool Device_Detailed_Information_SerializeDriverVersionProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* driverVersion = Device_Detailed_Information_Property_GetDriverVersion();

    int neededSize = snprintf(NULL, 0, "\"%s\"", driverVersion);

    if (neededSize > size - 1)
    {
        LogError("Failed to build DriverVersion payload string");
        //return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", driverVersion);
    }

    free(driverVersion);
    return true;
}

bool Device_Detailed_Information_SerializeLibraryVersionProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* libraryVersion = Device_Detailed_Information_Property_GetLibraryVersion();

    int neededSize = snprintf(NULL, 0, "\"%s\"", libraryVersion);

    if (neededSize > size - 1)
    {
        LogError("Failed to build LibraryVersion payload string");
        //return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", libraryVersion);
    }

    free(libraryVersion);
    return true;
}

bool Device_Detailed_Information_SerializeFirmwareVersionProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* firmwareVersion = Device_Detailed_Information_Property_GetFirmwareVersion();

    int neededSize = snprintf(NULL, 0, "\"%s\"", firmwareVersion);

    if (neededSize > size - 1)
    {
        LogError("Failed to build FirmwareVersion payload string");
        //return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", firmwareVersion);
    }

    free(firmwareVersion);
    return true;
}

bool Device_Detailed_Information_SerializeLastConnectedAtProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* lastConnectedAt = Device_Detailed_Information_Property_GetLastConnectedAt();

    int neededSize = snprintf(NULL, 0, "\"%s\"", lastConnectedAt);

    if (neededSize > size - 1)
    {
        LogError("Failed to build LastConnectedAt payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", lastConnectedAt);
    }

    return true;
}

//DeviceInfo
bool DeviceInfo_SerializeManufacturerProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* manufacturer = DeviceInfo_Property_GetManufacturer();

    int neededSize = snprintf(NULL, 0, "\"%s\"", manufacturer);

    if (neededSize > size - 1)
    {
        LogError("Failed to build manufacturer payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", manufacturer);
    }

    free(manufacturer);
    return true;
}

bool DeviceInfo_SerializeModelProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* model = DeviceInfo_Property_GetModel();

    int neededSize = snprintf(NULL, 0, "\"%s\"", model);

    if (neededSize > size - 1)
    {
        LogError("Failed to build model payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", model);
    }

    free(model);
    return true;
}

bool DeviceInfo_SerializeSwVersionProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* swVersion = DeviceInfo_Property_GetSwVersion();

    int neededSize = snprintf(NULL, 0, "\"%s\"", swVersion);

    if (neededSize > size - 1)
    {
        LogError("Failed to build swVersion payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", swVersion);
    }

    return true;
}

bool DeviceInfo_SerializeOsNameProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* osName = DeviceInfo_Property_GetOsName();

    int neededSize = snprintf(NULL, 0, "\"%s\"", osName);

    if (neededSize > size - 1)
    {
        LogError("Failed to build osName payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", osName);
    }

    return true;
}

bool DeviceInfo_SerializeProcessorArchitectureProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* processorArchitecture = DeviceInfo_Property_GetProcessorArchitecture();

    int neededSize = snprintf(NULL, 0, "\"%s\"", processorArchitecture);

    if (neededSize > size - 1)
    {
        LogError("Failed to build processorArchitecture payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", processorArchitecture);
    }

    return true;
}

bool DeviceInfo_SerializeProcessorManufacturerProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    char* processorManufacturer = DeviceInfo_Property_GetProcessorManufacturer();

    int neededSize = snprintf(NULL, 0, "\"%s\"", processorManufacturer);

    if (neededSize > size - 1)
    {
        LogError("Failed to build processorManufacturer payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "\"%s\"", processorManufacturer);
    }

    return true;
}

bool DeviceInfo_SerializeTotalStorageProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    long totalStorage = DeviceInfo_Property_GetTotalStorage();

    int neededSize = snprintf(NULL, 0, "%ld", totalStorage);

    if (neededSize > size - 1)
    {
        LogError("Failed to build totalStorage payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%ld", totalStorage);
    }

    return true;
}

bool DeviceInfo_SerializeTotalMemoryProperty(char * payloadBuffer, int size)
{
    if (payloadBuffer == NULL)
    {
        return false;
    }

    memset(payloadBuffer, 0, size);

    long totalMemory = DeviceInfo_Property_GetTotalMemory();

    int neededSize = snprintf(NULL, 0, "%ld", totalMemory);

    if (neededSize > size - 1)
    {
        LogError("Failed to build totalMemory payload string");
        return false;
    }
    else
    {
        snprintf(payloadBuffer, size, "%ld", totalMemory);
    }

    return true;
}

