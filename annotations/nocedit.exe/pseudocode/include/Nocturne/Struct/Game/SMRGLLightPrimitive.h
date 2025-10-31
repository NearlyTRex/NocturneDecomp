#pragma once

// Structure: SMRGLLightPrimitive
// Ghidra size: 0x24 (36 bytes)
typedef struct SMRGLLightPrimitive {
    SMRGLHeaderBasicTypeOnly base; // 0x0
    SClipPlane normal; // 0x4
    int vertices[4]; // 0x14
} SMRGLLightPrimitive;

