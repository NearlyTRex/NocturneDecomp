#pragma once

// Forward declarations
union UOrientationVector;

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SPlayerInput;
union UOrientationVector;

// Function Definition: CDemonActor_updateInteraction
typedef int CDemonActor_updateInteraction(struct CDemonActor* this_ptr, union UOrientationVector* user_orientation, struct SPlayerInput* player_control);

