#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CFlameThrower
// Ghidra size: 0x580 (1408 bytes)
#pragma pack(push, 1)
typedef struct CFlameThrower {
    CWeapon base; // 0x0
    int is_firing; // 0x570
    uint sfx_handle; // 0x574
    int was_firing_prev_frame; // 0x578
    float fire_rate_timer; // 0x57c
} CFlameThrower;
#pragma pack(pop)

