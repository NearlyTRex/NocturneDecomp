#pragma once

// Structure: CLodVert
// Ghidra size: 0x4c4 (1220 bytes)
typedef struct CLodVert {
    CVector3f position; // 0x0
    int material_id; // 0xc
    char lod_workspace[980]; // 0x10
    int deletion_flag; // 0x3e4
    CVector3f optimized_position; // 0x3e8
    int vertex_remapping_index; // 0x3f4
    int adjacent_edge_count; // 0x3f8
    int adjacent_edge_indices[50]; // 0x3fc
} CLodVert;

