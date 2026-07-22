#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SLightGlowParams.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: SLightGlowSprite
// Ghidra size: 0x30 (48 bytes)
#pragma pack(push, 1)
typedef struct SLightGlowSprite {
    SMRGLTextureBasic texture; // 0x0
    SLightGlowParams params; // 0x18
} SLightGlowSprite;
#pragma pack(pop)

