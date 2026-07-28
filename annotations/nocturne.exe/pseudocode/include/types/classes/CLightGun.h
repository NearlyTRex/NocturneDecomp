#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CLightGun
// Ghidra size: 0x588 (1416 bytes)
#pragma pack(push, 1)
typedef struct CLightGun {
    CWeapon base; // 0x0
    int fire_flash_pending; // 0x570
    uint sfx_handle; // 0x574
    float charge_level; // 0x578
    float charge_ratio; // 0x57c
    int hit_enemy; // 0x580
    float beam_length; // 0x584
} CLightGun;
#pragma pack(pop)

