#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"

// Structure: CEnemy
// Ghidra size: 0xbd24 (48420 bytes)
#pragma pack(push, 1)
typedef struct CEnemy {
    CCharacter base; // 0x0
    float speed; // 0xbc8c
    int pool_me; // 0xbc90
    int randomize_me; // 0xbc94
    int is_in_combat; // 0xbc98
    float guard_distance; // 0xbc9c
    float attack_cooldown; // 0xbca0
    struct CCharacter* victim; // 0xbca4
    float victim_search_timer; // 0xbca8
    float victim_search_radius; // 0xbcac
    char patrol_name_pattern[100]; // 0xbcb0
    int special_form_flag; // 0xbd14
    float victim_height; // 0xbd18
    struct CCharacter* script_victim; // 0xbd1c
    int allow_pathfind_to_new_targets; // 0xbd20
} CEnemy;
#pragma pack(pop)

