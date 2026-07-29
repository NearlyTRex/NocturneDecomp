#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter_vtable.h"
#include "types/classes/CDemonActor_vtable.h"

// Structure: CCharacter_full_vtable
// Ghidra size: 0x138 (312 bytes)
#pragma pack(push, 1)
typedef struct CCharacter_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CCharacter_vtable _uc; // 0xd0
} CCharacter_full_vtable;
#pragma pack(pop)

