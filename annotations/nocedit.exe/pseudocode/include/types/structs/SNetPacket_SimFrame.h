#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SPlayerControl.h"

// Structure: SNetPacket_SimFrame
// Ghidra size: 0x69 (105 bytes)
typedef struct SNetPacket_SimFrame {
    SNetPacketHeader header; // 0x0
    int sequence; // 0x5
    int frame_time; // 0x9
    int frame_flags; // 0xd
    SPlayerControl player_data[2]; // 0x11
} SNetPacket_SimFrame;

