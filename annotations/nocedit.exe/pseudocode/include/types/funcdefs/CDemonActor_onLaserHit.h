#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonActor;
struct SLaserInfo;

// Function Definition: CDemonActor_onLaserHit
typedef void CDemonActor_onLaserHit(struct CDemonActor* this_ptr, struct SLaserInfo* laser_info);

