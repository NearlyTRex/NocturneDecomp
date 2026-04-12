#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// Structure: SMRGLPrimitiveQuadIndex
// Ghidra size: 0x28 (40 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitiveQuadIndex {
    SMRGLHeaderPrimitive base; // 0x0
    int vertices[4]; // 0x18
} SMRGLPrimitiveQuadIndex;
#pragma pack(pop)

