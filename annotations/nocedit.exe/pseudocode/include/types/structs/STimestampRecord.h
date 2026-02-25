#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STimestampRecord
// Ghidra size: 0x148 (328 bytes)
typedef struct STimestampRecord {
    char filename[256]; // 0x0
    uint record_number; // 0x100
    int second; // 0x104
    int minute; // 0x108
    int hour; // 0x10c
    int day; // 0x110
    int month; // 0x114
    int year; // 0x118
    char dead[12]; // 0x11c
    char username[32]; // 0x128
} STimestampRecord;

