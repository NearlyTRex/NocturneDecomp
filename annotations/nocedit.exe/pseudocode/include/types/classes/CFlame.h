#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CVector3f.h"

// Structure: CFlame
// Ghidra size: 0x2a4 (676 bytes)
typedef struct CFlame {
    CDemonActor base; // 0x0
    CVector3f flame_size; // 0x158
    float animation_time; // 0x164
    CDemonGlobe globe; // 0x168
    int which_flame; // 0x1a8
    float globe_scalar; // 0x1ac
    uint sfx_handle; // 0x1b0
    int flame_state; // 0x1b4
    char on_event[100]; // 0x1b8
    char off_event[100]; // 0x21c
    float intensity; // 0x280
    float randomness; // 0x284
    int burn_hero; // 0x288
    int burn_enemy; // 0x28c
    int is_visible; // 0x290
    int texture_flip; // 0x294
    int do_visibility_check; // 0x298
    int enemy_burn_index; // 0x29c
    int render_corona; // 0x2a0
} CFlame;

