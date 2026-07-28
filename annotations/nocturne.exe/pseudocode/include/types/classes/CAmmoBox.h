#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/enums/EAmmoBoxType.h"

// Structure: CAmmoBox
// Ghidra size: 0x344 (836 bytes)
#pragma pack(push, 1)
typedef struct CAmmoBox {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    char weapon_class_name[64]; // 0x2cc
    int ammo_count; // 0x30c
    EAmmoBoxType ammo_type; // 0x310
    float open_pct; // 0x314
    struct CDemonActor* item; // 0x318
    int has_collision; // 0x31c
    char open_sound[32]; // 0x320
    int is_sound_playing; // 0x340
} CAmmoBox;
#pragma pack(pop)

