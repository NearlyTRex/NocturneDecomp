#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEdScrollBar.h"
#include "types/classes/CStrList.h"

// Structure: CPickList
// Ghidra size: 0x170 (368 bytes)
#pragma pack(push, 1)
typedef struct CPickList {
    CStrList base; // 0x0
    int forced_column_count; // 0x10
    char hotkeys[100]; // 0x14
    int state_flag; // 0x78
    int tab_column_widths[10]; // 0x7c
    int tab_column_count; // 0xa4
    char search_text_buffer[100]; // 0xa8
    int confirmed_flag; // 0x10c
    int character_width; // 0x110
    int column_padding; // 0x114
    int current_index; // 0x118
    int scroll_top; // 0x11c
    int page_size; // 0x120
    int vertical_page_size; // 0x124
    int total_content_width; // 0x128
    int column_count; // 0x12c
    int enabled_capacity; // 0x130
    int* enabled_array; // 0x134
    CEdScrollBar scrollbar; // 0x138
    int dialog_result; // 0x16c
} CPickList;
#pragma pack(pop)

