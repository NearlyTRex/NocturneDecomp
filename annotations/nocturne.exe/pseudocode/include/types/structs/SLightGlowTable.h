#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SLightGlowSprite.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: SLightGlowTable
// Ghidra size: 0x1e0 (480 bytes)
#pragma pack(push, 1)
typedef struct SLightGlowTable {
    SMRGLTextureBasic fuzz; // 0x0
    SMRGLTextureBasic headlight; // 0x18
    SLightGlowSprite sprites[9]; // 0x30
} SLightGlowTable;
#pragma pack(pop)

