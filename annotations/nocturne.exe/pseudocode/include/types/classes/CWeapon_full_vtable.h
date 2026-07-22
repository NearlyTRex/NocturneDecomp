#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CWeapon_vtable.h"

// Structure: CWeapon_full_vtable
// Ghidra size: 0x10c (268 bytes)
#pragma pack(push, 1)
typedef struct CWeapon_full_vtable {
    CDemonActor_vtable _ub; // 0x0
    CWeapon_vtable _uw; // 0xec
} CWeapon_full_vtable;
#pragma pack(pop)

