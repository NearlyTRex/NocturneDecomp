#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CLZWDictionaryNode
// Ghidra size: 0x10 (16 bytes)
typedef struct CLZWDictionaryNode {
    int code; // 0x0
    int parent_index; // 0x4
    int first_child; // 0x8
    int next_sibling; // 0xc
} CLZWDictionaryNode;

