#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCodec.h"
#include "types/classes/CLZWDictionary.h"

// Structure: CLZWDecompress
// Ghidra size: 0x30 (48 bytes)
typedef struct CLZWDecompress {
    CCodec base_codec; // 0x0
    CLZWDictionary lzw_dict; // 0x4
    int buffer_size; // 0x20
    int num_bits; // 0x24
    int previous_code; // 0x28
    int current_code; // 0x2c
} CLZWDecompress;

