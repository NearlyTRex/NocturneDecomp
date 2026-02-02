#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/enums/EAmmoType.h"

// Structure: CAmmo
// Ghidra size: 0x31c (796 bytes)
typedef struct CAmmo {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char weapon_class_name[64]; // 0x2d4
    int ammo_count; // 0x314
    EAmmoType ammo_type; // 0x318
} CAmmo;

