#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SNetPlayer
// Ghidra size: 0x78 (120 bytes)
typedef struct SNetPlayer {
    char name[40]; // 0x0
    float ping_quality; // 0x28
    uint last_ping_sent; // 0x2c
    uint last_ping_response; // 0x30
    int player_id; // 0x34
    char field_56[36]; // 0x38
    int sync_stage; // 0x5c
    char field_96[24]; // 0x60
} SNetPlayer;

