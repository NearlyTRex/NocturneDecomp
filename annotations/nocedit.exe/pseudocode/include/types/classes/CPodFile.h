#pragma once

// Forward declarations
struct CPodDirectoryEntry;

// Dependencies
#include "system/basetypes.h"

// Structure: CPodFile
// Ghidra size: 0x42c (1068 bytes)
typedef struct CPodFile {
    int pod_format_version; // 0x0
    char filename[256]; // 0x4
    uint filesize; // 0x104
    char description[256]; // 0x108
    char author_info[256]; // 0x208
    char copyright_info[256]; // 0x308
    int mount_priority; // 0x408
    uint format_flags; // 0x40c
    int file_count; // 0x410
    struct CPodDirectoryEntry* directory_entries; // 0x414
    char* file_data_buffer; // 0x418
    uint audit_count; // 0x41c
    uint total_file_size; // 0x420
    int dependency_count; // 0x424
    uint dependency_records_offset; // 0x428
} CPodFile;

