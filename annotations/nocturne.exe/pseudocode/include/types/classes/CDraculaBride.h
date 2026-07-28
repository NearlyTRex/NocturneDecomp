#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CDraculaBride
// Ghidra size: 0xbe54 (48724 bytes)
#pragma pack(push, 1)
typedef struct CDraculaBride {
    CEnemy base; // 0x0
    int part_indices[9]; // 0xbd24
    char rise_event[100]; // 0xbd48
    int freaky_voice_number; // 0xbdac
    int mist_state; // 0xbdb0
    float vanish_timer; // 0xbdb4
    float freaky_timer; // 0xbdb8
    float action_delay; // 0xbdbc
    CVector3f new_pos; // 0xbdc0
    int attack_landed; // 0xbdcc
    int part_count; // 0xbdd0
    struct CBodyPart* part_list[30]; // 0xbdd4
    int exploded; // 0xbe4c
    float fade_timer; // 0xbe50
} CDraculaBride;
#pragma pack(pop)

