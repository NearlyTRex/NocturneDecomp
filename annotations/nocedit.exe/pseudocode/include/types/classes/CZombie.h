#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombie
// Ghidra size: 0xbfac (49068 bytes)
typedef struct CZombie {
    CEnemy base; // 0x0
    char unk1[32]; // 0xbeb4
    struct CDemonActor* grave_actor; // 0xbed4
    int unk2; // 0xbed8
    char rise_from_grave_condition[32]; // 0xbedc
    char unk3[68]; // 0xbefc
    int is_miner_zombie; // 0xbf40
    int always_chase_fast; // 0xbf44
    char unk4[100]; // 0xbf48
} CZombie;

