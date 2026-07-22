#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STimerBlock
// Ghidra size: 0x16c (364 bytes)
#pragma pack(push, 1)
typedef struct STimerBlock {
    int count; // 0x0
    char names[10][32]; // 0x4
    float durations[10]; // 0x144
} STimerBlock;
#pragma pack(pop)

