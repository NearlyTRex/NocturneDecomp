#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SSimFrame.h"

// Structure: SNetPacket_SimFrame
// Ghidra size: 0x69 (105 bytes)
#pragma pack(push, 1)
typedef struct SNetPacket_SimFrame {
    SNetPacketHeader header; // 0x0
    SSimFrame frame; // 0x5
} SNetPacket_SimFrame;
#pragma pack(pop)

