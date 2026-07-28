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
// Ghidra size: 0xbc8c (48268 bytes)
#pragma pack(push, 1)
typedef struct CCharacter {
    CDemonActor base; // 0x0
    CDeformableModelInstance model; // 0x150
    int render_active; // 0x2404
    int is_on_ground; // 0x2408
    float closest_distance_threshold; // 0x240c
    float turn_angle_accumulator; // 0x2410
    CVector3f position_delta; // 0x2414
    CVector3f velocity; // 0x2420
    float walk_step_speed; // 0x242c
    float turn_speed; // 0x2430
    float hit_points; // 0x2434
    float max_hit_points; // 0x2438
    int health_bar_mode; // 0x243c
    char descriptive_name[100]; // 0x2440
    SCarryHand carry_hands[2]; // 0x24a4
    char talk_to_me_event[100]; // 0x252c
    struct CDemonActor* grabbed_by; // 0x2590
    int grabbed_type; // 0x2594
    struct CDemonActor* walk_to_target; // 0x2598
    float walk_min_distance; // 0x259c
    float walk_max_distance; // 0x25a0
    float walk_timeout; // 0x25a4
    int is_walking; // 0x25a8
    struct CDoor* door_target; // 0x25ac
    CVector3f look_offset; // 0x25b0
    int gesture_branch_root; // 0x25bc
    int gesture_motion_index; // 0x25c0
    float gesture_frame; // 0x25c4
    struct CCharacter* look_at_candidate; // 0x25c8
    struct CCharacter* look_at_target; // 0x25cc
    float look_at_yaw; // 0x25d0
    float look_at_pitch; // 0x25d4
    float look_at_weight; // 0x25d8
    int look_at_head_bone; // 0x25dc
    float look_at_search_timer; // 0x25e0
    struct CWayPoint* wander_target; // 0x25e4
    struct CWayPoint* wander_nearest_waypoint; // 0x25e8
    float wander_cooldown; // 0x25ec
    CBoundingBox3D cached_bounding_box; // 0x25f0
    int blood_type; // 0x2608
    int is_ethereal; // 0x260c
    float speech_timer; // 0x2610
    float size_scale; // 0x2614
    int was_rendered_opaque; // 0x2618
    int show_in_editor; // 0x261c
    int layer_action_count; // 0x2620
    SLayerAction layer_actions[20]; // 0x2624
    int layer_action_index; // 0x2a84
    float layer_action_t; // 0x2a88
    CClothList cloth_list; // 0x2a8c
    float smoke_emit_timer; // 0x2c48
    float smoke_check_timer; // 0x2c4c
    int smoke_occluded; // 0x2c50
    CVector3f collision_test_points[15]; // 0x2c54
    CVector3f collision_test_normals[15]; // 0x2d08
    float hero_proximity_timer; // 0x2dbc
    CVector3f move_away_target; // 0x2dc0
    float walk_stuck_timer; // 0x2dcc
    float sound_cooldown; // 0x2dd0
    float collision_cylinder_height; // 0x2dd4
    float collision_cylinder_radius; // 0x2dd8
    float ai_detection_range_min; // 0x2ddc
    float ai_detection_range_max; // 0x2de0
    float collision_cylinder_bottom; // 0x2de4
    float collision_cylinder_top; // 0x2de8
    int damage_decal_count; // 0x2dec
    SDamageDecal damage_decals[5]; // 0x2df0
    int fire_count; // 0x2f08
    int pending_flame_type; // 0x2f0c
    float flame_scale; // 0x2f10
    SFire fires[50]; // 0x2f14
    CFlame flames[50]; // 0x33c4
    uint sfx_handle; // 0xb63c
    int is_fully_burned; // 0xb640
    float burn_alpha; // 0xb644
    float stagger_amount; // 0xb648
    float motion_transition_costs[20][20]; // 0xb64c
} CCharacter;
#pragma pack(pop)

