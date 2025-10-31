#pragma once

// Structure: SWindow
// Ghidra size: 0x1e8 (488 bytes)
typedef struct SWindow {
    int left; // 0x0
    int top; // 0x4
    int right; // 0x8
    int bottom; // 0xc
    int saved_clip_left; // 0x10
    int saved_clip_top; // 0x14
    int saved_clip_right; // 0x18
    int saved_clip_bottom; // 0x1c
    int saved_viewport_center_x; // 0x20
    int saved_viewport_center_y; // 0x24
    int saved_viewport_right; // 0x28
    int saved_viewport_bottom; // 0x2c
    int saved_viewport_width; // 0x30
    int saved_viewport_height; // 0x34
    char text_buffer[400]; // 0x38
    void* screen_backup_buffer; // 0x1c8
    int backup_x_offset; // 0x1cc
    int backup_y_offset; // 0x1d0
    int backup_width; // 0x1d4
    int backup_height; // 0x1d8
    int progress_start_time; // 0x1dc
    int progress_percentage; // 0x1e0
    int progress_timestamp; // 0x1e4
} SWindow;

