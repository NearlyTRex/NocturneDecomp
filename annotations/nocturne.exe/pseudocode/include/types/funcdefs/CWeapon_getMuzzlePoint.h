#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CVector3f;
struct CWeapon;

// Function Definition: CWeapon_getMuzzlePoint
typedef struct CVector3f* CWeapon_getMuzzlePoint(struct CWeapon* this_ptr, struct CVector3f* out_point);

