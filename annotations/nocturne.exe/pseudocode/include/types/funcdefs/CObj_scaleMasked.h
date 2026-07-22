#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVec;

// Function Definition: CObj_scaleMasked
typedef void CObj_scaleMasked(struct CObj* this_ptr, uint flag_mask, struct CVec* scale, struct CVec* pivot);

