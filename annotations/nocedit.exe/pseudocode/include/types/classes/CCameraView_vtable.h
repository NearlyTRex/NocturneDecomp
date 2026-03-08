#pragma once

// Forward declarations
struct CCameraView;
struct CDemonCamera;
struct CVector3f;
struct CVector3i;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CCameraView_dtor.h"
#include "types/funcdefs/CCameraView_getFogValueAtPosition.h"
#include "types/funcdefs/CCameraView_saveAlphaTransform.h"
#include "types/funcdefs/CCameraView_setupPerspectiveAndFog.h"
#include "types/funcdefs/CCameraView_testVisibility.h"

// Structure: CCameraView_vtable
// Ghidra size: 0x14 (20 bytes)
typedef struct CCameraView_vtable {
    CCameraView_dtor* dtor; // 0x0
    CCameraView_setupPerspectiveAndFog* setupPerspectiveAndFog; // 0x4
    CCameraView_getFogValueAtPosition* getFogValueAtPosition; // 0x8
    CCameraView_testVisibility* testVisibility; // 0xc
    CCameraView_saveAlphaTransform* saveAlphaTransform; // 0x10
} CCameraView_vtable;

