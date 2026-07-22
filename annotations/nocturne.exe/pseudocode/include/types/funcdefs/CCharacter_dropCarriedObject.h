#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CVector3f;

// Function Definition: CCharacter_dropCarriedObject
typedef void CCharacter_dropCarriedObject(struct CCharacter* this_ptr, int hand_index, struct CVector3f* drop_direction);

