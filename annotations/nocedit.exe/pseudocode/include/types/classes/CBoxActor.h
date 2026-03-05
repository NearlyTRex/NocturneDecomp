#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"

// Structure: CBoxActor
// Ghidra size: 0x66c (1644 bytes)
typedef struct CBoxActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char loop_wav_name[20]; // 0x2d4
    char collision_wav_name[20]; // 0x2e8
    uint sfx_handle; // 0x2fc
    CVector3f rpm; // 0x300
    float fps; // 0x30c
    float anim_frame; // 0x310
    int pickup_type; // 0x314
    struct CDemonActor* carrier_actor; // 0x318
    int can_be_pushed; // 0x31c
    struct CDemonActor* pushed_by_actor; // 0x320
    struct CDemonActor* constrain_extents_actor; // 0x324
    uint push_sfx_handle; // 0x328
    char push_sound[100]; // 0x32c
    float weight_in_pounds; // 0x390
    CBox physics_box; // 0x394
    float ground_height; // 0x5ec
    EGroundType ground_type; // 0x5f0
    int plot_in_shadow_flag; // 0x5f4
    int collision_flag; // 0x5f8
    int dont_use_normals; // 0x5fc
    char use_event[100]; // 0x600
    int allowed_melee_attack_types; // 0x664
    int block_virtual_director_flag; // 0x668
} CBoxActor;

