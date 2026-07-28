#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDemonActor.h"

// Structure: CMarquee
// Ghidra size: 0x1b4 (436 bytes)
#pragma pack(push, 1)
typedef struct CMarquee {
    CDemonActor base; // 0x0
    char course_name[32]; // 0x150
    float total_time; // 0x170
    float param; // 0x174
    int phase; // 0x178
    CBoundingBox3D bounding_box; // 0x17c
    int is_visible; // 0x194
    int type; // 0x198
    CCourse course; // 0x19c
    char dead[12]; // 0x1a8
} CMarquee;
#pragma pack(pop)

