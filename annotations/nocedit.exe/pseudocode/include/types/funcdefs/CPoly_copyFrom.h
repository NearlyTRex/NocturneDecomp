#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CPoly;

// Function Definition: CPoly_copyFrom
typedef void (*CPoly_copyFrom)(struct CPoly* this_ptr, struct CPoly* source, struct CObj* parent_obj);

