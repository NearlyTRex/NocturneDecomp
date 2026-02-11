#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CIcePick
// Ghidra size: 0x1fc04 (130052 bytes)
typedef struct CIcePick {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    char unk[44]; // 0x1fbd8
} CIcePick;

