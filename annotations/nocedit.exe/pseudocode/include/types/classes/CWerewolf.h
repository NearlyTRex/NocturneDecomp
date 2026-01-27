#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CWerewolf
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CWerewolf {
    CEnemy base; // 0x0
    int unk1; // 0xbeb4
    int unk2; // 0xbeb8
    int type; // 0xbebc
    char unk3[20]; // 0xbec0
    int light_up_eyes; // 0xbed4
    char unk4[20]; // 0xbed8
    float chain_length; // 0xbeec
    char unk5[8]; // 0xbef0
    int phase; // 0xbef8
    float phase_timer; // 0xbefc
    int unk6; // 0xbf00
} CWerewolf;

