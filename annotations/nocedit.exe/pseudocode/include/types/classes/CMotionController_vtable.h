#pragma once

// Forward declarations
struct CMotionController;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CMotionController_accumulateScaledRootMotion.h"
#include "types/funcdefs/CMotionController_dtor.h"
#include "types/funcdefs/CMotionController_findPatchToFrame.h"

// Structure: CMotionController_vtable
// Ghidra size: 0xc (12 bytes)
typedef struct CMotionController_vtable {
    CMotionController_dtor* dtor; // 0x0
    CMotionController_findPatchToFrame* findPatchToFrame; // 0x4
    CMotionController_accumulateScaledRootMotion* accumulateScaledRootMotion; // 0x8
} CMotionController_vtable;

