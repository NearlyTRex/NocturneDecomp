#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CDemonFilter
// Ghidra size: 0x4c (76 bytes)
#pragma pack(push, 1)
typedef struct CDemonFilter {
    int size; // 0x0
    int count; // 0x4
    char name[64]; // 0x8
    uchar* data_buffer; // 0x48
} CDemonFilter;
#pragma pack(pop)

