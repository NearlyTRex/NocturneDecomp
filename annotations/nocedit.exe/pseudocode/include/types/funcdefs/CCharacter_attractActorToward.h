#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDemonActor;
struct CVector3f;

// Function Definition: CCharacter_attractActorToward
typedef int CCharacter_attractActorToward(struct CCharacter* this_ptr, struct CDemonActor* actor, struct CVector3f* target_local_point);

