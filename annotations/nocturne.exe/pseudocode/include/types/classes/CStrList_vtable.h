#pragma once

// Forward declarations
struct CStrList;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CStrList_clear.h"
#include "types/funcdefs/CStrList_dtor.h"
#include "types/funcdefs/CStrList_insert.h"
#include "types/funcdefs/CStrList_remove.h"
#include "types/funcdefs/CStrList_sort.h"
#include "types/funcdefs/CStrList_swap.h"

// Structure: CStrList_vtable
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct CStrList_vtable {
    CStrList_dtor* dtor; // 0x0
    CStrList_remove* remove; // 0x4
    CStrList_sort* sort; // 0x8
    CStrList_insert* insert; // 0xc
    CStrList_swap* swap; // 0x10
    CStrList_clear* clear; // 0x14
} CStrList_vtable;
#pragma pack(pop)

