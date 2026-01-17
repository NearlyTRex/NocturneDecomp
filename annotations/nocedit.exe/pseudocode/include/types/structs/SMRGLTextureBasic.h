#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderBasic.h"

// Structure: SMRGLTextureBasic
// Ghidra size: 0x18 (24 bytes)
typedef struct SMRGLTextureBasic {
    SMRGLHeaderBasic base; // 0x0
    char texture_name[16]; // 0x8
} SMRGLTextureBasic;

