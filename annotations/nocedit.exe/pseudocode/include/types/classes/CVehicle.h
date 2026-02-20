#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CTire.h"
#include "types/classes/CVector3f.h"

// Structure: CVehicle
// Ghidra size: 0x1078 (4216 bytes)
typedef struct CVehicle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    CKeyFramedModelInstance extra_models[4]; // 0x2d4
    CVector3f world_velocity; // 0x8c4
    CVector3f local_velocity; // 0x8d0
    CVector3f unk1[5]; // 0x8dc
    float mass; // 0x918
    float scaled_mass; // 0x91c
    float inertia_yz; // 0x920
    float inertia_xz; // 0x924
    float inertia_xy; // 0x928
    CVector3f bound_size; // 0x92c
    int tire_count; // 0x938
    CTire tires[4]; // 0x93c
    float unk2[5]; // 0x100c
    CCourse course; // 0x1020
    float cur_time; // 0x102c
    float total_time; // 0x1030
    char course_name[32]; // 0x1034
    uint sfx_horn_handle; // 0x1054
    uint sfx_engine_handle; // 0x1058
    uint sfx_screech_handle; // 0x105c
    CVector3f sound_velocity; // 0x1060
    int is_visible; // 0x106c
    struct CDemonActor* last_mobster_left; // 0x1070
    struct CDemonActor* last_mobster_right; // 0x1074
} CVehicle;

