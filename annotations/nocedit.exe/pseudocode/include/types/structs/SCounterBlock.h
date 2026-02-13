#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCounterBlock
// Ghidra size: 0x16c (364 bytes)
typedef struct SCounterBlock {
    int count; // 0x0
    char names[10][32]; // 0x4
    int values[10]; // 0x144
} SCounterBlock;

