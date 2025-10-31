#pragma once

// Structure: CZThumb
// Ghidra size: 0x28 (40 bytes)
typedef struct CZThumb {
    int width; // 0x0
    int height; // 0x4
    CVector3f camera_position; // 0x8
    CVector3f look_at_position; // 0x14
    int projection_scale; // 0x20
    void* zbuffer_data; // 0x24
} CZThumb;

