#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_customGetFloorHeight
typedef int (*CDemonActor_customGetFloorHeight)(struct CDemonActor* this_ptr, float x_pos, float z_pos, float* out_floor_height);

