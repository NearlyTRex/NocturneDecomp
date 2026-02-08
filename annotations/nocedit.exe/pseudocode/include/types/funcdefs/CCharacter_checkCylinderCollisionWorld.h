#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CVector3f;
struct SDamageInfo;

// Function Definition: CCharacter_checkCylinderCollisionWorld
typedef int CCharacter_checkCylinderCollisionWorld(struct CCharacter* this_ptr, struct CVector3f* world_point, float tolerance, struct SDamageInfo* damage_info);

