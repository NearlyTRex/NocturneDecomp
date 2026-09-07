#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderBasic.h"

// Structure: SMRGLTextureModel
// Ghidra size: 0x48 (72 bytes)
#pragma pack(push, 1)
typedef struct SMRGLTextureModel {
    SMRGLHeaderBasic base; // 0x0
    char texture_name[64]; // 0x8
} SMRGLTextureModel;
#pragma pack(pop)

