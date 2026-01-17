#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CPoly;

// Function Definition: CObj_containsPolygon
typedef int (*CObj_containsPolygon)(struct CObj* this_ptr, struct CPoly* poly_ptr);

