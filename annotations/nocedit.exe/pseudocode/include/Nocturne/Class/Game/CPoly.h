#pragma once

// Structure: CPoly
// Ghidra size: 0x68 (104 bytes)
typedef struct CPoly {
    CObj* parent_obj; // 0x0
    int vertex_idx_0; // 0x4
    int vertex_idx_1; // 0x8
    int vertex_idx_2; // 0xc
    CVector2d uv_coords[3]; // 0x10
    CVector3d normal; // 0x40
    int adjacency_flags; // 0x58
    int material_id; // 0x5c
    uint flags; // 0x60
    CPoly_vtable* vtable; // 0x64
} CPoly;

