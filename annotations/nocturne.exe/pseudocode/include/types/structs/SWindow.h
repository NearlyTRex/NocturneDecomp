#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SProjectionParams.h"
#include "types/structs/SWindowRect.h"

// Structure: SWindow
// Ghidra size: 0x1e8 (488 bytes)
#pragma pack(push, 1)
typedef struct SWindow {
    SWindowRect rect; // 0x0
    SWindowRect saved_clip; // 0x10
    SProjectionParams saved_projection; // 0x20
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
#pragma pack(pop)

