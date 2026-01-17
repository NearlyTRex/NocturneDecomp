#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CStrList_vtable.h"
#include "types/funcdefs/CStrList_clear.h"
#include "types/funcdefs/CStrList_dtor.h"
#include "types/funcdefs/CStrList_handleInput.h"
#include "types/funcdefs/CStrList_insert.h"
#include "types/funcdefs/CStrList_remove.h"
#include "types/funcdefs/CStrList_sort.h"
#include "types/funcdefs/CStrList_swap.h"

// Structure: CStrList
// Ghidra size: 0x10 (16 bytes)
typedef struct CStrList {
    int item_count; // 0x0
    int capacity; // 0x4
    char** data_array; // 0x8
    struct CStrList_vtable* vtable; // 0xc
} CStrList;

