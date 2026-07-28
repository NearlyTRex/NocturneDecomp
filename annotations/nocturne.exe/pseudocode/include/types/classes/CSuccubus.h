#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMorph.h"

// Structure: CSuccubus
// Ghidra size: 0xedd0 (60880 bytes)
#pragma pack(push, 1)
typedef struct CSuccubus {
    CEnemy base; // 0x0
    CDeformableModelInstance hotdemon_model; // 0xbd24
    CClothList hotdemon_cloth_list; // 0xdfd8
    uint sfx_handle; // 0xe194
    float ambient_sfx_cooldown; // 0xe198
    int morph_started; // 0xe19c
    float morph_timer; // 0xe1a0
    CMorph morph; // 0xe1a4
} CSuccubus;
#pragma pack(pop)

