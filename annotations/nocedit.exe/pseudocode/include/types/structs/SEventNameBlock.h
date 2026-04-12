#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SEventNameBlock
// Ghidra size: 0xc84 (3204 bytes)
#pragma pack(push, 1)
typedef struct SEventNameBlock {
    int count; // 0x0
    char names[100][32]; // 0x4
} SEventNameBlock;
#pragma pack(pop)

