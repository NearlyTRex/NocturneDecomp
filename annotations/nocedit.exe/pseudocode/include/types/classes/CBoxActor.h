#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CBoxActor
// Ghidra size: 0x66c (1644 bytes)
typedef struct CBoxActor {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char loop_wav_name[20]; // 0x2d4
    char collision_wav_name[20]; // 0x2e8
    int unk1; // 0x2fc
    CVector3f rpm; // 0x300
    float fps; // 0x30c
    int unk2; // 0x310
    int pickup_type; // 0x314
    struct CDemonActor* carrier_actor; // 0x318
    int can_be_pushed; // 0x31c
    int pushed_by_actor; // 0x320
    int constrain_extents_actor; // 0x324
    int unk3; // 0x328
    char push_sound[100]; // 0x32c
    float weight_in_pounds; // 0x390
    int sim_box; // 0x394
    char unk4[600]; // 0x398
    int ground_type; // 0x5f0
    int plot_in_shadow_flag; // 0x5f4
    int collision_flag; // 0x5f8
    int dont_use_normals; // 0x5fc
    char use_event[100]; // 0x600
    int allowed_melee_attack_types; // 0x664
    int block_virtual_director_flag; // 0x668
} CBoxActor;

