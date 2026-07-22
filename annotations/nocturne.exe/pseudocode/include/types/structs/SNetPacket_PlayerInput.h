#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SPlayerInput.h"

// Structure: SNetPacket_PlayerInput
// Ghidra size: 0x35 (53 bytes)
#pragma pack(push, 1)
typedef struct SNetPacket_PlayerInput {
    SNetPacketHeader header; // 0x0
    int sim_frame_index; // 0x5
    SPlayerInput player_input; // 0x9
} SNetPacket_PlayerInput;
#pragma pack(pop)

