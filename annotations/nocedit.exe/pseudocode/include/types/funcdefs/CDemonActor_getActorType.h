#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct CDemonActorType;

// Function Definition: CDemonActor_getActorType
typedef struct CDemonActorType* CDemonActor_getActorType(struct CDemonActor* this_ptr);

