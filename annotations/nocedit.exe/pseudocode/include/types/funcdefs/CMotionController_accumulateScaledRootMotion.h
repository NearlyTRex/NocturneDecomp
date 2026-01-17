#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CMotionController;

// Function Definition: CMotionController_accumulateScaledRootMotion
typedef void (*CMotionController_accumulateScaledRootMotion)(struct CMotionController* this_ptr, float start_frame, float end_frame, float scale_factor);

