#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"

// Structure: SNetPacket_ServerAccept
// Ghidra size: 0x71 (113 bytes)
typedef struct SNetPacket_ServerAccept {
    SNetPacketHeader header; // 0x0
    char player_name[20]; // 0x5
    char mission_name[80]; // 0x19
    uint client_addr_ip; // 0x69
    uint client_addr_port; // 0x6d
} SNetPacket_ServerAccept;

