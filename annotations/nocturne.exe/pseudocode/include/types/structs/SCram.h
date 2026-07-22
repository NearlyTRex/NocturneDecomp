#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCram
// Ghidra size: 0x74 (116 bytes)
#pragma pack(push, 1)
typedef struct SCram {
    char filename[80]; // 0x0
    int atlas_dimension; // 0x50
    int padding_size; // 0x54
    int coverage_threshold; // 0x58
    int min_atlas_size; // 0x5c
    int num_maps; // 0x60
    int fill_gaps; // 0x64
    int enable_visualization; // 0x68
    int paint_borders; // 0x6c
    int max_iterations; // 0x70
} SCram;
#pragma pack(pop)

