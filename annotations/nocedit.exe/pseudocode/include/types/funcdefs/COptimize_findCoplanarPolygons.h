#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct COptimize;
struct CPoly;

// Function Definition: COptimize_findCoplanarPolygons
typedef void COptimize_findCoplanarPolygons(struct COptimize* this_ptr, struct CPoly* polygon, struct COptimize* search_obj);

