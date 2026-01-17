#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CPoly;

// Function Definition: CPoly_init
typedef void (*CPoly_init)(struct CPoly* this_ptr, struct CObj* parent_obj);

