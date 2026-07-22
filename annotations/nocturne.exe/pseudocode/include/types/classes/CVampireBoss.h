#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMorph.h"

// Structure: CVampireBoss
// Ghidra size: 0xce920 (846112 bytes)
#pragma pack(push, 1)
typedef struct CVampireBoss {
    CEnemy base; // 0x0
    CDeformableModelInstance model; // 0xbebc
    CCloth wing_cloth; // 0xe170
    CCloth cape_cloth; // 0x4dfe0
    CCloth skirt_cloth; // 0x8de50
    int form; // 0xcdcc0
    CMorph morph; // 0xcdcc4
    float morph_t; // 0xce8f0
    float action_timer; // 0xce8f4
    float flee_timer; // 0xce8f8
    int has_attacked; // 0xce8fc
    uint sfx_handle; // 0xce900
    int bat_ai_state; // 0xce904
    int waypoint_index; // 0xce908
    struct CDemonActor* way_point_0; // 0xce90c
    struct CDemonActor* way_point_1; // 0xce910
    struct CDemonActor* way_point_2; // 0xce914
    struct CDemonActor* way_point_3; // 0xce918
    int follow_result; // 0xce91c
} CVampireBoss;
#pragma pack(pop)

