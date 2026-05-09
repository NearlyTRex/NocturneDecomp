#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderExtended.h"

// Structure: SMRGLIndexBlock
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SMRGLIndexBlock {
    SMRGLHeaderExtended base; // 0x0
    int indices[1][2]; // 0xc
} SMRGLIndexBlock;
#pragma pack(pop)

