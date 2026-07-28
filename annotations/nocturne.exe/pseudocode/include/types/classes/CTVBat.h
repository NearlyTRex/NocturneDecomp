#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTVBat
// Ghidra size: 0xbf5c (48988 bytes)
#pragma pack(push, 1)
typedef struct CTVBat {
    CEnemy base; // 0x0
    float anim_frame; // 0xbd24
    CKeyFramedModelInstance model; // 0xbd28
    float speed; // 0xbea4
    float anim_rate; // 0xbea8
    CVector3f home_pos; // 0xbeac
    float max_distance; // 0xbeb8
    float max_height; // 0xbebc
    float rot_speed; // 0xbec0
    float move_speed; // 0xbec4
    float height_offset; // 0xbec8
    int follow_orders; // 0xbecc
    float attack_timer; // 0xbed0
    CVector3f velocity; // 0xbed4
    int state; // 0xbee0
    char periodic_sound[100]; // 0xbee4
    float periodic_sound_timer_min; // 0xbf48
    float periodic_sound_timer_max; // 0xbf4c
    uint periodic_sound_handle; // 0xbf50
    float periodic_sound_timer; // 0xbf54
    struct CDemonActor* boss_actor; // 0xbf58
} CTVBat;
#pragma pack(pop)

