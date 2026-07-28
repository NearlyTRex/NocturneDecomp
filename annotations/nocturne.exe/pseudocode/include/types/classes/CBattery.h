#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBattery
// Ghidra size: 0x2d8 (728 bytes)
#pragma pack(push, 1)
typedef struct CBattery {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    struct CDemonActor* carrier; // 0x2cc
    float recharge_time; // 0x2d0
    float discharge_time; // 0x2d4
} CBattery;
#pragma pack(pop)

