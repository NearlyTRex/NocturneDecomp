#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_setStateFlags
typedef void (*CObj_setStateFlags)(struct CObj* this_ptr, uint set_mask, uint clear_mask);

