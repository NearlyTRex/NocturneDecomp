#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_startInteraction
typedef int (*CDemonActor_startInteraction)(struct CDemonActor* this_ptr, struct CDemonActor* user);

