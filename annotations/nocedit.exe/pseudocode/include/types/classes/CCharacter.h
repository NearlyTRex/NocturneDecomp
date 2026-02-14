#pragma once

// Forward declarations
struct CDoor;
struct CWayPoint;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CClothList.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFlame.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCarryHand.h"
#include "types/structs/SDamageDecal.h"
#include "types/structs/SFire.h"
#include "types/structs/SLayerAction.h"

// Structure: CCharacter
// Ghidra size: 0xbe24 (48676 bytes)
typedef struct CCharacter {
    CDemonActor base; // 0x0
    CDeformableModelInstance model; // 0x158
    int render_active; // 0x240c
    int is_on_ground; // 0x2410
    float closest_distance_threshold; // 0x2414
    float turn_angle_accumulator; // 0x2418
    CVector3f position_delta; // 0x241c
    CVector3f velocity; // 0x2428
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
    struct CDemonActor* walk_to_target; // 0x25a0
    float walk_min_distance; // 0x25a4
    float walk_max_distance; // 0x25a8
    float walk_timeout; // 0x25ac
    int is_walking; // 0x25b0
    struct CDoor* door_target; // 0x25b4
    CVector3f look_offset; // 0x25b8
    int gesture_branch_root; // 0x25c4
    int gesture_motion_index; // 0x25c8
    float gesture_frame; // 0x25cc
    struct CDemonActor* unk; // 0x25d0
    struct CDemonActor* look_at_target; // 0x25d4
    float look_at_yaw; // 0x25d8
    float look_at_pitch; // 0x25dc
    float look_at_weight; // 0x25e0
    int look_at_head_bone; // 0x25e4
    float look_at_search_timer; // 0x25e8
    struct CWayPoint* wander_target; // 0x25ec
    struct CWayPoint* wander_nearest_waypoint; // 0x25f0
    float wander_cooldown; // 0x25f4
    CBoundingBox3D cached_bounding_box; // 0x25f8
    int collision_layer; // 0x2610
    int is_ethereal; // 0x2614
    float speech_timer; // 0x2618
    float size_scale; // 0x261c
    int was_rendered_opaque; // 0x2620
    int show_in_editor; // 0x2624
    int layer_action_count; // 0x2628
    SLayerAction layer_actions[20]; // 0x262c
    int layer_action_index; // 0x2a8c
    float layer_action_t; // 0x2a90
    CClothList cloth_list; // 0x2a94
    float smoke_emit_timer; // 0x2c50
    float smoke_check_timer; // 0x2c54
    int smoke_occluded; // 0x2c58
    CVector3f collision_test_points[15]; // 0x2c5c
    CVector3f collision_test_normals[15]; // 0x2d10
    float hero_proximity_timer; // 0x2dc4
    CVector3f move_away_target; // 0x2dc8
    float walk_stuck_timer; // 0x2dd4
    float sound_cooldown; // 0x2dd8
    float collision_cylinder_height; // 0x2ddc
    float collision_cylinder_radius; // 0x2de0
    float ai_detection_range_min; // 0x2de4
    float ai_detection_range_max; // 0x2de8
    float collision_cylinder_bottom; // 0x2dec
    float collision_cylinder_top; // 0x2df0
    int damage_decal_count; // 0x2df4
    SDamageDecal damage_decals[5]; // 0x2df8
    int fire_count; // 0x2f10
    float fire_spread_rate; // 0x2f14
    int fire_allow_hero; // 0x2f18
    SFire fire_effects[50]; // 0x2f1c
    CFlame flames[50]; // 0x33cc
    uint sfx_handle; // 0xb7d4
    int is_fully_burned; // 0xb7d8
    float burn_alpha; // 0xb7dc
    float stagger_amount; // 0xb7e0
    float motion_transition_costs[20][20]; // 0xb7e4
} CCharacter;

