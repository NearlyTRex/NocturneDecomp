#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_processFootstepAtOffset
typedef int (*CDemonActor_processFootstepAtOffset)(struct CDemonActor* this_ptr, struct CVector3f* param, float param1);

