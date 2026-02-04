#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTVBat
// Ghidra size: 0xc0f4 (49396 bytes)
typedef struct CTVBat {
    CEnemy base; // 0x0
    char unk1[12]; // 0xbeb4
    CKeyFramedModelInstance model; // 0xbec0
    float speed; // 0xc03c
    int unk2; // 0xc040
    CVector3f home_pos; // 0xc044
    float max_distance; // 0xc050
    float max_height; // 0xc054
    float rot_speed; // 0xc058
    float move_speed; // 0xc05c
    int unk3; // 0xc060
    int follow_orders; // 0xc064
    float unk4; // 0xc068
    int unk5; // 0xc06c
    int unk6; // 0xc070
    int unk7; // 0xc074
    int state; // 0xc078
    char periodic_sound[100]; // 0xc07c
    float periodic_sound_timer_min; // 0xc0e0
    float periodic_sound_timer_max; // 0xc0e4
    int unk9; // 0xc0e8
    float unk10; // 0xc0ec
    int unk11; // 0xc0f0
} CTVBat;

