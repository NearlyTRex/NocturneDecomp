#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"

// Structure: SPanel
// Ghidra size: 0x64 (100 bytes)
#pragma pack(push, 1)
typedef struct SPanel {
    int exists; // 0x0
    float anim_progress; // 0x4
    float anim_speed; // 0x8
    CVector3f local_position; // 0xc
    CVector3f rotation; // 0x18
    CMatrix3x3f rotation_matrix; // 0x24
    int dead; // 0x48
    CColor3i color; // 0x4c
    CVector3f world_position; // 0x58
} SPanel;
#pragma pack(pop)

