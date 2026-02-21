#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMorph.h"

// Structure: CSuccubus
// Ghidra size: 0xef68 (61288 bytes)
typedef struct CSuccubus {
    CEnemy base; // 0x0
    CDeformableModelInstance hotdemon_model; // 0xbebc
    CClothList hotdemon_cloth_list; // 0xe170
    uint sfx_handle; // 0xe32c
    float ambient_sfx_cooldown; // 0xe330
    int morph_started; // 0xe334
    float morph_timer; // 0xe338
    CMorph morph; // 0xe33c
} CSuccubus;

