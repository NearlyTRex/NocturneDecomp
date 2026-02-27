#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegLayer3GranuleInfo
// Ghidra size: 0x48 (72 bytes)
typedef struct SMpegLayer3GranuleInfo {
    int part_2_3_length; // 0x0
    int big_value_pair_count; // 0x4
    int global_gain; // 0x8
    int scalefac_compress; // 0xc
    int window_switching_flag; // 0x10
    int block_type; // 0x14
    int mixed_block_flag; // 0x18
    int table_select[3]; // 0x1c
    int subblock_gain[3]; // 0x28
    int region0_count; // 0x34
    int region1_count; // 0x38
    int preflag; // 0x3c
    int scalefac_scale; // 0x40
    int count_1_table_select; // 0x44
} SMpegLayer3GranuleInfo;

