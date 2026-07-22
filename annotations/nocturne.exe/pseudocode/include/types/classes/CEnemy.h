#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"

// Structure: CEnemy
// Ghidra size: 0xbebc (48828 bytes)
#pragma pack(push, 1)
typedef struct CEnemy {
    CCharacter base; // 0x0
    float speed; // 0xbe24
    int pool_me; // 0xbe28
    int randomize_me; // 0xbe2c
    int is_in_combat; // 0xbe30
    float guard_distance; // 0xbe34
    float attack_cooldown; // 0xbe38
    struct CCharacter* victim; // 0xbe3c
    float victim_search_timer; // 0xbe40
    float victim_search_radius; // 0xbe44
    char patrol_name_pattern[100]; // 0xbe48
    int special_form_flag; // 0xbeac
    float victim_height; // 0xbeb0
    struct CCharacter* script_victim; // 0xbeb4
    int allow_pathfind_to_new_targets; // 0xbeb8
} CEnemy;
#pragma pack(pop)

