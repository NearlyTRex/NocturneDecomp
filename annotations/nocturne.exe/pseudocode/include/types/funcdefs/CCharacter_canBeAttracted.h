#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CVector3f;

// Function Definition: CCharacter_canBeAttracted
typedef int CCharacter_canBeAttracted(struct CCharacter* this_ptr, struct CVector3f* out_attract_position);

