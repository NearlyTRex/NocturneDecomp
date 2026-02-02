#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: SPlatformAttachment
// Ghidra size: 0x34 (52 bytes)
typedef struct SPlatformAttachment {
    struct CDemonActor* actor; // 0x0
    CMatrix3x4f matrix; // 0x4
} SPlatformAttachment;

