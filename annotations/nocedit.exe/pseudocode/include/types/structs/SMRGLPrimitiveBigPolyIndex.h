#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// Structure: SMRGLPrimitiveBigPolyIndex
// Ghidra size: 0x58 (88 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPrimitiveBigPolyIndex {
    SMRGLHeaderPrimitive base; // 0x0
    int vertices[16]; // 0x18
} SMRGLPrimitiveBigPolyIndex;
#pragma pack(pop)

