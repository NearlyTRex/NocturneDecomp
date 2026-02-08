#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVec;

// Function Definition: CPoly_rayPlaneIntersect
typedef double CPoly_rayPlaneIntersect(struct CPoly* this_ptr, struct CVec* ray_origin, struct CVec* ray_dir);

