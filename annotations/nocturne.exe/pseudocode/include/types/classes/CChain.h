#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/structs/SChainVertex.h"

// Structure: CChain
// Ghidra size: 0x570 (1392 bytes)
#pragma pack(push, 1)
typedef struct CChain {
    CDemonActor base; // 0x0
    int vertex_count; // 0x150
    float chain_length; // 0x154
    float segment_length; // 0x158
    struct CDemonActor* target; // 0x15c
    int target_bone; // 0x160
    int texture_size; // 0x164
    int texture_handle; // 0x168
    char texture_name[64]; // 0x16c
    char pull_wav_name[100]; // 0x1ac
    uint pull_wav_handle; // 0x210
    char move_wav_name[100]; // 0x214
    uint move_wav_handle; // 0x278
    float sound_cooldown; // 0x27c
    int ground_collide_flag; // 0x280
    SChainVertex vertices[20]; // 0x284
    float weight; // 0x554
    float friction; // 0x558
    float gravity; // 0x55c
    float dampen; // 0x560
    float cached_distance; // 0x564
    float inv_delta_time; // 0x568
    int is_visible; // 0x56c
} CChain;
#pragma pack(pop)

