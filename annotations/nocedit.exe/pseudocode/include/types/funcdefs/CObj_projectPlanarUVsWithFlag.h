#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVector2d;

// Function Definition: CObj_projectPlanarUVsWithFlag
typedef void (*CObj_projectPlanarUVsWithFlag)(struct CObj* this_ptr, struct CVector2d* uv_scale, uint flag_mask);

