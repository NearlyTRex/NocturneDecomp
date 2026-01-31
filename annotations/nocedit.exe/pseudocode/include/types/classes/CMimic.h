#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CMimic
// Ghidra size: 0x4ca58 (313944 bytes)
typedef struct CMimic {
    CEnemy base; // 0x0
    int unk1; // 0xbeb4
    int unk2; // 0xbeb8
    char mirror_condition[100]; // 0xbebc
    char attack_condition[100]; // 0xbf20
    char unk3[261744]; // 0xbf84
    int attack_mode; // 0x4bdf4
    struct CDemonActor* mirror_plane_actor; // 0x4bdf8
    char* morph_actor_type; // 0x4bdfc
    char unk4[3160]; // 0x4be00
} CMimic;

