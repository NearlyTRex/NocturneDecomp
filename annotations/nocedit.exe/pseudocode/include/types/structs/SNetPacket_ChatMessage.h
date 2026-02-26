#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SNetPacketHeader.h"

// Structure: SNetPacket_ChatMessage
// Ghidra size: 0x109 (265 bytes)
typedef struct SNetPacket_ChatMessage {
    SNetPacketHeader header; // 0x0
    int message_id; // 0x5
    char message[256]; // 0x9
} SNetPacket_ChatMessage;

