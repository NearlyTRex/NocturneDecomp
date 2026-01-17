#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CMatrix3x3d;
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_transform
typedef void (*CPoly_transform)(struct CPoly* this_ptr, struct CMatrix3x3d* matrix, struct CVector3d* pivot);

