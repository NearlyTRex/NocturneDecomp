#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct COrientation;
struct SInteractionState;

// Function Definition: CDemonActor_updateInteraction
typedef int CDemonActor_updateInteraction(struct CDemonActor* this_ptr, struct COrientation* user_orientation, struct SInteractionState* interaction_state);

