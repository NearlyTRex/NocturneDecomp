#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SFoundFileInfo.h"

// Structure: CPodSearchContext
// Ghidra size: 0x31c (796 bytes)
typedef struct CPodSearchContext {
    SFoundFileInfo current_file_info; // 0x0
    char search_pattern[256]; // 0x214
    int current_pod_index; // 0x314
    int current_file_index; // 0x318
} CPodSearchContext;

