#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EGroundType.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_handleFootstep
typedef void CDemonActor_handleFootstep(struct CDemonActor* this_ptr, struct CVector3f* position, EGroundType ground_type, float volume);

