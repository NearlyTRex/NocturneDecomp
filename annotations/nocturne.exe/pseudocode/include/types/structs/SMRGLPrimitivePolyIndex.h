#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// Structure: SMRGLPrimitivePolyIndex
// Ghidra size: 0x38 (56 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitivePolyIndex {
    SMRGLHeaderPrimitive base; // 0x0
    int vertices[8]; // 0x18
} SMRGLPrimitivePolyIndex;
#pragma pack(pop)

