#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/enums/EAmmoType.h"

// Structure: CAmmo
// Ghidra size: 0x314 (788 bytes)
#pragma pack(push, 1)
typedef struct CAmmo {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    char weapon_class_name[64]; // 0x2cc
    int ammo_count; // 0x30c
    EAmmoType ammo_type; // 0x310
} CAmmo;
#pragma pack(pop)

