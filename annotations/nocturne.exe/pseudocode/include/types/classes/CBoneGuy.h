#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/structs/SBoneGuyBox.h"

// Structure: CBoneGuy
// Ghidra size: 0xc4e4 (50404 bytes)
#pragma pack(push, 1)
typedef struct CBoneGuy {
    CEnemy base; // 0x0
    int pickup_attempt_count; // 0xbebc
    float search_timer; // 0xbec0
    float pickup_cooldown; // 0xbec4
    struct CDemonActor* pickup_target; // 0xbec8
    uint sfx_handle; // 0xbecc
    char death_event[100]; // 0xbed0
    float recombine_time; // 0xbf34
    int box_count; // 0xbf38
    SBoneGuyBox boxes[20]; // 0xbf3c
    int blown_up; // 0xc4dc
    float recombine_interpolation; // 0xc4e0
} CBoneGuy;
#pragma pack(pop)

