#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_translate
typedef void CPoly_translate(struct CPoly* this_ptr, struct CVector3d* offset);

