#pragma once

// Structure: CStrList
// Ghidra size: 0x10 (16 bytes)
typedef struct CStrList {
    int item_count; // 0x0
    int capacity; // 0x4
    char** data_array; // 0x8
    CStrList_vtable* vtable; // 0xc
} CStrList;

