#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CHero.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SArmAimData.h"

// Structure: CStranger
// Ghidra size: 0x1fe70 (130672 bytes)
typedef struct CStranger {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    float guns_drawn_blend; // 0x1fbd8
    float frame_cleared; // 0x1fbdc
    float unk1; // 0x1fbe0
    float aim_speed_factor; // 0x1fbe4
    SArmAimData right_arm_aim; // 0x1fbe8
    SArmAimData left_arm_aim; // 0x1fc08
    struct CDemonActor* ladder_to_descend; // 0x1fc28
    struct CDemonActor* weapon; // 0x1fc2c
    int dual_wield_side; // 0x1fc30
    int can_grab_weapon; // 0x1fc34
    int action_pending; // 0x1fc38
    int melee_attack_index; // 0x1fc3c
    float action_timer; // 0x1fc40
    float interact_blend; // 0x1fc44
    uint goggle_loop_sfx_handle; // 0x1fc48
    uint goggle_on_sfx_handle; // 0x1fc4c
    float turn_angle; // 0x1fc50
    float turn_blend_weight; // 0x1fc54
    float turn_blend_timer; // 0x1fc58
    float turn_elapsed; // 0x1fc5c
    char unk2[24]; // 0x1fc60
    CVector3f pending_velocity; // 0x1fc78
    int turn_motion_index; // 0x1fc84
    int unk3; // 0x1fc88
    float arm_recoil_blend; // 0x1fc8c
    float airborne_timer; // 0x1fc90
    float jump_speed; // 0x1fc94
    CVector3f carry_object_world_center; // 0x1fc98
    CBoundingBox3D carry_object_bbox; // 0x1fca4
    CVector3f ref_r_hand_bone_pos; // 0x1fcbc
    CVector3f ref_r_upperarm_bone_pos; // 0x1fcc8
    float grab_timer; // 0x1fcd4
    CKeyFramedModelInstance model; // 0x1fcd8
    CVector3f ladder_offset; // 0x1fe54
    float ladder_facing_angle; // 0x1fe60
    float ladder_blend_time; // 0x1fe64
    uint hurt_sfx_handle; // 0x1fe68
    float fall_velocity_snapshot; // 0x1fe6c
} CStranger;

