#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CChain
// Ghidra size: 0x578 (1400 bytes)
typedef struct CChain {
    CDemonActor base_actor; // 0x0
    int vertex_count; // 0x158
    float chain_length; // 0x15c
    char field_352[8]; // 0x160
    int target_bone; // 0x168
    char field_364[284]; // 0x16c
    int ground_collide_flag; // 0x288
    char field_652[720]; // 0x28c
    float weight; // 0x55c
    float friction; // 0x560
    float gravity; // 0x564
    float dampen; // 0x568
    char field_1388[12]; // 0x56c
} CChain;

