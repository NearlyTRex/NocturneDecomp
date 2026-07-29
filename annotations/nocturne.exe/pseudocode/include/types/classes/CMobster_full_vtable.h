#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CEnemy_vtable.h"
#include "types/classes/CMobster_vtable.h"

// Structure: CMobster_full_vtable
// Ghidra size: 0x144 (324 bytes)
#pragma pack(push, 1)
typedef struct CMobster_full_vtable {
    CDemonActor_vtable _ud; // 0x0
    CCharacter_vtable _uc; // 0xd0
    CEnemy_vtable _ue; // 0x138
    CMobster_vtable _um; // 0x140
} CMobster_full_vtable;
#pragma pack(pop)

