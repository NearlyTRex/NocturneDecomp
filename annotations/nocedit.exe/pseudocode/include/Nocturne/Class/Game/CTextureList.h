#pragma once

// Structure: CTextureList
// Ghidra size: 0x1a5ec (108012 bytes)
typedef struct CTextureList {
    int texture_count; // 0x0
    SMRGLTextureBasic texture_entries[1000]; // 0x4
    int texture_values[1000]; // 0x5dc4
    int master_texture_count; // 0x6d64
    char master_texture_names[5000][16]; // 0x6d68
    int current_master_selection; // 0x1a5e8
} CTextureList;

