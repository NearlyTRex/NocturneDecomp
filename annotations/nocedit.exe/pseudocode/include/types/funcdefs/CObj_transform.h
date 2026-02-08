#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CMatrix3x3d;
struct CObj;
struct CVec;

// Function Definition: CObj_transform
typedef void CObj_transform(struct CObj* this_ptr, struct CMatrix3x3d* matrix, struct CVec* pivot);

