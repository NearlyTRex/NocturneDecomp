#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_allVerticesHaveAttribFlags
typedef int (*CPoly_allVerticesHaveAttribFlags)(struct CPoly* this_ptr, uint flag_mask);

