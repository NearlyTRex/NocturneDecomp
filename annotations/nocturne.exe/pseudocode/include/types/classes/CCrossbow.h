#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CFlame.h"
#include "types/classes/CWeapon.h"

// Structure: CCrossbow
// Ghidra size: 0x810 (2064 bytes)
#pragma pack(push, 1)
typedef struct CCrossbow {
    CWeapon base; // 0x0
    int flame_active; // 0x570
    CFlame bolt_flame; // 0x574
} CCrossbow;
#pragma pack(pop)

