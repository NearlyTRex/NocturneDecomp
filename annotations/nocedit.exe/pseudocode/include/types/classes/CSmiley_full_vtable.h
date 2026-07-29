#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"
#include "types/classes/CSmiley_vtable.h"

// Structure: CSmiley_full_vtable
// Ghidra size: 0x164 (356 bytes)
#pragma pack(push, 1)
typedef struct CSmiley_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xec
    CEnemy_vtable _ue; // 0x154
    CSmiley_vtable _us; // 0x160
} CSmiley_full_vtable;
#pragma pack(pop)

