#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CParticle;
struct CVector3f;

// Function Definition: CParticle_setup
typedef void CParticle_setup(struct CParticle* this_ptr, struct CVector3f* position, struct CVector3f* velocity);

