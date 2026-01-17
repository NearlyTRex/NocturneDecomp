#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_hasEdgeIntersection
typedef int (*CPoly_hasEdgeIntersection)(struct CPoly* this_ptr, struct CPoly* other);

