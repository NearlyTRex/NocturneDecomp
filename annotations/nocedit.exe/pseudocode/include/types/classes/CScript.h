#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CScript
// Ghidra size: 0x480 (1152 bytes)
typedef struct CScript {
    char unk1[4]; // 0x0
    int who_is_speaking; // 0x4
    char unk2[4]; // 0x8
    int focus_actor; // 0xc
    char unk3[4]; // 0x10
    int focus_actor_locked; // 0x14
    char unk4[48]; // 0x18
    int next_cmd; // 0x48
    float cmd_timer; // 0x4c
    float dialog_wav_time; // 0x50
    char current_message; // 0x54
    char unk5[1031]; // 0x55
    int call_stack_count; // 0x45c
    char unk6[32]; // 0x460
} CScript;

