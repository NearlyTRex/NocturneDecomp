#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: CWaterActor
// Ghidra size: 0x2b238 (176696 bytes)
typedef struct CWaterActor {
    CDemonActor base; // 0x0
    CVector3f size; // 0x158
    undefined4 opacity; // 0x164
    float height_delta; // 0x168
    float time_to_move; // 0x16c
    float time_to_move_down; // 0x170
    undefined4 move_sound; // 0x174
    char unk1[28]; // 0x178
    undefined4 move_down_sound; // 0x194
    char unk2[28]; // 0x198
    char* move_event; // 0x1b4
    char unk3[96]; // 0x1b8
    char* move_down_event; // 0x218
    char unk4[96]; // 0x21c
    float param; // 0x27c
    int state; // 0x280
    float patch_size; // 0x284
    int round_flag; // 0x288
    int col_r; // 0x28c
    int col_g; // 0x290
    int col_b; // 0x294
    char unk5[176032]; // 0x298
} CWaterActor;

