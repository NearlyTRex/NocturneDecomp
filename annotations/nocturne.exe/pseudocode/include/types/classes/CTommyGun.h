#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CTommyGun
// Ghidra size: 0x57c (1404 bytes)
#pragma pack(push, 1)
typedef struct CTommyGun {
    CWeapon base; // 0x0
    int fire_frames_remaining; // 0x570
    uint sfx_handles[2]; // 0x574
} CTommyGun;
#pragma pack(pop)

