#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_isGrabbable
typedef int CCharacter_isGrabbable(struct CCharacter* this_ptr, struct CDemonActor* grabber);

