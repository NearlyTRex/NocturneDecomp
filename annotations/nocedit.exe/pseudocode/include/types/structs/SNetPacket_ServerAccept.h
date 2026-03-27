#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SNetworkAddr.h"

// Structure: SNetPacket_ServerAccept
// Ghidra size: 0x71 (113 bytes)
typedef struct SNetPacket_ServerAccept {
    SNetPacketHeader header; // 0x0
    char player_name[20]; // 0x5
    char mission_name[80]; // 0x19
    SNetworkAddr client_addr; // 0x69
} SNetPacket_ServerAccept;

