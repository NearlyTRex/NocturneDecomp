#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"

// Structure: CCharacter_full_vtable
// Ghidra size: 0x154 (340 bytes)
typedef struct CCharacter_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xec
} CCharacter_full_vtable;

