#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CMotionController;

// Function Definition: CMotionController_findPatchToFrame
typedef int CMotionController_findPatchToFrame(struct CMotionController* this_ptr, int source_motion_index, float source_frame, int target_motion_index);

