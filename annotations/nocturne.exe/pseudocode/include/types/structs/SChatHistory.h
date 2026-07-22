#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetworkAddr.h"

// Structure: SChatHistory
// Ghidra size: 0x120 (288 bytes)
#pragma pack(push, 1)
typedef struct SChatHistory {
    SNetworkAddr sender_addr; // 0x0
    int message_id; // 0x8
    char sender_name[20]; // 0xc
    char message[256]; // 0x20
} SChatHistory;
#pragma pack(pop)

