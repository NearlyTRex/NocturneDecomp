#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct CVector3f;
struct SDamageInfo;

// Function Definition: CCharacter_testDamageLine
typedef int CCharacter_testDamageLine(struct CCharacter* this_ptr, struct CVector3f* start, struct CVector3f* end, struct SDamageInfo* damage_info, struct CVector3f* out_hit);

