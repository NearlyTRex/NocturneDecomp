#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CWerewolf
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CWerewolf {
    CEnemy base_enemy; // 0x0
    int field_48820; // 0xbeb4
    int field_48824; // 0xbeb8
    int type; // 0xbebc
    char field_48832[20]; // 0xbec0
    int light_up_eyes; // 0xbed4
    char field_48856[20]; // 0xbed8
    float chain_length; // 0xbeec
    char field_48880[8]; // 0xbef0
    int phase; // 0xbef8
    float phase_timer; // 0xbefc
    int field_48896; // 0xbf00
} CWerewolf;

