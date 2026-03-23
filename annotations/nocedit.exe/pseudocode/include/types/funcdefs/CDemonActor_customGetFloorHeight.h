#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_customGetFloorHeight
typedef int CDemonActor_customGetFloorHeight(struct CDemonActor* this_ptr, struct CVector3f* position, float search_radius, float* out_floor_height);

