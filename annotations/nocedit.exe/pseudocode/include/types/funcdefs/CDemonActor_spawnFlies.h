#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_spawnFlies
typedef void (*CDemonActor_spawnFlies)(struct CDemonActor* this_ptr, int fly_count, float spawn_radius);

