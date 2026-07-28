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
// Ghidra size: 0xce788 (845704 bytes)
#pragma pack(push, 1)
typedef struct CVampireBoss {
    CEnemy base; // 0x0
    CDeformableModelInstance model; // 0xbd24
    CCloth wing_cloth; // 0xdfd8
    CCloth cape_cloth; // 0x4de48
    CCloth skirt_cloth; // 0x8dcb8
    int form; // 0xcdb28
    CMorph morph; // 0xcdb2c
    float morph_t; // 0xce758
    float action_timer; // 0xce75c
    float flee_timer; // 0xce760
    int has_attacked; // 0xce764
    uint sfx_handle; // 0xce768
    int bat_ai_state; // 0xce76c
    int waypoint_index; // 0xce770
    struct CDemonActor* way_point_0; // 0xce774
    struct CDemonActor* way_point_1; // 0xce778
    struct CDemonActor* way_point_2; // 0xce77c
    struct CDemonActor* way_point_3; // 0xce780
    int follow_result; // 0xce784
} CVampireBoss;
#pragma pack(pop)

