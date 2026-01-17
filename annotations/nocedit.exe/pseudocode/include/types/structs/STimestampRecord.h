#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STimestampRecord
// Ghidra size: 0x148 (328 bytes)
typedef struct STimestampRecord {
    int record_start; // 0x0
    char field_4[256]; // 0x4
    int chars_read; // 0x104
    int time_1; // 0x108
    int time_2; // 0x10c
    int time_3; // 0x110
    int month; // 0x114
    int year; // 0x118
    char field_284[44]; // 0x11c
} STimestampRecord;

