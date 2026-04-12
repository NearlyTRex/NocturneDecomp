#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_containsPoint
typedef int CPoly_containsPoint(struct CPoly* this_ptr, struct CVector3d* point);

