#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CEnemy;
struct CVector3f;

// Function Definition: CEnemy_getTargetPoint
typedef struct CVector3f* CEnemy_getTargetPoint(struct CEnemy* this_ptr, struct CVector3f* out_point);

