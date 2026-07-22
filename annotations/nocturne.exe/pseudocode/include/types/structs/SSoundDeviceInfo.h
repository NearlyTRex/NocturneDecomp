#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSoundDeviceInfo
// Ghidra size: 0x118 (280 bytes)
#pragma pack(push, 1)
typedef struct SSoundDeviceInfo {
    char device_name[256]; // 0x0
    int api_type; // 0x100
    int device_id; // 0x104
    DWORD has_hardware_mixing; // 0x108
    int flags; // 0x10c
    DWORD is_primary_device; // 0x110
    DWORD is_emulated; // 0x114
} SSoundDeviceInfo;
#pragma pack(pop)

