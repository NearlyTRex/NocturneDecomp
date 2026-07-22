#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLVertex.h"

// Structure: SMRGLPrimitivePoly
// Ghidra size: 0x78 (120 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitivePoly {
    SMRGLHeaderPrimitive base; // 0x0
    SMRGLVertex vertices[8]; // 0x18
} SMRGLPrimitivePoly;
#pragma pack(pop)

