#pragma once

// Forward declarations
struct CStrList_vtable;

// Dependencies
#include "system/basetypes.h"

// Structure: CStrList
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct CStrList {
    int item_count; // 0x0
    int capacity; // 0x4
    char** data_array; // 0x8
    struct CStrList_vtable* vtable; // 0xc
} CStrList;
#pragma pack(pop)

