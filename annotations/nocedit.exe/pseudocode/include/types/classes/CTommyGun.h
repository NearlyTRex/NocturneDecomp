#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CTommyGun
// Ghidra size: 0x584 (1412 bytes)
typedef struct CTommyGun {
    CWeapon base; // 0x0
    int fire_frames_remaining; // 0x578
    uint sfx_handles[2]; // 0x57c
} CTommyGun;

