#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CObj;

// Function Definition: CObj_setPolyMaterialIdsWithFlag
typedef void (*CObj_setPolyMaterialIdsWithFlag)(struct CObj* this_ptr, int material_id, uint flag_mask);

