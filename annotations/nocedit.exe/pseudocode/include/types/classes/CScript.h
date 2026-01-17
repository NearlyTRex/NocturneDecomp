#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CScript
// Ghidra size: 0x480 (1152 bytes)
typedef struct CScript {
    char padding_0x0[4]; // 0x0
    int whoIsSpeaking; // 0x4
    char padding_0x8[4]; // 0x8
    int focusActor; // 0xc
    char padding_0x10[4]; // 0x10
    int focusActorLocked; // 0x14
    char padding_0x18[48]; // 0x18
    int nextCmd; // 0x48
    float cmdTimer; // 0x4c
    float dialogWavTime; // 0x50
    char currentMessage; // 0x54
    char padding_0x55[1031]; // 0x55
    int callStack_count; // 0x45c
    char field_1120[32]; // 0x460
} CScript;

