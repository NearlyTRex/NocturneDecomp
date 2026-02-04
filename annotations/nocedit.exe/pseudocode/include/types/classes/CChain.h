#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/structs/SChainVertex.h"

// Structure: CChain
// Ghidra size: 0x578 (1400 bytes)
typedef struct CChain {
    CDemonActor base; // 0x0
    int vertex_count; // 0x158
    float chain_length; // 0x15c
    float unk1; // 0x160
    struct CDemonActor* target; // 0x164
    int target_bone; // 0x168
    int unk2; // 0x16c
    int unk3; // 0x170
    char texture_name[20]; // 0x174
    char unk4[44]; // 0x188
    char pull_wav_name[100]; // 0x1b4
    uint pull_wav_handle; // 0x218
    char move_wav_name[100]; // 0x21c
    uint move_wav_handle; // 0x280
    float unk5; // 0x284
    int ground_collide_flag; // 0x288
    SChainVertex unk6[20]; // 0x28c
    float weight; // 0x55c
    float friction; // 0x560
    float gravity; // 0x564
    float dampen; // 0x568
    char unk7[12]; // 0x56c
} CChain;

