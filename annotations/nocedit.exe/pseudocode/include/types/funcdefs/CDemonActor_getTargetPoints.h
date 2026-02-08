#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_getTargetPoints
typedef int CDemonActor_getTargetPoints(struct CDemonActor* this_ptr, struct CVector3f* out_points_array);

