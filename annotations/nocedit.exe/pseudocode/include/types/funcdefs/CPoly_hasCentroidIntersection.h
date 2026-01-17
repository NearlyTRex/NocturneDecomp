#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_hasCentroidIntersection
typedef int (*CPoly_hasCentroidIntersection)(struct CPoly* this_ptr, struct CPoly* other);

