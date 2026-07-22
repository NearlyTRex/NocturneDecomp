#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CVert;

// Function Definition: CObj_findAndRemoveVertex
typedef int CObj_findAndRemoveVertex(struct CObj* this_ptr, struct CVert* vertex_ptr);

