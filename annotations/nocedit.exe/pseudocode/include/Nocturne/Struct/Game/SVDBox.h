#pragma once

// Structure: SVDBox
// Ghidra size: 0x44 (68 bytes)
typedef struct SVDBox {
    CVector3f position; // 0x0
    CVector3f extents; // 0xc
    CMatrix3x3f rotation_matrix; // 0x18
    char field_60[8]; // 0x3c
} SVDBox;

