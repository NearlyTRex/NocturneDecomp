#pragma once

// Structure: CMotionController_vtable
// Ghidra size: 0xc (12 bytes)
typedef struct CMotionController_vtable {
    CMotionController_dtor* dtor; // 0x0
    CMotionController_findPatchToFrame* findPatchToFrame; // 0x4
    CMotionController_accumulateScaledRootMotion* accumulateScaledRootMotion; // 0x8
} CMotionController_vtable;

