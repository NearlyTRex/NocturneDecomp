#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/ECollisionType.h"

// Forward declarations
struct CDemonActor;
struct SCollisionInfo;

// Function Definition: CDemonActor_getCollisionType
typedef ECollisionType CDemonActor_getCollisionType(struct CDemonActor* this_ptr, struct SCollisionInfo* collision_info);

