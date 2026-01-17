#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CVector3f;

// Function Definition: CDemonActor_onDropped
typedef void (*CDemonActor_onDropped)(struct CDemonActor* this_ptr, struct CVector3f* drop_position);

