#pragma once

// Structure: SMpegLayer3Granule
// Ghidra size: 0xa0 (160 bytes)
typedef struct SMpegLayer3Granule {
    int field_0; // 0x0
    int field_4; // 0x4
    char field_8[16]; // 0x8
    int part_2_3_length_maybe; // 0x18
    int big_value_pair_count; // 0x1c
    int global_gain; // 0x20
    int scalefac_compress; // 0x24
    int window_switching_flag; // 0x28
    int block_type; // 0x2c
    int mixed_block_flag; // 0x30
    int table_select[3]; // 0x34
    int subblock_gain[3]; // 0x40
    int region0_count; // 0x4c
    int region1_count; // 0x50
    int preflag; // 0x54
    int scalefac_scale; // 0x58
    int count_1_table_select; // 0x5c
    char field_96[64]; // 0x60
} SMpegLayer3Granule;

