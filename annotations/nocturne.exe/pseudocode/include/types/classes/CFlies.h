#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SFly.h"

// Structure: CFlies
// Ghidra size: 0x2a18 (10776 bytes)
#pragma pack(push, 1)
typedef struct CFlies {
    CDemonActor base; // 0x0
    CVector3f box_size; // 0x150
    int fly_count; // 0x15c
    SFly flies[200]; // 0x160
    struct CDemonActor* follow_actor; // 0x2a00
    int gather_count; // 0x2a04
    float gather_timer; // 0x2a08
    float gather_time; // 0x2a0c
    int dead; // 0x2a10
    int is_visible; // 0x2a14
} CFlies;
#pragma pack(pop)

