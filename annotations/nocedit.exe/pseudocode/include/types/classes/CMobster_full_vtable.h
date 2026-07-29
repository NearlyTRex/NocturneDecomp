#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"
#include "types/classes/CMobster_vtable.h"

// Structure: CMobster_full_vtable
// Ghidra size: 0x164 (356 bytes)
#pragma pack(push, 1)
typedef struct CMobster_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xec
    CEnemy_vtable _ue; // 0x154
    CMobster_vtable _um; // 0x160
} CMobster_full_vtable;
#pragma pack(pop)

