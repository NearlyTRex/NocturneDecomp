#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSurfacePackedNormal
// Ghidra size: 0x24 (36 bytes)
typedef struct SSurfacePackedNormal {
    int unknown; // 0x0
    int vertex_count; // 0x4
    int normal_x; // 0x8
    int normal_y; // 0xc
    int normal_z; // 0x10
    int dot_product; // 0x14
    int vertex_index_1; // 0x18
    int vertex_index_2; // 0x1c
    int vertex_index_3; // 0x20
} SSurfacePackedNormal;

