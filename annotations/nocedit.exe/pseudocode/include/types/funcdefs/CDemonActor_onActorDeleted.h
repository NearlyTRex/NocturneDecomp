#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_onActorDeleted
typedef void (*CDemonActor_onActorDeleted)(struct CDemonActor* this_ptr, struct CDemonActor* deleted_actor);

