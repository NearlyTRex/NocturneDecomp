#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SHuffmanTable
// Ghidra size: 0x828 (2088 bytes)
#pragma pack(push, 1)
typedef struct SHuffmanTable {
    char table_id[4]; // 0x0
    int xlen; // 0x4
    int ylen; // 0x8
    int linbits; // 0xc
    int max_value; // 0x10
    int reference_index; // 0x14
    int xlen2; // 0x18
    int ylen2; // 0x1c
    char huffman_data[2052]; // 0x20
    int table_size; // 0x824
} SHuffmanTable;
#pragma pack(pop)

