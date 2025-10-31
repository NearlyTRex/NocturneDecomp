#pragma once

// Structure: CTextureCache
// Ghidra size: 0x1400c (81932 bytes)
typedef struct CTextureCache {
    int wrap_indicator; // 0x0
    int max_texture_count; // 0x4
    int texture_dimensions[1022]; // 0x8
    char field_4096[8]; // 0x1000
    void* texture_data_ptrs[1022]; // 0x1008
    char field_8192[8]; // 0x2000
    void* texture_opacity_ptrs[1022]; // 0x2008
    char field_12288[8]; // 0x3000
    char texture_names[1022][64]; // 0x3008
    char field_77704[128]; // 0x12f88
    byte* texture_palette_ptrs[1022]; // 0x13008
    char field_81920[8]; // 0x14000
    int current_texture_count; // 0x14008
} CTextureCache;

