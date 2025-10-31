#pragma once

// Structure: SSurfacePlane
// Ghidra size: 0x20 (32 bytes)
typedef struct SSurfacePlane {
    SClipPlane plane; // 0x0
    int vertex_index_1; // 0x10
    int vertex_index_2; // 0x14
    int vertex_index_3; // 0x18
    int material; // 0x1c
} SSurfacePlane;

