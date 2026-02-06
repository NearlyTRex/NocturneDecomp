#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCarryHand.h"
#include "types/structs/SFire.h"
#include "types/structs/SLayerAction.h"

// Structure: CCharacter
// Ghidra size: 0xbe24 (48676 bytes)
typedef struct CCharacter {
    CDemonActor base; // 0x0
    CDeformableModelInstance model; // 0x158
    int field2_0x240c; // 0x240c
    int field3_0x2410; // 0x2410
    float closest_distance_threshold; // 0x2414
    float turn_angle_accumulator; // 0x2418
    CVector3f field6_0x241c; // 0x241c
    CVector3f field7_0x2428; // 0x2428
    float walk_step_speed; // 0x2434
    float turn_speed; // 0x2438
    float hit_points; // 0x243c
    float max_hit_points; // 0x2440
    int health_bar_mode; // 0x2444
    char descriptive_name[100]; // 0x2448
    SCarryHand carry_hands[2]; // 0x24ac
    char talk_to_me_event[100]; // 0x2534
    struct CDemonActor* grabbed_by; // 0x2598
    int grabbed_type; // 0x259c
    float field18_0x25a0; // 0x25a0
    float field19_0x25a4; // 0x25a4
    float field20_0x25a8; // 0x25a8
    float field21_0x25ac; // 0x25ac
    int field22_0x25b0; // 0x25b0
    int field23_0x25b4; // 0x25b4
    CVector3f field24_0x25b8; // 0x25b8
    int gesture_branch_root; // 0x25c4
    int gesture_motion_index; // 0x25c8
    float gesture_frame; // 0x25cc
    int field28_0x25d0; // 0x25d0
    int field29_0x25d4; // 0x25d4
    float look_at_yaw; // 0x25d8
    float look_at_pitch; // 0x25dc
    float look_at_weight; // 0x25e0
    int look_at_head_bone; // 0x25e4
    int field34_0x25e8; // 0x25e8
    int field35_0x25ec; // 0x25ec
    int field36_0x25f0; // 0x25f0
    int field37_0x25f4; // 0x25f4
    CBoundingBox3D cached_bounding_box; // 0x25f8
    int field39_0x2610; // 0x2610
    int is_ethereal; // 0x2614
    int field41_0x2618; // 0x2618
    float size_scale; // 0x261c
    int field43_0x2620; // 0x2620
    int field44_0x2624; // 0x2624
    int layer_action_count; // 0x2628
    SLayerAction layer_actions[20]; // 0x262c
    int field47_0x2a8c; // 0x2a8c
    int field48_0x2a90; // 0x2a90
    CClothList cloth_list; // 0x2a94
    CVector3f field50_0x2c50; // 0x2c50
    CVector3f field51_0x2c5c[15]; // 0x2c5c
    CVector3f field52_0x2d10[15]; // 0x2d10
    char field53_0x2dc4[24]; // 0x2dc4
    float field54_0x2ddc; // 0x2ddc
    float collision_cylinder_radius; // 0x2de0
    float field56_0x2de4; // 0x2de4
    float field57_0x2de8; // 0x2de8
    float collision_cylinder_bottom; // 0x2dec
    float collision_cylinder_top; // 0x2df0
    int field60_0x2df4; // 0x2df4
    char field61_0x2df8[280]; // 0x2df8
    int fire_count; // 0x2f10
    int field63_0x2f14; // 0x2f14
    float field64_0x2f18; // 0x2f18
    SFire field65_0x2f1c[50]; // 0x2f1c
    CFlame field66_0x33cc[50]; // 0x33cc
    uint sfx_handle; // 0xb7d4
    int is_fully_burned; // 0xb7d8
    float burn_alpha; // 0xb7dc
    float stagger_amount; // 0xb7e0
    float motion_transition_costs[20][20]; // 0xb7e4
} CCharacter;

