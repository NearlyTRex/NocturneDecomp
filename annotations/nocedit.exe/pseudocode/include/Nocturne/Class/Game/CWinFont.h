#pragma once

// Structure: CWinFont
// Ghidra size: 0x13c (316 bytes)
typedef struct CWinFont {
    CFont base_font; // 0x0
    HDC deviceContextHandle; // 0x4
    HBITMAP dibHandle; // 0x8
    HFONT fontHandle; // 0xc
    HGDIOBJ objectHandle; // 0x10
    void** ppvBits; // 0x14
    char text_cache[256]; // 0x18
    int cached_string_width; // 0x118
    int cached_string_height; // 0x11c
    int right; // 0x120
    int top; // 0x124
    int bpp; // 0x128
    int cached_foreground_color; // 0x12c
    int cached_background_color; // 0x130
    int yOffset1; // 0x134
    int yOffset2; // 0x138
} CWinFont;

