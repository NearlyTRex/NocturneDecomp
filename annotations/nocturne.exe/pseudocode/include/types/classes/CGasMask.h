#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CGasMask
// Ghidra size: 0x2d8 (728 bytes)
#pragma pack(push, 1)
typedef struct CGasMask {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    struct CDemonActor* carrier; // 0x2d4
} CGasMask;
#pragma pack(pop)

