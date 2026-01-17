#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SDirectSoundDeviceInfo
// Ghidra size: 0x11c (284 bytes)
typedef struct SDirectSoundDeviceInfo {
    DWORD device_id_part; // 0x0
    char field_4[16]; // 0x4
    char device_description[256]; // 0x14
    DWORD value2; // 0x114
    DWORD value1; // 0x118
} SDirectSoundDeviceInfo;

