#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SClipPlane.h"

// Structure: SSurfacePlane
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SSurfacePlane {
    SClipPlane plane; // 0x0
    int vertex_index_1; // 0x10
    int vertex_index_2; // 0x14
    int vertex_index_3; // 0x18
    int vertex_index_4; // 0x1c
} SSurfacePlane;
#pragma pack(pop)

