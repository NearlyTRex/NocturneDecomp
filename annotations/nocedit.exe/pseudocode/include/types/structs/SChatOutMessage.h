#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// Structure: SChatOutMessage
// Ghidra size: 0x114 (276 bytes)
typedef struct SChatOutMessage {
    uint timestamp; // 0x0
    uint sequence_number; // 0x4
    _BIT_INTEGER32 ack_flags; // 0x8
    uint player_timestamps[2]; // 0xc
    char message[256]; // 0x14
} SChatOutMessage;

