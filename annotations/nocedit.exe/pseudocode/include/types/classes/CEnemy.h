#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"

// Structure: CEnemy
// Ghidra size: 0xbebc (48828 bytes)
typedef struct CEnemy {
    CCharacter base; // 0x0
    float speed; // 0xbe24
    int pool_me; // 0xbe28
    int randomize_me; // 0xbe2c
    int unk1; // 0xbe30
    float guard_distance; // 0xbe34
    char unk2[4]; // 0xbe38
    struct CDemonActor* victim; // 0xbe3c
    int unk3; // 0xbe40
    int unk4; // 0xbe44
    char patrol_name_pattern[100]; // 0xbe48
    int unk5; // 0xbeac
    float victim_height; // 0xbeb0
    struct CDemonActor* script_victim; // 0xbeb4
    int field14_0xbeb8; // 0xbeb8
} CEnemy;

