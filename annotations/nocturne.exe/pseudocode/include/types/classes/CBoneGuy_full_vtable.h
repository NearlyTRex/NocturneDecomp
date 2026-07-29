#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoneGuy_vtable.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"

// Structure: CBoneGuy_full_vtable
// Ghidra size: 0x144 (324 bytes)
#pragma pack(push, 1)
typedef struct CBoneGuy_full_vtable {
    CDemonActor_vtable _ud; // 0x0
    CCharacter_vtable _uc; // 0xd0
    CEnemy_vtable _ue; // 0x138
    CBoneGuy_vtable _ub; // 0x140
} CBoneGuy_full_vtable;
#pragma pack(pop)

