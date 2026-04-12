#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLVertex.h"

// Structure: SMRGLPrimitiveQuad
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitiveQuad {
    SMRGLHeaderPrimitive base; // 0x0
    SMRGLVertex vertices[4]; // 0x18
} SMRGLPrimitiveQuad;
#pragma pack(pop)

