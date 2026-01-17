#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_copyFrom
typedef int (*CObj_copyFrom)(struct CObj* this_ptr, struct CObj* source);

