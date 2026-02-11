#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"

// Structure: CColonel
// Ghidra size: 0x1fbec (130028 bytes)
typedef struct CColonel {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    char field2_0x1fbd8[20]; // 0x1fbd8
} CColonel;

