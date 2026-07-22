#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_getBounds
typedef void CPoly_getBounds(struct CPoly* this_ptr, struct CVector3d* out_min, struct CVector3d* out_max);

