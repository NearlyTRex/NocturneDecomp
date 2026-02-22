#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/unions/UOrientationVector.h"

// Structure: CDemonActorTransformState
// Ghidra size: 0x1c (28 bytes)
typedef struct CDemonActorTransformState {
    CVector3f position; // 0x0
    UOrientationVector orientation; // 0xc
    int dirty_flags; // 0x18
} CDemonActorTransformState;

