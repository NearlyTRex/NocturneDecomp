#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EHeroType.h"
#include "types/structs/SNetPacketHeader.h"

// Structure: SNetPacket_PlayerState
// Ghidra size: 0x29 (41 bytes)
#pragma pack(push, 1)
typedef struct SNetPacket_PlayerState {
    SNetPacketHeader header; // 0x0
    int timestamp; // 0x5
    char name[20]; // 0x9
    int ready_flag; // 0x1d
    EHeroType hero_number; // 0x21
    int aim_mode; // 0x25
} SNetPacket_PlayerState;
#pragma pack(pop)

