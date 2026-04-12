#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CFrankenstienMachine
// Ghidra size: 0x49c (1180 bytes)
#pragma pack(push, 1)
typedef struct CFrankenstienMachine {
    CDemonActor base; // 0x0
    int which_part; // 0x158
    float master_frame; // 0x15c
    char course_filename[32]; // 0x160
    float part_frame; // 0x180
    CKeyFramedModelInstance bed_model; // 0x184
    CCourse course; // 0x300
    CKeyFramedModelInstance body_model; // 0x30c
    int anchor_vertex_index; // 0x488
    float particle_accumulator; // 0x48c
    CVector3f anchor_world_position; // 0x490
} CFrankenstienMachine;
#pragma pack(pop)

