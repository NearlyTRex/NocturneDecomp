#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegAllocationEntry
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SMpegAllocationEntry {
    int value_range; // 0x0
    int bit_count; // 0x4
    int mode_flag; // 0x8
    int requantization_index; // 0xc
} SMpegAllocationEntry;
#pragma pack(pop)

