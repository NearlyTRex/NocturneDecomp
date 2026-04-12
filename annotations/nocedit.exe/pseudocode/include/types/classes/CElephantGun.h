#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CElephantGun
// Ghidra size: 0x584 (1412 bytes)
#pragma pack(push, 1)
typedef struct CElephantGun {
    CWeapon base; // 0x0
    float spread_angle; // 0x578
    int muzzle_flash_active; // 0x57c
    float projectile_distance; // 0x580
} CElephantGun;
#pragma pack(pop)

