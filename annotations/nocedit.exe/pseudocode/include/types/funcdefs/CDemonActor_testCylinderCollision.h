#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SCollisionReturnInfo;

// Function Definition: CDemonActor_testCylinderCollision
typedef int CDemonActor_testCylinderCollision(struct CDemonActor* this_ptr, struct SCollisionReturnInfo* collision_info, float tolerance);

