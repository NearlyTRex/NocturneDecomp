#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/enums/EWerewolfType.h"

// Structure: CWerewolf
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CWerewolf {
    CEnemy base; // 0x0
    int unk1; // 0xbeb4
    int unk2; // 0xbeb8
    EWerewolfType type; // 0xbebc
    int bone_index; // 0xbec0
    char unk3[16]; // 0xbec4
    int light_up_eyes; // 0xbed4
    uint sfx_handle; // 0xbed8
    char unk4[16]; // 0xbedc
    float chain_length; // 0xbeec
    char unk5[8]; // 0xbef0
    int phase; // 0xbef8
    float phase_timer; // 0xbefc
    int unk6; // 0xbf00
} CWerewolf;

