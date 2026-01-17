#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CPolyIntersectResult;

// Function Definition: CPoly_intersectPoly
typedef int (*CPoly_intersectPoly)(struct CPoly* this_ptr, struct CPoly* other_poly, struct CPolyIntersectResult* out_result);

