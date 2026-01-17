#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CLZWDictionaryNode
// Ghidra size: 0x10 (16 bytes)
typedef struct CLZWDictionaryNode {
    int code; // 0x0
    int prefix_code; // 0x4
    int suffix_char; // 0x8
    int next_link; // 0xc
} CLZWDictionaryNode;

