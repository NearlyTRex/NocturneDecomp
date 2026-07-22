#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMorph.h"

// Structure: CMimic
// Ghidra size: 0x4ca58 (313944 bytes)
#pragma pack(push, 1)
typedef struct CMimic {
    CEnemy base; // 0x0
    char mirror_condition[100]; // 0xbebc
    char attack_condition[100]; // 0xbf20
    CCloth cloth; // 0xbf84
    int attack_mode; // 0x4bdf4
    struct CDemonActor* mirror_plane_actor; // 0x4bdf8
    char morph_actor_type[40]; // 0x4bdfc
    CMorph morph; // 0x4be24
    float morph_blend; // 0x4ca50
    struct CDemonActor* morph_target_actor; // 0x4ca54
} CMimic;
#pragma pack(pop)

