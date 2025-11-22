#pragma once

// Structure: SLodEdge
// Ghidra size: 0xf0 (240 bytes)
typedef struct SLodEdge {
    int vertex_idx_1; // 0x0
    int vertex_idx_2; // 0x4
    char field_8[12]; // 0x8
    int deletion_flag; // 0x14
    int collapse_viability; // 0x18
    int collapse_curvature; // 0x1c
    int field_32; // 0x20
    int adjacent_tri_count; // 0x24
    int adjacent_tri_indices[50]; // 0x28
} SLodEdge;

