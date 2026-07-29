#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CHero_vtable.h"

// Structure: CHero_full_vtable
// Ghidra size: 0x148 (328 bytes)
#pragma pack(push, 1)
typedef struct CHero_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xd0
    CHero_vtable _uh; // 0x138
} CHero_full_vtable;
#pragma pack(pop)

