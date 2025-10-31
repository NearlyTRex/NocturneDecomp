#pragma once

// Structure: SProjectedVertex
// Ghidra size: 0x18 (24 bytes)
typedef struct SProjectedVertex {
    int transformed_x; // 0x0
    int transformed_y; // 0x4
    int transformed_z; // 0x8
    int inv_z; // 0xc
    int screen_x; // 0x10
    int screen_y; // 0x14
} SProjectedVertex;

