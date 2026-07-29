#pragma once

// Forward declarations
struct CPickList;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CPickList_handleInput.h"

// Structure: CPickList_vtable
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CPickList_vtable {
    CPickList_handleInput* handleInput; // 0x0
} CPickList_vtable;
#pragma pack(pop)

