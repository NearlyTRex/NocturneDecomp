#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SEdgeTableEntry
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SEdgeTableEntry {
    int x_start; // 0x0
    int y_start; // 0x4
    int x_fixed_point; // 0x8
    int x_increment; // 0xc
} SEdgeTableEntry;
#pragma pack(pop)

