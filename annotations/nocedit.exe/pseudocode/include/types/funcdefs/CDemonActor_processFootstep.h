#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_processFootstep
typedef int (*CDemonActor_processFootstep)(struct CDemonActor* this_ptr, float volume);

