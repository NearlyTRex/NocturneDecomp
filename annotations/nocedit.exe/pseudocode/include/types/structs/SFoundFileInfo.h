#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SFoundFileInfo
// Ghidra size: 0x214 (532 bytes)
typedef struct SFoundFileInfo {
    char found_path[256]; // 0x0
    char target_path[256]; // 0x100
    uint file_offset; // 0x200
    uint file_size; // 0x204
    int is_archive; // 0x208
    uint timestamp; // 0x20c
    uint container_size; // 0x210
} SFoundFileInfo;

