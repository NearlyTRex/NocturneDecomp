#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;

// Function Definition: CActorPropertyValidatorFunc
typedef int CActorPropertyValidatorFunc(struct CDemonActor* actor, int new_value);

