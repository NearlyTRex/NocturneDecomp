#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
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
    int laser_r; // 0x23c
    int laser_g; // 0x240
    int laser_b; // 0x244
    CKeyFramedModelInstance model; // 0x248
    float rock_speed; // 0x3c4
    int periodic_flag; // 0x3c8
    float max_wait_time; // 0x3cc
    int dest_actor; // 0x3d0
    char* wav_name; // 0x3d4
    char unk4[100]; // 0x3d8
    int sfx_type; // 0x43c
    char unk5[4]; // 0x440
    float emit_period; // 0x444
    char unk6[76]; // 0x448
} CEmitter;

