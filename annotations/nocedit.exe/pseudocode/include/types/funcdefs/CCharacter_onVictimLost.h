#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;

// Function Definition: CCharacter_onVictimLost
typedef void CCharacter_onVictimLost(struct CCharacter* this_ptr, struct CDemonActor* lost_actor);

