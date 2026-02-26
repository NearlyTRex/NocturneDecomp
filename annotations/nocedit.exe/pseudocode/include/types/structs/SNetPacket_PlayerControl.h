#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SPlayerControl.h"

// Structure: SNetPacket_PlayerControl
// Ghidra size: 0x35 (53 bytes)
typedef struct SNetPacket_PlayerControl {
    SNetPacketHeader header; // 0x0
    int sim_frame_index; // 0x5
    SPlayerControl controls; // 0x9
} SNetPacket_PlayerControl;

