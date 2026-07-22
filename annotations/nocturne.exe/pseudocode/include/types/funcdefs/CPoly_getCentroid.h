#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CPoly;
struct CVector3d;

// Function Definition: CPoly_getCentroid
typedef struct CVector3d* CPoly_getCentroid(struct CPoly* this_ptr, struct CVector3d* out_centroid);

