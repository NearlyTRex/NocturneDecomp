#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderBasic.h"

// Structure: SMRGLHeaderExtended
// Ghidra size: 0xc (12 bytes)
#pragma pack(push, 1)
typedef struct SMRGLHeaderExtended {
    SMRGLHeaderBasic base; // 0x0
    int child_count; // 0x8
} SMRGLHeaderExtended;
#pragma pack(pop)

