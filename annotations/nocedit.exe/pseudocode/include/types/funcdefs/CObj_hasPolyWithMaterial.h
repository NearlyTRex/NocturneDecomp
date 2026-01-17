#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_hasPolyWithMaterial
typedef int (*CObj_hasPolyWithMaterial)(struct CObj* this_ptr, int material_id);

