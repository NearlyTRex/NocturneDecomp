#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderBasic.h"

// Structure: SMRGLSkyTexture
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct SMRGLSkyTexture {
    SMRGLHeaderBasic base; // 0x0
    int reserved; // 0x8
    char texture_name[12]; // 0xc
} SMRGLSkyTexture;
#pragma pack(pop)

