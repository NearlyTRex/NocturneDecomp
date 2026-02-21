#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"

// Structure: CDynamite
// Ghidra size: 0x58c (1420 bytes)
typedef struct CDynamite {
    CWeapon base; // 0x0
    float fuse_timer; // 0x578
    CVector3f toss_velocity; // 0x57c
    uint sfx_handle; // 0x588
} CDynamite;

