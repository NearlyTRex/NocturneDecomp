#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/unions/UStrListVTable.h"

// Structure: CStrList
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct CStrList {
    int item_count; // 0x0
    int capacity; // 0x4
    char** data_array; // 0x8
    UStrListVTable vtable; // 0xc
} CStrList;
#pragma pack(pop)

