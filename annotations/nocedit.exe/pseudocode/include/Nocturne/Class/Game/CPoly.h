#pragma once

// Structure: CPoly
// Ghidra size: 0x68 (104 bytes)
typedef struct CPoly {
    CObj* parent_obj; // 0x0
    int vertex_idx_0; // 0x4
    int vertex_idx_1; // 0x8
    int vertex_idx_2; // 0xc
    CP2D uv_coords[3]; // 0x10
    CVector3d normal; // 0x40
    int field_88; // 0x58
    int field_92; // 0x5c
    int field_96; // 0x60
    void* vtable; // 0x64
} CPoly;

