#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CCodec.h"
#include "types/classes/CLZWDictionary.h"

// Structure: CLZWCompress
// Ghidra size: 0x38 (56 bytes)
#pragma pack(push, 1)
typedef struct CLZWCompress {
    CCodec base; // 0x0
    CLZWDictionary dictionary; // 0x4
    int buffer_size; // 0x20
    int num_bits; // 0x24
    _BIT_INTEGER32 char_mask; // 0x28
    int prev_char_code; // 0x2c
    int current_code; // 0x30
    int prev_code; // 0x34
} CLZWCompress;
#pragma pack(pop)

