#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CLightGun
// Ghidra size: 0x590 (1424 bytes)
typedef struct CLightGun {
    CWeapon base; // 0x0
    int fire_flash_pending; // 0x578
    uint sfx_handle; // 0x57c
    float charge_level; // 0x580
    float charge_ratio; // 0x584
    int hit_enemy; // 0x588
    float beam_length; // 0x58c
} CLightGun;

