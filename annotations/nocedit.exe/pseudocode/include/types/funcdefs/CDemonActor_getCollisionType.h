#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SCollisionInfo;

// Function Definition: CDemonActor_getCollisionType
typedef int (*CDemonActor_getCollisionType)(struct CDemonActor* this_ptr, struct SCollisionInfo* out_collision);

