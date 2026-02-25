#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMirrorReflection.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SMRGLPrimitiveClippedIndex.h"

// Structure: CMirror
// Ghidra size: 0x120 (288 bytes)
typedef struct CMirror {
    CMirrorReflection reflection; // 0x0
    int dead; // 0x94
    SClipPlane clip_planes[5]; // 0x98
    SMRGLPrimitiveClippedIndex clip_primitive; // 0xe8
} CMirror;

