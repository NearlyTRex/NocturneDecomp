#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CRuleList.h"
#include "types/enums/ELeverType.h"

// Structure: CLever
// Ghidra size: 0x80c (2060 bytes)
#pragma pack(push, 1)
typedef struct CLever {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int dead; // 0x2cc
    ELeverType lever_type; // 0x2d0
    float param; // 0x2d4
    char on_event[100]; // 0x2d8
    char off_event[100]; // 0x33c
    char sound[100]; // 0x3a0
    int momentary_flag; // 0x404
    struct CLever* linked_lever; // 0x408
    int end_vertex_index; // 0x40c
    int moving; // 0x410
    float move_to_pct; // 0x414
    CRuleList rule; // 0x418
    int allowed_sides; // 0x804
    int enable_collision; // 0x808
} CLever;
#pragma pack(pop)

