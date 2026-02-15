#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CEmitter
// Ghidra size: 0x494 (1172 bytes)
typedef struct CEmitter {
    CDemonActor base; // 0x0
    int emitter_type; // 0x158
    CVector3f emitter_size; // 0x15c
    int emitter_state; // 0x168
    char event_on[100]; // 0x16c
    char event_off[100]; // 0x1d0
    float max_emit_time; // 0x234
    int laser_type; // 0x238
    CColor3i laser_color; // 0x23c
    CKeyFramedModelInstance model; // 0x248
    float rock_speed; // 0x3c4
    int periodic_flag; // 0x3c8
    float max_wait_time; // 0x3cc
    struct CDemonActor* dest_actor; // 0x3d0
    char wav_name[100]; // 0x3d4
    uint sfx_handle; // 0x438
    int sfx_type; // 0x43c
    float emit_timer; // 0x440
    float emit_period; // 0x444
    float state_timer; // 0x448
    CDemonGlobe globe; // 0x44c
    int was_active; // 0x48c
    int prev_emitter_state; // 0x490
} CEmitter;

