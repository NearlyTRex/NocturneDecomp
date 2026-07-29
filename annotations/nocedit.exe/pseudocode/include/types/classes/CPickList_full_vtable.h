#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPickList_vtable.h"
#include "types/classes/CStrList_vtable.h"

// Structure: CPickList_full_vtable
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct CPickList_full_vtable {
    CStrList_vtable _us; // 0x0
    CPickList_vtable _up; // 0x18
} CPickList_full_vtable;
#pragma pack(pop)

