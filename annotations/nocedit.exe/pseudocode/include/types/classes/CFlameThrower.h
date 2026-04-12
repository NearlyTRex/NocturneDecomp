#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CFlameThrower
// Ghidra size: 0x588 (1416 bytes)
#pragma pack(push, 1)
typedef struct CFlameThrower {
    CWeapon base; // 0x0
    int is_firing; // 0x578
    uint sfx_handle; // 0x57c
    int was_firing_prev_frame; // 0x580
    float fire_rate_timer; // 0x584
} CFlameThrower;
#pragma pack(pop)

