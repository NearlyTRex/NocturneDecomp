#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3i.h"

// Structure: CGargoyle
// Ghidra size: 0xbf18 (48920 bytes)
#pragma pack(push, 1)
typedef struct CGargoyle {
    CEnemy base; // 0x0
    int part_indices[12]; // 0xbebc
    int stone_red; // 0xbeec
    int stone_green; // 0xbef0
    int stone_blue; // 0xbef4
    struct CDemonActor* home_base; // 0xbef8
    uint sfx_handles[2]; // 0xbefc
    CVector3i target_scale; // 0xbf04
    int returning_home; // 0xbf10
    float petrify_timer; // 0xbf14
} CGargoyle;
#pragma pack(pop)

