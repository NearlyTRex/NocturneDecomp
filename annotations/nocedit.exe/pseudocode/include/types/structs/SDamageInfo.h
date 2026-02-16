#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SDamageInfo
// Ghidra size: 0x3c (60 bytes)
typedef struct SDamageInfo {
    int fire_type; // 0x0
    float damage_amount; // 0x4
    int damage_flags; // 0x8
    CVector3f impact_point; // 0xc
    float impact_force; // 0x18
    CVector3f impact_direction; // 0x1c
    int ammo_type; // 0x28
    float weapon_damage_modifier; // 0x2c
    int damage_type; // 0x30
    struct CDemonActor* attacker; // 0x34
    struct CDemonActor* wielder; // 0x38
} SDamageInfo;

