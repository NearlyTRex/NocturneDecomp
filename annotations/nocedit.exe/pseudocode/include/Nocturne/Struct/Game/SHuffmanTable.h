#pragma once

// Structure: SHuffmanTable
// Ghidra size: 0x828 (2088 bytes)
typedef struct SHuffmanTable {
    char table_id[4]; // 0x0
    int xlen; // 0x4
    int ylen; // 0x8
    int linbits; // 0xc
    int max_value; // 0x10
    int reference_index; // 0x14
    int field_24; // 0x18
    int field_28; // 0x1c
    char huffman_data[2052]; // 0x20
    int table_size; // 0x824
} SHuffmanTable;

