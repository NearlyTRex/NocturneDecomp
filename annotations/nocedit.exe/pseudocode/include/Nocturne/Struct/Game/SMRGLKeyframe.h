#pragma once

// Structure: SMRGLKeyframe
// Ghidra size: 0xc (12 bytes)
typedef struct SMRGLKeyframe {
    SMRGLHeaderExtended header; // 0x0
    CVector3i vertices[0]; // 0xc
} SMRGLKeyframe;

