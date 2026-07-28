#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/enums/EWerewolfType.h"

// Structure: CWerewolf
// Ghidra size: 0xbd6c (48492 bytes)
#pragma pack(push, 1)
typedef struct CWerewolf {
    CEnemy base; // 0x0
    EWerewolfType type; // 0xbd24
    int bone_indices[5]; // 0xbd28
    int light_up_eyes; // 0xbd3c
    uint sfx_handle; // 0xbd40
    float howl_cooldown; // 0xbd44
    uint sfx_handles[2]; // 0xbd48
    struct CDemonActor* chain_anchor; // 0xbd50
    float chain_length; // 0xbd54
    struct CDemonActor* alpha1; // 0xbd58
    struct CDemonActor* alpha2; // 0xbd5c
    int phase; // 0xbd60
    float phase_timer; // 0xbd64
    float eye_glow_phase; // 0xbd68
} CWerewolf;
#pragma pack(pop)

