#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SWaterVertex
// Ghidra size: 0x20 (32 bytes)
typedef struct SWaterVertex {
    CVector3f local_position; // 0x0
    CVector3f world_position; // 0xc
    int u; // 0x18
    int v; // 0x1c
} SWaterVertex;

