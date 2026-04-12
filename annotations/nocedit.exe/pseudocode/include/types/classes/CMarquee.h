#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"

// Structure: CMarquee
// Ghidra size: 0x1bc (444 bytes)
#pragma pack(push, 1)
typedef struct CMarquee {
    CDemonActor base; // 0x0
    char course_name[32]; // 0x158
    float total_time; // 0x178
    float param; // 0x17c
    int phase; // 0x180
    CBoundingBox3D bounding_box; // 0x184
    int is_visible; // 0x19c
    int type; // 0x1a0
    CCourse course; // 0x1a4
    char dead[12]; // 0x1b0
} CMarquee;
#pragma pack(pop)

