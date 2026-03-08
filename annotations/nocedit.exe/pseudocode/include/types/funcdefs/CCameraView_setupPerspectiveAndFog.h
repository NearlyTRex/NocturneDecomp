#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonCamera;
struct CVector3f;

// Function Definition: CCameraView_setupPerspectiveAndFog
typedef void CCameraView_setupPerspectiveAndFog(struct CDemonCamera* this_ptr, struct CVector3f* position, float max_distance);

