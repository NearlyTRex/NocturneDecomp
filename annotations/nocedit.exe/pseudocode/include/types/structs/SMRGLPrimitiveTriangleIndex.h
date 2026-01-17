#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// Structure: SMRGLPrimitiveTriangleIndex
// Ghidra size: 0x24 (36 bytes)
typedef struct SMRGLPrimitiveTriangleIndex {
    SMRGLHeaderPrimitive base; // 0x0
    int vertices[3]; // 0x18
} SMRGLPrimitiveTriangleIndex;

