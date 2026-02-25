#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SHuffmanTableSource
// Ghidra size: 0x18 (24 bytes)
typedef struct SHuffmanTableSource {
    int table_size; // 0x0
    int xlen; // 0x4
    int ylen; // 0x8
    int bits; // 0xc
    int reference_index; // 0x10
    char* huffman_data_ptr; // 0x14
} SHuffmanTableSource;

