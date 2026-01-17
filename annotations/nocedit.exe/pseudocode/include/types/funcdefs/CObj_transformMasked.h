#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CMatrix3x3d;
struct CObj;
struct CVec;

// Function Definition: CObj_transformMasked
typedef void (*CObj_transformMasked)(struct CObj* this_ptr, uint flag_mask, struct CMatrix3x3d* matrix, struct CVec* pivot);

