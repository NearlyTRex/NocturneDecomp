#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CVehicle
// Ghidra size: 0x1078 (4216 bytes)
typedef struct CVehicle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    char unk1[1636]; // 0x2d4
    int tire_count; // 0x938
    char unk2[1776]; // 0x93c
    float cur_time; // 0x102c
    float total_time; // 0x1030
    char course_name[32]; // 0x1034
    char unk3[28]; // 0x1054
    struct CDemonActor* last_mobster_left; // 0x1070
    int unk4; // 0x1074
} CVehicle;

