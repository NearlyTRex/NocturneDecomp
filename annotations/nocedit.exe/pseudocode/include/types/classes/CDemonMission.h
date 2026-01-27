#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: CDemonMission
// Ghidra size: 0x27d0 (10192 bytes)
typedef struct CDemonMission {
    char unk1[8]; // 0x0
    int mission_version_num; // 0x8
    char unk2[312]; // 0xc
    void* set_list; // 0x144
    char unk3[1024]; // 0x148
    struct CDemonActor* first_actor; // 0x548
    char unk4[832]; // 0x54c
    int actorCountMaybe; // 0x88c
    char unk5[8000]; // 0x890
} CDemonMission;

