#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CMotionController_accumulateScaledRootMotion.h"
#include "types/funcdefs/CMotionController_findPatchToFrame.h"

// Forward declarations
struct CMotionController;

// Function Definition: CMotionController_dtor
typedef struct CMotionController* (*CMotionController_dtor)(struct CMotionController* this_ptr);

