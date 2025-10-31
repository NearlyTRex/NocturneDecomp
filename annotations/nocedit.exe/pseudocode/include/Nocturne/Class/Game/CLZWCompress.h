#pragma once

// Structure: CLZWCompress
// Ghidra size: 0x38 (56 bytes)
typedef struct CLZWCompress {
    CCodec base_codec; // 0x0
    CLZWDictionary dictionary; // 0x4
    char field_32[8]; // 0x20
    int char_mask; // 0x28
    int prev_char_code; // 0x2c
    int current_code; // 0x30
    int prev_code; // 0x34
} CLZWCompress;

