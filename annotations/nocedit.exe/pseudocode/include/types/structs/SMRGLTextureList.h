#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLTextureListEntry.h"

// Structure: SMRGLTextureList
// Ghidra size: 0x3c (60 bytes)
#pragma pack(push, 1)
typedef struct SMRGLTextureList {
    SMRGLHeaderExtended base; // 0x0
    int reserved[4]; // 0xc
    SMRGLTextureListEntry entries[1]; // 0x1c
} SMRGLTextureList;
#pragma pack(pop)

