#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_setVertexStateFlags
typedef void (*CPoly_setVertexStateFlags)(struct CPoly* this_ptr, uint set_mask, uint clear_mask);

