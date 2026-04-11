#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Structure: SFileTrackingEntry
// Ghidra size: 0x328 (808 bytes)
typedef struct SFileTrackingEntry {
    char filename[260]; // 0x0
    char directory[260]; // 0x104
    char mode[20]; // 0x208
    char source_file[260]; // 0x21c
    int line_number; // 0x320
    struct _FILE* file_ptr; // 0x324
} SFileTrackingEntry;

