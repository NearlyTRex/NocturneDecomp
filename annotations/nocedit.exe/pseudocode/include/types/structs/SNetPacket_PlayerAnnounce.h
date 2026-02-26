#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SNetworkAddr.h"

// Structure: SNetPacket_PlayerAnnounce
// Ghidra size: 0x29 (41 bytes)
typedef struct SNetPacket_PlayerAnnounce {
    SNetPacketHeader header; // 0x0
    SNetworkAddr addr; // 0x5
    char name[20]; // 0xd
    int hero_number; // 0x21
    int aim_mode; // 0x25
} SNetPacket_PlayerAnnounce;

