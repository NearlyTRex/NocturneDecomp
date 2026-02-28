#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CActorPropertyFilterFunc
typedef int CActorPropertyFilterFunc(struct CDemonActor* source_actor, struct CDemonActor* candidate_actor);

