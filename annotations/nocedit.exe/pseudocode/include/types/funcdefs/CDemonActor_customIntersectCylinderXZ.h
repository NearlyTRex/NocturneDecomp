#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SIntersectXZCylinder;

// Function Definition: CDemonActor_customIntersectCylinderXZ
typedef void (*CDemonActor_customIntersectCylinderXZ)(struct CDemonActor* this_ptr, struct SIntersectXZCylinder* cylinder);

