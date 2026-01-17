#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVector3d;

// Function Definition: CObj_computeBoundingBox
typedef void (*CObj_computeBoundingBox)(struct CObj* this_ptr, struct CVector3d* out_min, struct CVector3d* out_max);

