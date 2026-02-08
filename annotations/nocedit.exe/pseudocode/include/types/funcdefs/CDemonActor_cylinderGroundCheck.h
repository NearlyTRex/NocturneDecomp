#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_cylinderGroundCheck
typedef float CDemonActor_cylinderGroundCheck(struct CDemonActor* this_ptr, float radius, struct CVector3f* out_normal);

