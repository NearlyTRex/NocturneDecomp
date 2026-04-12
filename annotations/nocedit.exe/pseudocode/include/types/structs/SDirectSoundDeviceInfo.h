#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// Structure: SDirectSoundDeviceInfo
// Ghidra size: 0x11c (284 bytes)
#pragma pack(push, 1)
typedef struct SDirectSoundDeviceInfo {
    DWORD is_primary_device; // 0x0
    _GUID device_guid; // 0x4
    char device_description[256]; // 0x14
    DWORD is_emulated; // 0x114
    DWORD has_hardware_mixing; // 0x118
} SDirectSoundDeviceInfo;
#pragma pack(pop)

