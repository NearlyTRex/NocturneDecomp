#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_canPickup
typedef int (*CDemonActor_canPickup)(struct CDemonActor* this_ptr, struct CDemonActor* picker);

