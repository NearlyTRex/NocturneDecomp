#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_setStateFlagToAttrib
typedef void (*CObj_setStateFlagToAttrib)(struct CObj* this_ptr, uint set_mask, uint attrib_test);

