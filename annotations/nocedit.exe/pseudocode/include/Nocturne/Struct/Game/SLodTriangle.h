#pragma once

// Structure: SLodTriangle
// Ghidra size: 0x8c (140 bytes)
typedef struct SLodTriangle {
    char field_0[16]; // 0x0
    int vertex_idx_0; // 0x10
    int vertex_idx_1; // 0x14
    int vertex_idx_2; // 0x18
    char field_28[24]; // 0x1c
    int edge_idx_0; // 0x34
    int edge_idx_1; // 0x38
    int edge_idx_2; // 0x3c
    int processed_flag; // 0x40
    CVector3f normal; // 0x44
    char field_80[60]; // 0x50
} SLodTriangle;

