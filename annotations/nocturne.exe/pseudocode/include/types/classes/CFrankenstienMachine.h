#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CFrankenstienMachine
// Ghidra size: 0x494 (1172 bytes)
#pragma pack(push, 1)
typedef struct CFrankenstienMachine {
    CDemonActor base; // 0x0
    int which_part; // 0x150
    float master_frame; // 0x154
    char course_filename[32]; // 0x158
    float part_frame; // 0x178
    CKeyFramedModelInstance bed_model; // 0x17c
    CCourse course; // 0x2f8
    CKeyFramedModelInstance body_model; // 0x304
    int anchor_vertex_index; // 0x480
    float particle_accumulator; // 0x484
    CVector3f anchor_world_position; // 0x488
} CFrankenstienMachine;
#pragma pack(pop)

