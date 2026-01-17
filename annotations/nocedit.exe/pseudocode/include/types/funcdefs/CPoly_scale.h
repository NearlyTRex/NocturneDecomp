#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_scale
typedef void (*CPoly_scale)(struct CPoly* this_ptr, struct CVector3d* scale, struct CVector3d* pivot);

