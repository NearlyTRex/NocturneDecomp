#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SMRGLHeaderBasic.h"

// Structure: SMRGLHeaderPrimitive
// Ghidra size: 0x18 (24 bytes)
typedef struct SMRGLHeaderPrimitive {
    SMRGLHeaderBasic base; // 0x0
    SClipPlane surface_normal; // 0x8
} SMRGLHeaderPrimitive;

