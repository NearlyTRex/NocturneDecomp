#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CHiram
// Ghidra size: 0x1f5d4 (128468 bytes)
#pragma pack(push, 1)
typedef struct CHiram {
    CNPC base; // 0x0
    char kill_event[100]; // 0x1f570
} CHiram;
#pragma pack(pop)

