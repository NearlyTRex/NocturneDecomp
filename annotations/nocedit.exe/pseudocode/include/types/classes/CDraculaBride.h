#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CDraculaBride
// Ghidra size: 0xbfec (49132 bytes)
typedef struct CDraculaBride {
    CEnemy base; // 0x0
    int part_indices[9]; // 0xbebc
    char rise_event[100]; // 0xbee0
    int freaky_voice_number; // 0xbf44
    int mist_state; // 0xbf48
    float vanish_timer; // 0xbf4c
    float freaky_timer; // 0xbf50
    float action_delay; // 0xbf54
    CVector3f new_pos; // 0xbf58
    int attack_landed; // 0xbf64
    int part_count; // 0xbf68
    struct CDemonActor* part_list[30]; // 0xbf6c
    int exploded; // 0xbfe4
    float fade_timer; // 0xbfe8
} CDraculaBride;

