#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_drop
typedef void CDemonActor_drop(struct CDemonActor* this_ptr, struct CDemonActor* carrier, struct CVector3f* drop_position);

