#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EDeathState.h"

// Forward declarations
struct CCharacter;

// Function Definition: CCharacter_getDeathState
typedef EDeathState CCharacter_getDeathState(struct CCharacter* this_ptr);

