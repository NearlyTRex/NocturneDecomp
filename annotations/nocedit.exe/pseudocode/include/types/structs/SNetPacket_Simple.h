#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"

// Structure: SNetPacket_Simple
// Ghidra size: 0x9 (9 bytes)
#pragma pack(push, 1)
typedef struct SNetPacket_Simple {
    SNetPacketHeader header; // 0x0
    int value; // 0x5
} SNetPacket_Simple;
#pragma pack(pop)

