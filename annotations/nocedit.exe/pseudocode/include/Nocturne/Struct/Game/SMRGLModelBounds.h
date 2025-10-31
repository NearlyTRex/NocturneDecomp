#pragma once

// Structure: SMRGLModelBounds
// Ghidra size: 0x34 (52 bytes)
typedef struct SMRGLModelBounds {
    CVector3i min_scaled; // 0x0
    CVector3i max_scaled; // 0xc
    CVector3i center_scaled; // 0x18
    int radius_scaled; // 0x24
    CVector3i extent; // 0x28
} SMRGLModelBounds;

