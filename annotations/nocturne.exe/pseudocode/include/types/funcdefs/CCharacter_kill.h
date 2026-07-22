#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CVector3f;

// Function Definition: CCharacter_kill
typedef void CCharacter_kill(struct CCharacter* this_ptr, int damage_type, struct CVector3f* damage_direction, float impact_force);

