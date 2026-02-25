#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/enums/EWerewolfType.h"

// Structure: CWerewolf
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CWerewolf {
    CEnemy base; // 0x0
    EWerewolfType type; // 0xbebc
    int bone_indices[5]; // 0xbec0
    int light_up_eyes; // 0xbed4
    uint sfx_handle; // 0xbed8
    float howl_cooldown; // 0xbedc
    uint sfx_handles[2]; // 0xbee0
    struct CDemonActor* chain_anchor; // 0xbee8
    float chain_length; // 0xbeec
    struct CDemonActor* alpha1; // 0xbef0
    struct CDemonActor* alpha2; // 0xbef4
    int phase; // 0xbef8
    float phase_timer; // 0xbefc
    float eye_glow_phase; // 0xbf00
} CWerewolf;

