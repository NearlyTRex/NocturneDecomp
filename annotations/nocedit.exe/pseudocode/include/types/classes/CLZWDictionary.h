#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CLZWDictionaryNode.h"
#include "types/structs/SBitBuffer.h"

// Structure: CLZWDictionary
// Ghidra size: 0x1c (28 bytes)
typedef struct CLZWDictionary {
    int dict_size; // 0x0
    int num_bits; // 0x4
    int current_num_bits; // 0x8
    int max_entries; // 0xc
    struct CLZWDictionaryNode* node_table; // 0x10
    SBitBuffer bit_state; // 0x14
} CLZWDictionary;

