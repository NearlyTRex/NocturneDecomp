#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_setVertexAttribFlags
typedef void (*CPoly_setVertexAttribFlags)(struct CPoly* this_ptr, uint set_mask, uint clear_mask);

