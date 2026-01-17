#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_weldVertices
typedef int (*CObj_weldVertices)(struct CObj* this_ptr, double weld_tolerance, int remove_degenerate);

