#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/STrianglePackedIndices.h"

// Structure: SFace
// Ghidra size: 0x20 (32 bytes)
typedef struct SFace {
    int texture_index; // 0x0
    int render_flags; // 0x4
    int depth; // 0x8
    STrianglePackedIndices indices; // 0xc
    char field_18[14]; // 0x12
} SFace;

