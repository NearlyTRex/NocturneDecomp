#pragma once

// Structure: CDemonCubeTriangle
// Ghidra size: 0x20 (32 bytes)
typedef struct CDemonCubeTriangle {
    CVector3f* vertices[3]; // 0x0
    CVector3f normal; // 0xc
    float plane_distance; // 0x18
    uint dominant_axis; // 0x1c
} CDemonCubeTriangle;

