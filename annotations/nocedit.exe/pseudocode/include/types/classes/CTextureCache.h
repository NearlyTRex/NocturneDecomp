#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CTextureCache
// Ghidra size: 0x1400c (81932 bytes)
#pragma pack(push, 1)
typedef struct CTextureCache {
    int wrap_indicator; // 0x0
    int max_texture_count; // 0x4
    int texture_dimensions[1024]; // 0x8
    void* texture_data_ptrs[1024]; // 0x1008
    void* texture_opacity_ptrs[1024]; // 0x2008
    char texture_names[1024][64]; // 0x3008
    byte* texture_palette_ptrs[1024]; // 0x13008
    int current_texture_count; // 0x14008
} CTextureCache;
#pragma pack(pop)

