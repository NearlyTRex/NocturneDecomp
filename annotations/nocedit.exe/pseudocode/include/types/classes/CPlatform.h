#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EPlatformStateType.h"
#include "types/enums/EPlatformType.h"
#include "types/structs/SPlatformAttachment.h"

// Structure: CPlatform
// Ghidra size: 0x72c (1836 bytes)
typedef struct CPlatform {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    EPlatformStateType state; // 0x2d4
    int ground_type; // 0x2d8
    float param; // 0x2dc
    float goal_param; // 0x2e0
    float current_movement_rate; // 0x2e4
    float travel_time_to_end; // 0x2e8
    float travel_time_to_start; // 0x2ec
    char course_filename[32]; // 0x2f0
    CCourse course; // 0x310
    CVector3f start_pos; // 0x31c
    CVector3f end_pos; // 0x328
    CQuaternion4f orig_orient; // 0x334
    CQuaternion4f end_orient; // 0x344
    char to_start_event[100]; // 0x354
    char to_end_event[100]; // 0x3b8
    char stop_event[100]; // 0x41c
    char start_sound[20]; // 0x480
    char stop_sound[20]; // 0x494
    char active_sound[20]; // 0x4a8
    uint sfx_handle; // 0x4bc
    int one_shot; // 0x4c0
    int block_virtual_director_flag; // 0x4c4
    int render_in_background_when_not_moving_flag; // 0x4c8
    char camera_while_moving[64]; // 0x4cc
    int plot_as_box_in_shadow; // 0x50c
    int push_flag; // 0x510
    int recompute_fog; // 0x514
    int plot_in_shadow_flag; // 0x518
    SPlatformAttachment attach_actors[10]; // 0x51c
    EPlatformType platform_type; // 0x724
    int unk3; // 0x728
} CPlatform;

