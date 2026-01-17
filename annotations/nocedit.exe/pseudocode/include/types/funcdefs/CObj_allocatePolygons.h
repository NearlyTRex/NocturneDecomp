#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_allocatePolygons
typedef int (*CObj_allocatePolygons)(struct CObj* this_ptr, int poly_count);

