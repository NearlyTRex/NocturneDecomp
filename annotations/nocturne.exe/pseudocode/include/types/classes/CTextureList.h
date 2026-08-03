#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CTextureList
// Ghidra size: 0x6d64 (28004 bytes)
#pragma pack(push, 1)
typedef struct CTextureList {
    int texture_count; // 0x0
    SMRGLTextureBasic texture_entries[1000]; // 0x4
    int texture_values[1000]; // 0x5dc4
} CTextureList;
#pragma pack(pop)

