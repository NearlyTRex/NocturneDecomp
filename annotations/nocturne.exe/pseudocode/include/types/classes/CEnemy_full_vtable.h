#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"

// Structure: CEnemy_full_vtable
// Ghidra size: 0x140 (320 bytes)
#pragma pack(push, 1)
typedef struct CEnemy_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xd0
    CEnemy_vtable _ue; // 0x138
} CEnemy_full_vtable;
#pragma pack(pop)

