#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CEnemy.h"

// Structure: CVampireBoss
// Ghidra size: 0xce920 (846112 bytes)
typedef struct CVampireBoss {
    CEnemy base; // 0x0
    CDeformableModelInstance model; // 0xbebc
    char unk2[785232]; // 0xe170
    int form; // 0xcdcc0
    char unk3[3116]; // 0xcdcc4
    float morph_t; // 0xce8f0
    char unk4[24]; // 0xce8f4
    struct CDemonActor* way_point_0; // 0xce90c
    struct CDemonActor* way_point_1; // 0xce910
    struct CDemonActor* way_point_2; // 0xce914
    struct CDemonActor* way_point_3; // 0xce918
    int unk5; // 0xce91c
} CVampireBoss;

