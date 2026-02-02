#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/enums/EAmmoBoxType.h"

// Structure: CAmmoBox
// Ghidra size: 0x4a4 (1188 bytes)
typedef struct CAmmoBox {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char weapon_class_name[64]; // 0x2d4
    int ammo_count; // 0x314
    EAmmoBoxType ammo_type; // 0x318
    float unk1; // 0x31c
    char* item; // 0x320
    int has_collision; // 0x324
    char open_sound[380]; // 0x328
} CAmmoBox;

