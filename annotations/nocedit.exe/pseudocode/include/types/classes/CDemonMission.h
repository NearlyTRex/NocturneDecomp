#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: CDemonMission
// Ghidra size: 0x27d0 (10192 bytes)
typedef struct CDemonMission {
    char field_0[8]; // 0x0
    int mission_version_num; // 0x8
    char field_12[312]; // 0xc
    void* set_list; // 0x144
    char field_328[1024]; // 0x148
    struct CDemonActor* first_actor; // 0x548
    char field_1356[832]; // 0x54c
    int actorCountMaybe; // 0x88c
    char field_2192[8000]; // 0x890
} CDemonMission;

