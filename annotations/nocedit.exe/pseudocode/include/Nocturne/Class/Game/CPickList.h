#pragma once

// Structure: CPickList
// Ghidra size: 0x3a8 (936 bytes)
typedef struct CPickList {
    CStrList base_strlist; // 0x0
    char field_16[44]; // 0x10
    int selected_index; // 0x3c
    int state_flag; // 0x40
    char ok_button_text[100]; // 0x44
    char cancel_button_text[100]; // 0xa8
    char search_text_buffer[100]; // 0x10c
    int confirmed_flag; // 0x170
    int character_width; // 0x174
    int field_376; // 0x178
    int current_index; // 0x17c
    int scroll_top; // 0x180
    int page_size; // 0x184
    int vertical_page_size; // 0x188
    int total_content_width; // 0x18c
    int column_count; // 0x190
    int enabled_capacity; // 0x194
    int* enabled_array; // 0x198
    int hotkey_capacity; // 0x19c
    int* hotkey_array; // 0x1a0
    CEdScrollBar scrollbar; // 0x1a4
    int dialog_result; // 0x1d8
    CEdButton ok_button; // 0x1dc
    CEdButton cancel_button; // 0x2c0
    int selection_state; // 0x3a4
} CPickList;

