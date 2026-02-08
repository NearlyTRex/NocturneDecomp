#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CVehicle
// Ghidra size: 0x1078 (4216 bytes)
typedef struct CVehicle {
    CDemonActor base; // 0x0
    char unk1[2016]; // 0x158
    int tire_count; // 0x938
    char unk2[1776]; // 0x93c
    float cur_time; // 0x102c
    float total_time; // 0x1030
    char course_name[32]; // 0x1034
    char unk3[36]; // 0x1054
} CVehicle;

