#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CNPC.h"

// Structure: CPassenger
// Ghidra size: 0x20448 (132168 bytes)
typedef struct CPassenger {
    CNPC base_npc; // 0x0
    char field_128776[3384]; // 0x1f708
    float morph_time; // 0x20440
    float wolf_size; // 0x20444
} CPassenger;

