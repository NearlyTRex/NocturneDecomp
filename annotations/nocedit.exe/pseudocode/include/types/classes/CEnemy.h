#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"

// Structure: CEnemy
// Ghidra size: 0xbeb4 (48820 bytes)
typedef struct CEnemy {
    CCharacter base; // 0x0
    float speed; // 0xbe24
    int pool_me; // 0xbe28
    int randomize_me; // 0xbe2c
    int unk1; // 0xbe30
    float guard_distance; // 0xbe34
    char unk2[16]; // 0xbe38
    char patrol_name_pattern[100]; // 0xbe48
    int unk3; // 0xbeac
    float victim_height; // 0xbeb0
} CEnemy;

