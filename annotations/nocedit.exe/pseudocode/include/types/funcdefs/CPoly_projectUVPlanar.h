#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector2d;

// Function Definition: CPoly_projectUVPlanar
typedef void (*CPoly_projectUVPlanar)(struct CPoly* this_ptr, struct CVector2d* uv_scale);

