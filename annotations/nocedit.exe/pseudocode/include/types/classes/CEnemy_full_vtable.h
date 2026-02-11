#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"

// Structure: CEnemy_full_vtable
// Ghidra size: 0x164 (356 bytes)
typedef struct CEnemy_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xec
    CEnemy_vtable _ue; // 0x154
} CEnemy_full_vtable;

