#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SPlayerControl.h"

// Structure: SNetPlayer
// Ghidra size: 0x78 (120 bytes)
typedef struct SNetPlayer {
    char name[40]; // 0x0
    float ping_quality; // 0x28
    uint last_ping_sent; // 0x2c
    uint last_ping_response; // 0x30
    int player_id; // 0x34
    uint last_update_time; // 0x38
    int local_sync_stage; // 0x3c
    uint state_change_time; // 0x40
    int ready_flag; // 0x44
    int sim_frame_index; // 0x48
    SPlayerControl controls; // 0x4c
} SNetPlayer;

