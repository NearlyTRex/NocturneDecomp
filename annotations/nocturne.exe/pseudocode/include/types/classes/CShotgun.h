#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CShotgun
// Ghidra size: 0x57c (1404 bytes)
#pragma pack(push, 1)
typedef struct CShotgun {
    CWeapon base; // 0x0
    float spread_angle; // 0x570
    int muzzle_flash_active; // 0x574
    float muzzle_flash_distance; // 0x578
} CShotgun;
#pragma pack(pop)

