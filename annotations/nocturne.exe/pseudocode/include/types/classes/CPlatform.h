#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EGroundType.h"
#include "types/enums/EPlatformStateType.h"
#include "types/enums/EPlatformType.h"
#include "types/structs/SPlatformAttachment.h"

// Structure: CPlatform
// Ghidra size: 0x724 (1828 bytes)
#pragma pack(push, 1)
typedef struct CPlatform {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    EPlatformStateType state; // 0x2cc
    EGroundType ground_type; // 0x2d0
    float param; // 0x2d4
    float goal_param; // 0x2d8
    float current_movement_rate; // 0x2dc
    float travel_time_to_end; // 0x2e0
    float travel_time_to_start; // 0x2e4
    char course_filename[32]; // 0x2e8
    CCourse course; // 0x308
    CVector3f start_pos; // 0x314
    CVector3f end_pos; // 0x320
    CQuaternion4f orig_orient; // 0x32c
    CQuaternion4f end_orient; // 0x33c
    char to_start_event[100]; // 0x34c
    char to_end_event[100]; // 0x3b0
    char stop_event[100]; // 0x414
    char start_sound[20]; // 0x478
    char stop_sound[20]; // 0x48c
    char active_sound[20]; // 0x4a0
    uint sfx_handle; // 0x4b4
    int one_shot; // 0x4b8
    int block_virtual_director_flag; // 0x4bc
    int render_in_background_when_not_moving_flag; // 0x4c0
    char camera_while_moving[64]; // 0x4c4
    int plot_as_box_in_shadow; // 0x504
    int push_flag; // 0x508
    int recompute_fog; // 0x50c
    int plot_in_shadow_flag; // 0x510
    SPlatformAttachment attach_actors[10]; // 0x514
    EPlatformType platform_type; // 0x71c
    int rendered_in_background; // 0x720
} CPlatform;
#pragma pack(pop)

