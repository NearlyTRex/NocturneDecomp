#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CDemonActor_CActorPropertyValidatorFunc
typedef int (*CDemonActor_CActorPropertyValidatorFunc)(struct CDemonActor* actor, int new_value);

