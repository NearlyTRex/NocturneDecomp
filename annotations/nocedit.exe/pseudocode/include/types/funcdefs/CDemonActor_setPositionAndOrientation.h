#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_setPositionAndOrientation
typedef void (*CDemonActor_setPositionAndOrientation)(struct CDemonActor* this_ptr, struct CVector3f* new_position, struct CVector3f* new_orientation);

