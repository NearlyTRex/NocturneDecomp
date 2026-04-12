#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CLodFace
// Ghidra size: 0x8c (140 bytes)
#pragma pack(push, 1)
typedef struct CLodFace {
    int attribute_indices[3]; // 0x0
    int submesh_id; // 0xc
    int vertex_idx_0; // 0x10
    int vertex_idx_1; // 0x14
    int vertex_idx_2; // 0x18
    float uv_coords[3][2]; // 0x1c
    int edge_idx_0; // 0x34
    int edge_idx_1; // 0x38
    int edge_idx_2; // 0x3c
    int processed_flag; // 0x40
    CVector3f normal; // 0x44
    float plane_distance; // 0x50
    CVector3f edge_perpendiculars[3]; // 0x54
    float edge_dot_products[3]; // 0x78
    int visited_stamp; // 0x84
    int affected_by_edge_stamp; // 0x88
} CLodFace;
#pragma pack(pop)

