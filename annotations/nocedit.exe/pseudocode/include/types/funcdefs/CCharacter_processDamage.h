#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CCharacter;
struct SDamageInfo;

// Function Definition: CCharacter_processDamage
typedef void CCharacter_processDamage(struct CCharacter* this_ptr, struct SDamageInfo* damage_info);

