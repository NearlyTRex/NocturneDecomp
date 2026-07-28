#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3i.h"

// Structure: CGargoyle
// Ghidra size: 0xbd80 (48512 bytes)
#pragma pack(push, 1)
typedef struct CGargoyle {
    CEnemy base; // 0x0
    int part_indices[12]; // 0xbd24
    int stone_red; // 0xbd54
    int stone_green; // 0xbd58
    int stone_blue; // 0xbd5c
    struct CDemonActor* home_base; // 0xbd60
    uint sfx_handles[2]; // 0xbd64
    CVector3i target_scale; // 0xbd6c
    int returning_home; // 0xbd78
    float petrify_timer; // 0xbd7c
} CGargoyle;
#pragma pack(pop)

