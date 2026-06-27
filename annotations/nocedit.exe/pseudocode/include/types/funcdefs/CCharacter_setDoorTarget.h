#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CDoor;

// Function Definition: CCharacter_setDoorTarget
typedef void CCharacter_setDoorTarget(struct CCharacter* this_ptr, struct CDoor* door_target);

