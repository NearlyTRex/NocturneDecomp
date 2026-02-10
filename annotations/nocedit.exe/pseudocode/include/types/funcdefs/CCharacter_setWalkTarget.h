#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_setWalkTarget
typedef void CCharacter_setWalkTarget(struct CCharacter* this_ptr, struct CDemonActor* target, float speed, float distance);

