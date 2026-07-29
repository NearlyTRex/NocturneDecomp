#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"

// Structure: CDynamite
// Ghidra size: 0x584 (1412 bytes)
#pragma pack(push, 1)
typedef struct CDynamite {
    CWeapon base; // 0x0
    float fuse_timer; // 0x570
    CVector3f toss_velocity; // 0x574
    uint sfx_handle; // 0x580
} CDynamite;
#pragma pack(pop)

