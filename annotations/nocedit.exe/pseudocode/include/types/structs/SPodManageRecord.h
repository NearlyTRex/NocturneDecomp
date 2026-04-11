#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPodManageRecord
// Ghidra size: 0x39c (924 bytes)
typedef struct SPodManageRecord {
    char base_name[256]; // 0x0
    char pod_name[260]; // 0x100
    char network_path[260]; // 0x204
    char checked_out_by[100]; // 0x308
    char* status_description; // 0x36c
    int comparison_result; // 0x370
    int is_mounted; // 0x374
    int action_index; // 0x378
    int count_newer_local; // 0x37c
    int count_older_local; // 0x380
    int count_missing_local; // 0x384
    int count_different; // 0x388
    int count_in_sync; // 0x38c
    int total_file_count; // 0x390
    uint timestamp; // 0x394
    uint file_size; // 0x398
} SPodManageRecord;

