#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;
struct CPoly;

// Function Definition: CObj_getPolygon
typedef struct CPoly* CObj_getPolygon(struct CObj* this_ptr, uint index);

