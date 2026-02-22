#pragma once

// Forward declarations
struct CMirror;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CGlass.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWayPoint.h"
#include "types/structs/SFog.h"
#include "types/structs/SRoom.h"
#include "types/structs/SVDBox.h"

// Structure: CDemonSet
// Ghidra size: 0x16166c (1447532 bytes)
typedef struct CDemonSet {
    int camera_count; // 0x0
    C3DSCamera cameras[250]; // 0x4
    int light_count; // 0x19a2c
    C3DSLight lights[200]; // 0x19a30
    char geometry_filename[32]; // 0x14d0f0
    CVector3f ray_origin; // 0x14d110
    CVector3f ray_target; // 0x14d11c
    CVector3f collision_normal; // 0x14d128
    int ground_type; // 0x14d134
    CVector3f collision_impact_position; // 0x14d138
    struct CDemonActor* collision_actor; // 0x14d144
    int collision_part_index; // 0x14d148
    int collision_triangle_index; // 0x14d14c
    float min_ambient_value; // 0x14d150
    int actor_count; // 0x14d154
    struct CDemonActor* actors[2000]; // 0x14d158
    int character_count; // 0x14f098
    struct CCharacter* characters[2000]; // 0x14f09c
    int enemy_count; // 0x150fdc
    struct CEnemy* enemies[2000]; // 0x150fe0
    int threat_count; // 0x152f20
    struct CDemonActor* threats[2000]; // 0x152f24
    int waypoint_count; // 0x154e64
    struct CWayPoint* waypoints[2000]; // 0x154e68
    int collidable_actor_count; // 0x156da8
    struct CDemonActor* collidable_actors[2000]; // 0x156dac
    int renderable_actor_count; // 0x158cec
    struct CDemonActor* renderable_actors[2000]; // 0x158cf0
    SFog scene_fog; // 0x15ac30
    SFog active_fog; // 0x15ac54
    int per_pixel_lighting_enabled; // 0x15ac78
    int default_master_reverb; // 0x15ac7c
    int lighting_quality_mode; // 0x15ac80
    int disable_spotlight_shadows; // 0x15ac84
    int disable_directional_lighting; // 0x15ac88
    int disable_water_rendering; // 0x15ac8c
    int disable_sky_rendering; // 0x15ac90
    int use_enviro_model; // 0x15ac94
    char enviro_model_name[16]; // 0x15ac98
    int player_on_train; // 0x15aca8
    int set_file_version; // 0x15acac
    int actor_list_capacity; // 0x15acb0
    int mirror_glass_actor_count; // 0x15acb4
    struct CGlass* mirror_glass_actors[100]; // 0x15acb8
    int last_switch_area_invalid; // 0x15ae48
    int use_world_geometry_flag; // 0x15ae4c
    char world_geometry_name[32]; // 0x15ae50
    int rendering_mode; // 0x15ae70
    CVector3i light_direction; // 0x15ae74
    int ambient_base_quick; // 0x15ae80
    int skip_normal_normalization; // 0x15ae84
    int light_scale_factor; // 0x15ae88
    int color_scale_factor; // 0x15ae8c
    int fog_scale_factor; // 0x15ae90
    float set_scale_factor; // 0x15ae94
    int unk1; // 0x15ae98
    int unk2; // 0x15ae9c
    int camera_enabled_flag; // 0x15aea0
    int selected_camera_index; // 0x15aea4
    int previous_best_camera_index; // 0x15aea8
    float previous_best_camera_timer; // 0x15aeac
    int pending_camera_index; // 0x15aeb0
    float camera_switch_cooldown; // 0x15aeb4
    int room_reverb_type; // 0x15aeb8
    int room_count; // 0x15aebc
    SRoom rooms[20]; // 0x15aec0
    int vdir_box_count; // 0x15b410
    SVDBox vdir_boxes[250]; // 0x15b414
    int default_ground_type; // 0x15f67c
    int ray_type; // 0x15f680
    int laser_type; // 0x15f684
    CColor3f laser_color; // 0x15f688
    int ignore_list_count; // 0x15f694
    int collision_flag; // 0x15f698
    struct CDemonActor* ignore_list[10]; // 0x15f69c
    float raycast_distance; // 0x15f6c4
    int voxel_distance; // 0x15f6c8
    CVector3f voxel_hit_point; // 0x15f6cc
    int voxel_surface_type; // 0x15f6d8
    int skip_exact_collisions; // 0x15f6dc
    int directional_light_ratio_enabled; // 0x15f6e0
    int sorted_render_actor_count; // 0x15f6e4
    struct CDemonActor* sorted_render_actors[2000]; // 0x15f6e8
    int has_sky; // 0x161628
    char sky_texture_name[32]; // 0x16162c
    int sky_brightness; // 0x16164c
    struct CMirror* active_mirror; // 0x161650
    int mirror_camera_dirty; // 0x161654
    int mirror_lighting_cached; // 0x161658
    int mirror_cached_light; // 0x16165c
    int mirror_cached_color; // 0x161660
    int mirror_cached_fog; // 0x161664
    int weather_type; // 0x161668
} CDemonSet;

