#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CMarquee
// Ghidra size: 0x1bc (444 bytes)
typedef struct CMarquee {
    CDemonActor base; // 0x0
    char course_name[32]; // 0x158
    float total_time; // 0x178
    float param; // 0x17c
    int phase; // 0x180
    char unk2[28]; // 0x184
    int type; // 0x1a0
    char unk3[24]; // 0x1a4
} CMarquee;

