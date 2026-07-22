#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMRGLVertex
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct SMRGLVertex {
    int vertex_index; // 0x0
    int texture_u; // 0x4
    int texture_v; // 0x8
} SMRGLVertex;
#pragma pack(pop)

