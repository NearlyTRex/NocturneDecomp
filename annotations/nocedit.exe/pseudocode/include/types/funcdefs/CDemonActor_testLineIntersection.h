#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_testLineIntersection
typedef int CDemonActor_testLineIntersection(struct CDemonActor* this_ptr, struct CVector3f* line_start, struct CVector3f* line_end, struct CVector3f* out_intersection_point);

