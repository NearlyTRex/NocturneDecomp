#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCompactPolygonDescriptor
// Ghidra size: 0x12 (18 bytes)
typedef struct SCompactPolygonDescriptor {
    ushort vertex_index1; // 0x0
    ushort vertex_index2; // 0x2
    ushort vertex_index3; // 0x4
    ushort tex_u1; // 0x6
    ushort tex_u2; // 0x8
    ushort tex_u3; // 0xa
    ushort tex_v1; // 0xc
    ushort tex_v2; // 0xe
    ushort tex_v3; // 0x10
} SCompactPolygonDescriptor;

