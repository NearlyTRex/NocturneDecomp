#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CEmitter
// Ghidra size: 0x48c (1164 bytes)
#pragma pack(push, 1)
typedef struct CEmitter {
    CDemonActor base; // 0x0
    int emitter_type; // 0x150
    CVector3f emitter_size; // 0x154
    int emitter_state; // 0x160
    char event_on[100]; // 0x164
    char event_off[100]; // 0x1c8
    float max_emit_time; // 0x22c
    int laser_type; // 0x230
    CColor3i laser_color; // 0x234
    CKeyFramedModelInstance model; // 0x240
    float rock_speed; // 0x3bc
    int periodic_flag; // 0x3c0
    float max_wait_time; // 0x3c4
    struct CDemonActor* dest_actor; // 0x3c8
    char wav_name[100]; // 0x3cc
    uint sfx_handle; // 0x430
    int sfx_type; // 0x434
    float emit_timer; // 0x438
    float emit_period; // 0x43c
    float state_timer; // 0x440
    CDemonGlobe globe; // 0x444
    int was_active; // 0x484
    int prev_emitter_state; // 0x488
} CEmitter;
#pragma pack(pop)

