#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/structs/SBoneGuyBox.h"

// Structure: CBoneGuy
// Ghidra size: 0xc34c (49996 bytes)
#pragma pack(push, 1)
typedef struct CBoneGuy {
    CEnemy base; // 0x0
    int pickup_attempt_count; // 0xbd24
    float search_timer; // 0xbd28
    float pickup_cooldown; // 0xbd2c
    struct CDemonActor* pickup_target; // 0xbd30
    uint sfx_handle; // 0xbd34
    char death_event[100]; // 0xbd38
    float recombine_time; // 0xbd9c
    int box_count; // 0xbda0
    SBoneGuyBox boxes[20]; // 0xbda4
    int blown_up; // 0xc344
    float recombine_interpolation; // 0xc348
} CBoneGuy;
#pragma pack(pop)

