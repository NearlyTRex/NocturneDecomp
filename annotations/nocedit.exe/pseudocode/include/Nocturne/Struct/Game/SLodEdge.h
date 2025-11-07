#pragma once

// Structure: SLodEdge
// Ghidra size: 0xf0 (240 bytes)
typedef struct SLodEdge {
    int vertex_idx_1; // 0x0
    int vertex_idx_2; // 0x4
    char field_8[12]; // 0x8
    int deletion_flag; // 0x14
    char field_24[12]; // 0x18
    int adjacent_tri_count; // 0x24
    int adjacent_tri_indices[50]; // 0x28
} SLodEdge;

