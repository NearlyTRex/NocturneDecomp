#pragma once

// Forward declarations
struct CMirror;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CGlass.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWayPoint.h"
#include "types/enums/EWeatherType.h"
#include "types/structs/SFog.h"
#include "types/structs/SRayQueryState.h"
#include "types/structs/SRoom.h"
#include "types/structs/SVDBox.h"

// Structure: CDemonSet
// Ghidra size: 0x161284 (1446532 bytes)
#pragma pack(push, 1)
typedef struct CDemonSet {
    int camera_count; // 0x0
    C3DSCamera cameras[250]; // 0x4
    int light_count; // 0x19644
    C3DSLight lights[200]; // 0x19648
    char geometry_filename[32]; // 0x14cd08
    CVector3f ray_origin; // 0x14cd28
    CVector3f ray_target; // 0x14cd34
    CVector3f collision_normal; // 0x14cd40
    int ground_type; // 0x14cd4c
    CVector3f collision_impact_position; // 0x14cd50
    struct CDemonActor* collision_actor; // 0x14cd5c
    int collision_part_index; // 0x14cd60
    int collision_bone_index; // 0x14cd64
    float min_ambient_value; // 0x14cd68
    int actor_count; // 0x14cd6c
    struct CDemonActor* actors[2000]; // 0x14cd70
    int character_count; // 0x14ecb0
    struct CCharacter* characters[2000]; // 0x14ecb4
    int enemy_count; // 0x150bf4
    struct CEnemy* enemies[2000]; // 0x150bf8
    int threat_count; // 0x152b38
    struct CDemonActor* threats[2000]; // 0x152b3c
    int waypoint_count; // 0x154a7c
    struct CWayPoint* waypoints[2000]; // 0x154a80
    int collidable_actor_count; // 0x1569c0
    struct CDemonActor* collidable_actors[2000]; // 0x1569c4
    int renderable_actor_count; // 0x158904
    struct CDemonActor* renderable_actors[2000]; // 0x158908
    SFog scene_fog; // 0x15a848
    SFog active_fog; // 0x15a86c
    int per_pixel_lighting_enabled; // 0x15a890
    int default_master_reverb; // 0x15a894
    int lighting_quality_mode; // 0x15a898
    int disable_spotlight_shadows; // 0x15a89c
    int disable_directional_lighting; // 0x15a8a0
    int disable_water_rendering; // 0x15a8a4
    int disable_sky_rendering; // 0x15a8a8
    int use_enviro_model; // 0x15a8ac
    char enviro_model_name[16]; // 0x15a8b0
    int player_on_train; // 0x15a8c0
    int set_file_version; // 0x15a8c4
    int actor_list_capacity; // 0x15a8c8
    int mirror_glass_actor_count; // 0x15a8cc
    struct CGlass* mirror_glass_actors[100]; // 0x15a8d0
    int last_switch_area_invalid; // 0x15aa60
    int use_world_geometry_flag; // 0x15aa64
    char world_geometry_name[32]; // 0x15aa68
    int rendering_mode; // 0x15aa88
    CVector3i light_direction; // 0x15aa8c
    int ambient_base_quick; // 0x15aa98
    int skip_normal_normalization; // 0x15aa9c
    CColor3i flat_color; // 0x15aaa0
    float set_scale_factor; // 0x15aaac
    int dead1; // 0x15aab0
    int dead2; // 0x15aab4
    int camera_enabled_flag; // 0x15aab8
    int selected_camera_index; // 0x15aabc
    int previous_best_camera_index; // 0x15aac0
    float previous_best_camera_timer; // 0x15aac4
    int pending_camera_index; // 0x15aac8
    float camera_switch_cooldown; // 0x15aacc
    int default_room_size; // 0x15aad0
    int room_count; // 0x15aad4
    SRoom rooms[20]; // 0x15aad8
    int vdir_box_count; // 0x15b028
    SVDBox vdir_boxes[250]; // 0x15b02c
    int default_ground_type; // 0x15f294
    SRayQueryState ray_query; // 0x15f298
    int ignore_list_count; // 0x15f2ac
    int collision_flag; // 0x15f2b0
    struct CDemonActor* ignore_list[10]; // 0x15f2b4
    float raycast_distance; // 0x15f2dc
    float voxel_distance; // 0x15f2e0
    CVector3f voxel_hit_point; // 0x15f2e4
    int voxel_surface_type; // 0x15f2f0
    int skip_exact_collisions; // 0x15f2f4
    int directional_light_ratio_enabled; // 0x15f2f8
    int sorted_render_actor_count; // 0x15f2fc
    struct CDemonActor* sorted_render_actors[2000]; // 0x15f300
    int has_sky; // 0x161240
    char sky_texture_name[32]; // 0x161244
    int sky_brightness; // 0x161264
    struct CMirror* active_mirror; // 0x161268
    int mirror_camera_dirty; // 0x16126c
    int mirror_lighting_cached; // 0x161270
    CColor3i mirror_cached_color; // 0x161274
    EWeatherType weather_type; // 0x161280
} CDemonSet;
#pragma pack(pop)

