#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_handleFootstep
typedef int CDemonActor_handleFootstep(struct CDemonActor* this_ptr, struct CVector3f* param, int param1, float param2);

