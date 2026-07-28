#pragma once

// Forward declarations
struct CLadder;
struct CWeapon;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CHero.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SArmAimData.h"

// Structure: CStranger
// Ghidra size: 0x1fcd8 (130264 bytes)
#pragma pack(push, 1)
typedef struct CStranger {
    CHero base; // 0x0
    int guns_drawn; // 0x1fa3c
    float guns_drawn_blend; // 0x1fa40
    float frame_cleared; // 0x1fa44
    float aim_pitch; // 0x1fa48
    float aim_speed_factor; // 0x1fa4c
    SArmAimData right_arm_aim; // 0x1fa50
    SArmAimData left_arm_aim; // 0x1fa70
    struct CLadder* ladder_to_descend; // 0x1fa90
    struct CWeapon* weapon; // 0x1fa94
    int dual_wield_side; // 0x1fa98
    int can_grab_weapon; // 0x1fa9c
    int action_pending; // 0x1faa0
    int melee_attack_index; // 0x1faa4
    float action_timer; // 0x1faa8
    float interact_blend; // 0x1faac
    uint goggle_sfx_handles[2]; // 0x1fab0
    float turn_angle; // 0x1fab8
    float turn_blend_weight; // 0x1fabc
    float turn_blend_timer; // 0x1fac0
    float turn_elapsed; // 0x1fac4
    char dead[24]; // 0x1fac8
    CVector3f pending_velocity; // 0x1fae0
    int turn_motion_index; // 0x1faec
    int pickup_facing_reversed; // 0x1faf0
    float arm_recoil_blend; // 0x1faf4
    float airborne_timer; // 0x1faf8
    float jump_speed; // 0x1fafc
    CVector3f carry_object_world_center; // 0x1fb00
    CBoundingBox3D carry_object_bbox; // 0x1fb0c
    CVector3f ref_r_hand_bone_pos; // 0x1fb24
    CVector3f ref_r_upperarm_bone_pos; // 0x1fb30
    float grab_timer; // 0x1fb3c
    CKeyFramedModelInstance model; // 0x1fb40
    CVector3f ladder_offset; // 0x1fcbc
    float ladder_facing_angle; // 0x1fcc8
    float ladder_blend_time; // 0x1fccc
    uint sfx_handle; // 0x1fcd0
    float fall_velocity_snapshot; // 0x1fcd4
} CStranger;
#pragma pack(pop)

