#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SKFMBinaryHeader
// Ghidra size: 0x1c (28 bytes)
typedef struct SKFMBinaryHeader {
    int version; // 0x0
    int vertex_count; // 0x4
    int poly_count; // 0x8
    int texture_count; // 0xc
    int part_count; // 0x10
    int frame_count; // 0x14
    int has_collision_data; // 0x18
} SKFMBinaryHeader;

