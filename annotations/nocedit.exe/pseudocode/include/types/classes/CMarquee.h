#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CMarquee
// Ghidra size: 0x1bc (444 bytes)
typedef struct CMarquee {
    CDemonActor base_actor; // 0x0
    char* course_name; // 0x158
    char field_348[28]; // 0x15c
    float total_time; // 0x178
    float param; // 0x17c
    int phase; // 0x180
    char field_388[28]; // 0x184
    int type; // 0x1a0
    char field_420[24]; // 0x1a4
} CMarquee;

