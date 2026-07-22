#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVert;

// Function Definition: CObj_findVertexIndex
typedef int CObj_findVertexIndex(struct CObj* this_ptr, struct CVert* vertex_ptr);

