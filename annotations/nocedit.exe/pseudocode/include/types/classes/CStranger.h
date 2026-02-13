#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CStranger
// Ghidra size: 0x1fe70 (130672 bytes)
typedef struct CStranger {
    CHero base; // 0x0
    int guns_drawn; // 0x1fbd4
    char unk1[40]; // 0x1fbd8
    struct CDemonActor* unk2; // 0x1fc00
    char unk3[28]; // 0x1fc04
    struct CDemonActor* unk4; // 0x1fc20
    char unk5[4]; // 0x1fc24
    struct CDemonActor* ladder_to_descend; // 0x1fc28
    struct CDemonActor* weapon; // 0x1fc2c
    char unk6[8]; // 0x1fc30
    int action_pending; // 0x1fc38
    int melee_attack_index; // 0x1fc3c
    float action_timer; // 0x1fc40
    char unk9[144]; // 0x1fc44
    float grab_timer; // 0x1fcd4
    CKeyFramedModelInstance model; // 0x1fcd8
    char unk11[28]; // 0x1fe54
} CStranger;

