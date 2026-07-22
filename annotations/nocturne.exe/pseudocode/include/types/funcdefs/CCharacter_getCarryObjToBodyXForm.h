#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CMatrix3x4f;

// Function Definition: CCharacter_getCarryObjToBodyXForm
typedef void CCharacter_getCarryObjToBodyXForm(struct CCharacter* this_ptr, int hand_index, struct CMatrix3x4f* out_matrix);

