#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CVector3f.h"

// Structure: CFlame
// Ghidra size: 0x29c (668 bytes)
#pragma pack(push, 1)
typedef struct CFlame {
    CDemonActor base; // 0x0
    CVector3f flame_size; // 0x150
    float animation_time; // 0x15c
    CDemonGlobe globe; // 0x160
    int which_flame; // 0x1a0
    float globe_scalar; // 0x1a4
    uint sfx_handle; // 0x1a8
    int flame_state; // 0x1ac
    char on_event[100]; // 0x1b0
    char off_event[100]; // 0x214
    float intensity; // 0x278
    float randomness; // 0x27c
    int burn_hero; // 0x280
    int burn_enemy; // 0x284
    int is_visible; // 0x288
    int texture_flip; // 0x28c
    int do_visibility_check; // 0x290
    int enemy_burn_index; // 0x294
    int render_corona; // 0x298
} CFlame;
#pragma pack(pop)

