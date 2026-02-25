#pragma once

// Forward declarations
struct CDemonPart;
struct CDemonTriangle;

// Dependencies
#include "system/basetypes.h"

// Structure: SVoxelCubeMetadata
// Ghidra size: 0x58 (88 bytes)
typedef struct SVoxelCubeMetadata {
    int triangle_count; // 0x0
    struct CDemonTriangle* triangle_list; // 0x4
    int dead1; // 0x8
    struct CDemonPart* part_ptr; // 0xc
    int dead2; // 0x10
    uint voxel_data[16]; // 0x14
    uchar* triangle_flags; // 0x54
} SVoxelCubeMetadata;

