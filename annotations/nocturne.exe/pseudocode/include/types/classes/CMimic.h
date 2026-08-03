#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMorph.h"

// Structure: CMimic
// Ghidra size: 0x47580 (292224 bytes)
#pragma pack(push, 1)
typedef struct CMimic {
    CEnemy base; // 0x0
    char mirror_condition[100]; // 0xbd24
    char attack_condition[100]; // 0xbd88
    CCloth cloth; // 0xbdec
    int attack_mode; // 0x4691c
    struct CDemonActor* mirror_plane_actor; // 0x46920
    char morph_actor_type[40]; // 0x46924
    CMorph morph; // 0x4694c
    float morph_blend; // 0x47578
    struct CDemonActor* morph_target_actor; // 0x4757c
} CMimic;
#pragma pack(pop)

