#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SDamageInfo;

// Function Definition: CDemonActor_playAttackHitEffects
typedef void (*CDemonActor_playAttackHitEffects)(struct CDemonActor* this_ptr, int attack_flags, struct SDamageInfo* damage_info, struct CDemonActor* victim);

