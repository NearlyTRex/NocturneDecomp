#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_pickup
typedef void (*CDemonActor_pickup)(struct CDemonActor* this_ptr, struct CDemonActor* carrier);

