#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SBitAllocationTable
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct SBitAllocationTable {
    int table_version; // 0x0
    int num_lines; // 0x4
    void* allocation_data_ptr; // 0x8
    int table_index; // 0xc
    int num_subbands; // 0x10
    int num_allocation_groups; // 0x14
    int num_granules; // 0x18
} SBitAllocationTable;
#pragma pack(pop)

