#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVec;

// Function Definition: CObj_translateMasked
typedef void (*CObj_translateMasked)(struct CObj* this_ptr, uint flag_mask, struct CVec* offset);

