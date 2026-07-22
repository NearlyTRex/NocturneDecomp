#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMRGLTextureListEntry
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SMRGLTextureListEntry {
    char texture_name[16]; // 0x0
    char metadata[16]; // 0x10
} SMRGLTextureListEntry;
#pragma pack(pop)

