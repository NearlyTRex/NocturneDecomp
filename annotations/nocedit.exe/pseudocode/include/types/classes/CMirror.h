#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMirrorReflection.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SMRGLPrimitivePolyIndex.h"

// Structure: CMirror
// Ghidra size: 0x120 (288 bytes)
#pragma pack(push, 1)
typedef struct CMirror {
    CMirrorReflection reflection; // 0x0
    int dead; // 0x94
    SClipPlane clip_planes[5]; // 0x98
    SMRGLPrimitivePolyIndex clip_primitive; // 0xe8
} CMirror;
#pragma pack(pop)

