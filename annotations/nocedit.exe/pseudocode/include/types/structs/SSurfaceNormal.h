#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SSurfaceNormal
// Ghidra size: 0x3c (60 bytes)
typedef struct SSurfaceNormal {
    int unknown; // 0x0
    int vertex_count; // 0x4
    int normal_x; // 0x8
    int normal_y; // 0xc
    int normal_z; // 0x10
    int dot_product; // 0x14
    int vertex_index_1; // 0x18
    char field_28[8]; // 0x1c
    int vertex_index_2; // 0x24
    char field_40[8]; // 0x28
    int vertex_index_3; // 0x30
    char field_52[8]; // 0x34
} SSurfaceNormal;

