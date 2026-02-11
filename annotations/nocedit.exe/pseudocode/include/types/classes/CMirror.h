#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMirrorReflection.h"
#include "types/structs/SClipPlane.h"

// Structure: CMirror
// Ghidra size: 0x120 (288 bytes)
typedef struct CMirror {
    CMirrorReflection reflection; // 0x0
    char unk[4]; // 0x94
    SClipPlane clip_planes[5]; // 0x98
    char additional_data[56]; // 0xe8
} CMirror;

