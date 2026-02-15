#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// Structure: SMRGLPrimitiveClippedIndex
// Ghidra size: 0x38 (56 bytes)
typedef struct SMRGLPrimitiveClippedIndex {
    SMRGLHeaderPrimitive base; // 0x0
    int vertices[8]; // 0x18
} SMRGLPrimitiveClippedIndex;

