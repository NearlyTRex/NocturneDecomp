#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SDamageInfo;

// Function Definition: CDemonActor_fillAttackDamageInfo
typedef void (*CDemonActor_fillAttackDamageInfo)(struct CDemonActor* this_ptr, int attack_flags, struct SDamageInfo* out_damage_info, struct CDemonActor* victim);

