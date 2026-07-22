#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CActorProperty;
struct CDemonActor;

// Function Definition: CActorPropertyActionFunc
typedef int CActorPropertyActionFunc(struct CDemonActor* actor, struct CActorProperty* property);

