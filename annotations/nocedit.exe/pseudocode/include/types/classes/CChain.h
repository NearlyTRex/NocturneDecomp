#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/structs/SChainVertex.h"

// Structure: CChain
// Ghidra size: 0x578 (1400 bytes)
#pragma pack(push, 1)
typedef struct CChain {
    CDemonActor base; // 0x0
    int vertex_count; // 0x158
    float chain_length; // 0x15c
    float segment_length; // 0x160
    struct CDemonActor* target; // 0x164
    int target_bone; // 0x168
    int texture_size; // 0x16c
    int texture_handle; // 0x170
    char texture_name[64]; // 0x174
    char pull_wav_name[100]; // 0x1b4
    uint pull_wav_handle; // 0x218
    char move_wav_name[100]; // 0x21c
    uint move_wav_handle; // 0x280
    float sound_cooldown; // 0x284
    int ground_collide_flag; // 0x288
    SChainVertex vertices[20]; // 0x28c
    float weight; // 0x55c
    float friction; // 0x560
    float gravity; // 0x564
    float dampen; // 0x568
    float cached_distance; // 0x56c
    float inv_delta_time; // 0x570
    int is_visible; // 0x574
} CChain;
#pragma pack(pop)

