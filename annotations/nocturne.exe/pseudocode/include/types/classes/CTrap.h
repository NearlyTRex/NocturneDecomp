#pragma once

// Forward declarations
struct CWerewolf;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CTrap
// Ghidra size: 0x2d4 (724 bytes)
#pragma pack(push, 1)
typedef struct CTrap {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    struct CDemonActor* carrier; // 0x2cc
    struct CWerewolf* wolf_in_trap; // 0x2d0
} CTrap;
#pragma pack(pop)

