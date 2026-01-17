#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_removePolygonsAtVertex
typedef int (*CObj_removePolygonsAtVertex)(struct CObj* this_ptr, int vertex_index);

