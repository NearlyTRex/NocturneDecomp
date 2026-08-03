#pragma once

// Forward declarations
struct CPodDirectoryEntry;

// Dependencies
#include "system/basetypes.h"

// Structure: CPodFile
// Ghidra size: 0x21c (540 bytes)
#pragma pack(push, 1)
typedef struct CPodFile {
    int pod_format_version; // 0x0
    char filename[256]; // 0x4
    uint timestamp; // 0x104
    char description[256]; // 0x108
    int file_count; // 0x208
    struct CPodDirectoryEntry* directory_entries; // 0x20c
    char* file_data_buffer; // 0x210
    int audit_count; // 0x214
    uint total_file_size; // 0x218
} CPodFile;
#pragma pack(pop)

