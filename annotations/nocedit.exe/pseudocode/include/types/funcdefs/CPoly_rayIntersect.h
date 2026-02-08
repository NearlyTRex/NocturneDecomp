#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_rayIntersect
typedef int CPoly_rayIntersect(struct CPoly* this_ptr, struct CVector3d* ray_origin, struct CVector3d* ray_end, struct CVector3d* out_hit_point);

