#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSpatialGrid
// Ghidra size: 0x4004 (16388 bytes)
#pragma pack(push, 1)
typedef struct SSpatialGrid {
    int cell_start_indices[16][16][16]; // 0x0
    int triangle_count; // 0x4000
} SSpatialGrid;
#pragma pack(pop)

