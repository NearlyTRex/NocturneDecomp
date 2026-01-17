#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_onPickup
typedef void (*CDemonActor_onPickup)(struct CDemonActor* this_ptr, struct CDemonActor* owner);

