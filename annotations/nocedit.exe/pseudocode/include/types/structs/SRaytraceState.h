#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"

// Structure: SRaytraceState
// Ghidra size: 0xa0 (160 bytes)
typedef struct SRaytraceState {
    int ray_type; // 0x0
    int laser_type; // 0x4
    CColor3f laser_color; // 0x8
    int ignore_list_count; // 0x14
    int collision_flag; // 0x18
    struct CDemonActor* ignore_list[10]; // 0x1c
    CVector3f saved_ray_origin; // 0x44
    CVector3f saved_ray_target; // 0x50
    float raycast_distance; // 0x5c
    int voxel_distance; // 0x60
    CVector3f voxel_hit_point; // 0x64
    int voxel_surface_type; // 0x70
    int saved_skip_exact_collision; // 0x74
    CVector3f saved_collision_normal; // 0x78
    int saved_ground_type; // 0x84
    CVector3f saved_collision_point; // 0x88
    struct CDemonActor* saved_collision_actor; // 0x94
    int saved_collision_part_index; // 0x98
    int saved_collision_triangle_index; // 0x9c
} SRaytraceState;

