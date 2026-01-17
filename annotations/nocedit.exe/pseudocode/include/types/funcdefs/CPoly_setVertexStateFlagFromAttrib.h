#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_setVertexStateFlagFromAttrib
typedef void (*CPoly_setVertexStateFlagFromAttrib)(struct CPoly* this_ptr, uint flag_to_set, uint attrib_mask);

