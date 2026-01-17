#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLVertex.h"

// Structure: SMRGLPrimitiveTriangle
// Ghidra size: 0x3c (60 bytes)
typedef struct SMRGLPrimitiveTriangle {
    SMRGLHeaderPrimitive base; // 0x0
    SMRGLVertex vertices[3]; // 0x18
} SMRGLPrimitiveTriangle;

