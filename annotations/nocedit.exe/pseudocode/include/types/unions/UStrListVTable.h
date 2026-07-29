#pragma once

// Forward declarations
struct CPickList_full_vtable;
struct CStrList_vtable;

// Dependencies
#include "system/basetypes.h"

// Union: UStrListVTable
#pragma pack(push, 1)
typedef union UStrListVTable {
    struct CStrList_vtable* _us;
    struct CPickList_full_vtable* _up;
} UStrListVTable;
#pragma pack(pop)

