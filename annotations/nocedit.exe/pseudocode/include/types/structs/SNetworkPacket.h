#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SNetworkPacket
// Ghidra size: 0x9 (9 bytes)
typedef struct SNetworkPacket {
    uchar unknown[4]; // 0x0
    uchar packet_type; // 0x4
    uint data; // 0x5
} SNetworkPacket;

