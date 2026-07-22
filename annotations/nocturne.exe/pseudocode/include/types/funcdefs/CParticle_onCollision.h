#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CParticle;
struct CVector3f;

// Function Definition: CParticle_onCollision
typedef int CParticle_onCollision(struct CParticle* this_ptr, struct CVector3f* collision_normal);

