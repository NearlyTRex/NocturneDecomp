#pragma once

// Structure: CClippedPoly
// Ghidra size: 0xa4 (164 bytes)
typedef struct CClippedPoly {
    int vertex_count; // 0x0
    CVector3d vertices[4]; // 0x4
    CVector2d uvs[4]; // 0x64
} CClippedPoly;

