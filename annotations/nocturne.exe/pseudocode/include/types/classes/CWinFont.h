#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"
#include "types/classes/CFont.h"

// Structure: CWinFont
// Ghidra size: 0x13c (316 bytes)
#pragma pack(push, 1)
typedef struct CWinFont {
    CFont base; // 0x0
    HDC device_context_handle; // 0x4
    HBITMAP dib_handle; // 0x8
    HFONT font_handle; // 0xc
    HGDIOBJ object_handle; // 0x10
    void* ppv_bits; // 0x14
    char text_cache[256]; // 0x18
    int cached_string_width; // 0x118
    int cached_string_height; // 0x11c
    int right; // 0x120
    int top; // 0x124
    int bpp; // 0x128
    int cached_foreground_color; // 0x12c
    int cached_background_color; // 0x130
    int y_offset1; // 0x134
    int y_offset2; // 0x138
} CWinFont;
#pragma pack(pop)

