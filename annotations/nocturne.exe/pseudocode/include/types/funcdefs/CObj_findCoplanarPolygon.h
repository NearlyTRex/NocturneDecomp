#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CPoly;

// Function Definition: CObj_findCoplanarPolygon
typedef int CObj_findCoplanarPolygon(struct CObj* this_ptr, double coplanar_threshold, struct CPoly* search_polygon);

