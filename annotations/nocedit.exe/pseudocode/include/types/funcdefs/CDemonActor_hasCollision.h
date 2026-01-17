#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SCollisionInfo;

// Function Definition: CDemonActor_hasCollision
typedef int (*CDemonActor_hasCollision)(struct CDemonActor* this_ptr, struct SCollisionInfo* collision_info);

