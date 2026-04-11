#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// Structure: CPodAuditRecord
// Ghidra size: 0x138 (312 bytes)
typedef struct CPodAuditRecord {
    char user_path[32]; // 0x0
    time_t timestamp; // 0x20
    int operation_type; // 0x24
    char filename[256]; // 0x28
    int original_timestamp; // 0x128
    int original_file_size; // 0x12c
    int file_offset; // 0x130
    int compressed_size; // 0x134
} CPodAuditRecord;

