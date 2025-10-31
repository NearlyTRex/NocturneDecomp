#pragma once

// Structure: SFogGrid
// Ghidra size: 0x1020 (4128 bytes)
typedef struct SFogGrid {
    SFogGridPlane planes[16]; // 0x0
    CVector3i sampling_offset; // 0x1000
    CVector3i scroll_vector; // 0x100c
    int height_threshold; // 0x1018
    int density_multiplier; // 0x101c
} SFogGrid;

