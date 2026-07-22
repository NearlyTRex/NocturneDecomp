#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SNetworkAddr
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SNetworkAddr {
    uint ip_address; // 0x0
    ushort port; // 0x4
    ushort other; // 0x6
} SNetworkAddr;
#pragma pack(pop)

