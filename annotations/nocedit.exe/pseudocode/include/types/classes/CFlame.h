#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CFlame
// Ghidra size: 0x2a4 (676 bytes)
typedef struct CFlame {
    CDemonActor base; // 0x0
    CVector3f flame_size; // 0x158
    char unk1[68]; // 0x164
    int which_flame; // 0x1a8
    float globe_scalar; // 0x1ac
    char unk2[4]; // 0x1b0
    int flame_state; // 0x1b4
    char on_event[100]; // 0x1b8
    char off_event[100]; // 0x21c
    float intensity; // 0x280
    float randomness; // 0x284
    int burn_hero; // 0x288
    int burn_enemy; // 0x28c
    int unk4; // 0x290
    char unk5[16]; // 0x294
} CFlame;

