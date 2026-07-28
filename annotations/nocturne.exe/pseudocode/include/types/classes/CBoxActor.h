#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"

// Structure: CBoxActor
// Ghidra size: 0x664 (1636 bytes)
#pragma pack(push, 1)
typedef struct CBoxActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    char loop_wav_name[20]; // 0x2cc
    char collision_wav_name[20]; // 0x2e0
    uint sfx_handle; // 0x2f4
    CVector3f rpm; // 0x2f8
    float fps; // 0x304
    float anim_frame; // 0x308
    int pickup_type; // 0x30c
    struct CDemonActor* carrier_actor; // 0x310
    int can_be_pushed; // 0x314
    struct CDemonActor* pushed_by_actor; // 0x318
    struct CDemonActor* constrain_extents_actor; // 0x31c
    uint push_sfx_handle; // 0x320
    char push_sound[100]; // 0x324
    float weight_in_pounds; // 0x388
    CBox physics_box; // 0x38c
    float ground_height; // 0x5e4
    EGroundType ground_type; // 0x5e8
    int plot_in_shadow_flag; // 0x5ec
    int collision_flag; // 0x5f0
    int dont_use_normals; // 0x5f4
    char use_event[100]; // 0x5f8
    int allowed_melee_attack_types; // 0x65c
    int block_virtual_director_flag; // 0x660
} CBoxActor;
#pragma pack(pop)

