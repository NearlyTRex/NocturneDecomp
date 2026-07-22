#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SFly.h"

// Structure: CFlies
// Ghidra size: 0x2a20 (10784 bytes)
#pragma pack(push, 1)
typedef struct CFlies {
    CDemonActor base; // 0x0
    CVector3f box_size; // 0x158
    int fly_count; // 0x164
    SFly flies[200]; // 0x168
    struct CDemonActor* follow_actor; // 0x2a08
    int gather_count; // 0x2a0c
    float gather_timer; // 0x2a10
    float gather_time; // 0x2a14
    int dead; // 0x2a18
    int is_visible; // 0x2a1c
} CFlies;
#pragma pack(pop)

