#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CFlame.h"
#include "types/classes/CWeapon.h"

// Structure: CCrossbow
// Ghidra size: 0x820 (2080 bytes)
typedef struct CCrossbow {
    CWeapon base; // 0x0
    int flame_active; // 0x578
    CFlame bolt_flame; // 0x57c
} CCrossbow;

