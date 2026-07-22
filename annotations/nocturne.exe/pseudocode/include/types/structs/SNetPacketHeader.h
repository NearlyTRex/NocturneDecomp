#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/ENetPacketType.h"

// Structure: SNetPacketHeader
// Ghidra size: 0x5 (5 bytes)
#pragma pack(push, 1)
typedef struct SNetPacketHeader {
    int size; // 0x0
    ENetPacketType type; // 0x4
} SNetPacketHeader;
#pragma pack(pop)

