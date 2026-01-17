#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_customRayIntersect
typedef float (*CDemonActor_customRayIntersect)(struct CDemonActor* this_ptr, struct CVector3f* ray_origin, struct CVector3f* ray_direction, struct CVector3f* out_normal);

