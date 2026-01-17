#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVec;

// Function Definition: CObj_scale
typedef void (*CObj_scale)(struct CObj* this_ptr, struct CVec* scale, struct CVec* pivot);

