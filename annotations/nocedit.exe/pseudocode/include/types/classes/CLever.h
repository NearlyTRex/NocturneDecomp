#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CRuleList.h"
#include "types/enums/ELeverType.h"

// Structure: CLever
// Ghidra size: 0x814 (2068 bytes)
#pragma pack(push, 1)
typedef struct CLever {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int dead; // 0x2d4
    ELeverType lever_type; // 0x2d8
    float param; // 0x2dc
    char on_event[100]; // 0x2e0
    char off_event[100]; // 0x344
    char sound[100]; // 0x3a8
    int momentary_flag; // 0x40c
    int linked_lever; // 0x410
    int end_vertex_index; // 0x414
    int moving; // 0x418
    float move_to_pct; // 0x41c
    CRuleList rule; // 0x420
    int allowed_sides; // 0x80c
    int enable_collision; // 0x810
} CLever;
#pragma pack(pop)

