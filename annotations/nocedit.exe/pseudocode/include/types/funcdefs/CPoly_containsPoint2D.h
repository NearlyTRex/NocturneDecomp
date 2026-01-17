#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector2d;

// Function Definition: CPoly_containsPoint2D
typedef int (*CPoly_containsPoint2D)(struct CPoly* this_ptr, struct CVector2d* point);

