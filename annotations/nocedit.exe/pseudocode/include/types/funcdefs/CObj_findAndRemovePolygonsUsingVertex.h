#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVert;

// Function Definition: CObj_findAndRemovePolygonsUsingVertex
typedef int (*CObj_findAndRemovePolygonsUsingVertex)(struct CObj* this_ptr, struct CVert* vert_ptr);

