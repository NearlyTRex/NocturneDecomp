#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderExtended.h"

// Structure: SMRGLPointerArray
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SMRGLPointerArray {
    SMRGLHeaderExtended base; // 0x0
    int entries[1]; // 0xc
} SMRGLPointerArray;
#pragma pack(pop)

