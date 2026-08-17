#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// Structure: CFileFinder
// Ghidra size: 0x114 (276 bytes)
#pragma pack(push, 1)
typedef struct CFileFinder {
    char filename[256]; // 0x0
    uint attributes; // 0x100
    uint file_size; // 0x104
    uint timestamp; // 0x108
    int has_results; // 0x10c
    HANDLE search_handle; // 0x110
} CFileFinder;
#pragma pack(pop)

