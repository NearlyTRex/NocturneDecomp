#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CShotgun
// Ghidra size: 0x584 (1412 bytes)
typedef struct CShotgun {
    CWeapon base; // 0x0
    float spread_angle; // 0x578
    int muzzle_flash_active; // 0x57c
    float muzzle_flash_distance; // 0x580
} CShotgun;

