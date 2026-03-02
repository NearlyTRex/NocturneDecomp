#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3d.h"

// Structure: SExpandedEdge
// Ghidra size: 0x60 (96 bytes)
typedef struct SExpandedEdge {
    int start_vertex_index; // 0x0
    int end_vertex_index; // 0x4
    int start_side; // 0x8
    int end_side; // 0xc
    CVector3d start_pos; // 0x10
    CVector3d end_pos; // 0x28
    double start_uv[2]; // 0x40
    double end_uv[2]; // 0x50
} SExpandedEdge;

