#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVert;

// Function Definition: CObj_containsVertex
typedef int (*CObj_containsVertex)(struct CObj* this_ptr, struct CVert* vertex_ptr);

