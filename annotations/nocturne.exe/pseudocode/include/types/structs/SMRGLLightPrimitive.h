#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SMRGLHeaderBasicCountOnly.h"

// Structure: SMRGLLightPrimitive
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct SMRGLLightPrimitive {
    SMRGLHeaderBasicCountOnly base; // 0x0
    SClipPlane normal; // 0x4
    int vertices[4]; // 0x14
} SMRGLLightPrimitive;
#pragma pack(pop)

