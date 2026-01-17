#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_hasColinearEdge
typedef int (*CPoly_hasColinearEdge)(struct CPoly* this_ptr, struct CPoly* other);

