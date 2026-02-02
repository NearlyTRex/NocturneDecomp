#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CActorProperty;
struct CDemonActor;

// Function Definition: CDemonActor_CActorPropertyActionFunc
typedef int (*CDemonActor_CActorPropertyActionFunc)(struct CDemonActor* actor, struct CActorProperty* property);

