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
// Ghidra size: 0xbedc8 (781768 bytes)
#pragma pack(push, 1)
typedef struct CVampireBoss {
    CEnemy base; // 0x0
    CDeformableModelInstance model; // 0xbd24
    CCloth wing_cloth; // 0xdfd8
    CCloth cape_cloth; // 0x48b08
    CCloth skirt_cloth; // 0x83638
    int form; // 0xbe168
    CMorph morph; // 0xbe16c
    float morph_t; // 0xbed98
    float action_timer; // 0xbed9c
    float flee_timer; // 0xbeda0
    int has_attacked; // 0xbeda4
    uint sfx_handle; // 0xbeda8
    int bat_ai_state; // 0xbedac
    int waypoint_index; // 0xbedb0
    struct CDemonActor* way_point_0; // 0xbedb4
    struct CDemonActor* way_point_1; // 0xbedb8
    struct CDemonActor* way_point_2; // 0xbedbc
    struct CDemonActor* way_point_3; // 0xbedc0
    int follow_result; // 0xbedc4
} CVampireBoss;
#pragma pack(pop)

