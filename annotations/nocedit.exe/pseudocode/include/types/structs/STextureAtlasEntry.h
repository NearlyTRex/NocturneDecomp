#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STextureAtlasEntry
// Ghidra size: 0x250 (592 bytes)
#pragma pack(push, 1)
typedef struct STextureAtlasEntry {
    char tga_filename[256]; // 0x0
    char original_filename[256]; // 0x100
    uint original_width; // 0x200
    uint original_height; // 0x204
    int processed_width; // 0x208
    int processed_height; // 0x20c
    int atlas_map_index; // 0x210
    int rotation_flag; // 0x214
    int atlas_x; // 0x218
    int atlas_y; // 0x21c
    int atlas_width; // 0x220
    int atlas_height; // 0x224
    int packed_offset_x; // 0x228
    int packed_offset_y; // 0x22c
    int packed_width; // 0x230
    int packed_height; // 0x234
    int quality_level; // 0x238
    uint total_pixel_count; // 0x23c
    int min_u; // 0x240
    int min_v; // 0x244
    int max_u; // 0x248
    int max_v; // 0x24c
} STextureAtlasEntry;
#pragma pack(pop)

