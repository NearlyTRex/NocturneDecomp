#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CFrankenstienMachine
// Ghidra size: 0x49c (1180 bytes)
typedef struct CFrankenstienMachine {
    CDemonActor base; // 0x0
    int which_part; // 0x158
    float master_frame; // 0x15c
    char course_filename[32]; // 0x160
    float unk1; // 0x180
    CKeyFramedModelInstance bed_model; // 0x184
    CCourse course; // 0x300
    CKeyFramedModelInstance body_model; // 0x30c
    int unk2; // 0x488
    int unk3; // 0x48c
    CVector3f unk4; // 0x490
} CFrankenstienMachine;

