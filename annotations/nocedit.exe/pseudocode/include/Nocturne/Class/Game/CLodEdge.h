#pragma once

// Structure: CLodEdge
// Ghidra size: 0xf0 (240 bytes)
typedef struct CLodEdge {
    int vertex_idx_1; // 0x0
    int vertex_idx_2; // 0x4
    double collapse_cost; // 0x8
    float collapse_error; // 0x10
    int deletion_flag; // 0x14
    int collapse_viability; // 0x18
    int collapse_curvature; // 0x1c
    int needs_recalc_flag; // 0x20
    int adjacent_tri_count; // 0x24
    int adjacent_tri_indices[50]; // 0x28
} CLodEdge;

