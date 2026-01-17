#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_computeCoplanarAdjacency
typedef void (*CObj_computeCoplanarAdjacency)(struct CObj* this_ptr, int update_adjacency);

