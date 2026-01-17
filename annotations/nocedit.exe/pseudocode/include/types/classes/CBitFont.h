#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/wingdi.h"
#include "system/winuser.h"
#include "types/classes/CFont.h"
#include "types/classes/CWinFont.h"

// Structure: CBitFont
// Ghidra size: 0x3198 (12696 bytes)
typedef struct CBitFont {
    int bitmap_count; // 0x0
    char bitmap_files[4][80]; // 0x4
    void* bitmap_data[4]; // 0x144
    int bitmap_widths[4]; // 0x154
    char palette_data[3072]; // 0x164
    uint palettes_display[4][256]; // 0xd64
    int is_initialized; // 0x1d64
    int char_positions[256]; // 0x1d68
    int char_bitmap_index[256]; // 0x2168
    int char_widths[256]; // 0x2568
    int char_heights[256]; // 0x2968
    int char_x_advance[256]; // 0x2d68
    int max_char_height; // 0x3168
    int max_char_width; // 0x316c
    int current_max_width; // 0x3170
    int char_spacing; // 0x3174
    int line_spacing; // 0x3178
    int font_type; // 0x317c
    int font_enabled; // 0x3180
    int rendering_ready; // 0x3184
    int load_flags; // 0x3188
    int field_12684; // 0x318c
    int win_font_enabled; // 0x3190
    struct CWinFont* win_font_helper; // 0x3194
} CBitFont;

