#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CBattery
// Ghidra size: 0x2e0 (736 bytes)
typedef struct CBattery {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[380]; // 0x15c
    float recharge_time; // 0x2d8
    float discharge_time; // 0x2dc
} CBattery;

