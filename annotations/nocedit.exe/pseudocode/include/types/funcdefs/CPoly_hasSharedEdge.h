#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;

// Function Definition: CPoly_hasSharedEdge
typedef int (*CPoly_hasSharedEdge)(struct CPoly* this_ptr, struct CPoly* other);

