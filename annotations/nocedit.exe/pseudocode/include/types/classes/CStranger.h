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
    undefined1 field9_0x1fc30; // 0x1fc30
    undefined1 field10_0x1fc31; // 0x1fc31
    undefined1 field11_0x1fc32; // 0x1fc32
    undefined1 field12_0x1fc33; // 0x1fc33
    undefined1 field13_0x1fc34; // 0x1fc34
    undefined1 field14_0x1fc35; // 0x1fc35
    undefined1 field15_0x1fc36; // 0x1fc36
    undefined1 field16_0x1fc37; // 0x1fc37
    int action_pending; // 0x1fc38
    char unk6[156]; // 0x1fc3c
    CKeyFramedModelInstance model; // 0x1fcd8
    char unk7[28]; // 0x1fe54
} CStranger;

