#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CTire.h"
#include "types/classes/CVector3f.h"

// Structure: CVehicle
// Ghidra size: 0x1070 (4208 bytes)
#pragma pack(push, 1)
typedef struct CVehicle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    CKeyFramedModelInstance extra_models[4]; // 0x2cc
    CVector3f world_velocity; // 0x8bc
    CVector3f local_velocity; // 0x8c8
    CVector3f unused_physics_vectors[5]; // 0x8d4
    float mass; // 0x910
    float scaled_mass; // 0x914
    float inertia_yz; // 0x918
    float inertia_xz; // 0x91c
    float inertia_xy; // 0x920
    CVector3f bound_size; // 0x924
    int tire_count; // 0x930
    CTire tires[4]; // 0x934
    CVector3f ground_normal; // 0x1004
    float ground_offset; // 0x1010
    int dead; // 0x1014
    CCourse course; // 0x1018
    float cur_time; // 0x1024
    float total_time; // 0x1028
    char course_name[32]; // 0x102c
    uint sfx_handles[3]; // 0x104c
    CVector3f sound_velocity; // 0x1058
    int is_visible; // 0x1064
    struct CDemonActor* last_mobster_left; // 0x1068
    struct CDemonActor* last_mobster_right; // 0x106c
} CVehicle;
#pragma pack(pop)

