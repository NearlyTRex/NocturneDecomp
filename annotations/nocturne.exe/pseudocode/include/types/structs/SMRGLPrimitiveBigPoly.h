#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLVertex.h"

// Structure: SMRGLPrimitiveBigPoly
// Ghidra size: 0xd8 (216 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitiveBigPoly {
    SMRGLHeaderPrimitive base; // 0x0
    SMRGLVertex vertices[16]; // 0x18
} SMRGLPrimitiveBigPoly;
#pragma pack(pop)

