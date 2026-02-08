#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_processFootstepAt
typedef int CDemonActor_processFootstepAt(struct CDemonActor* this_ptr, struct CVector3f* location, float volume);

