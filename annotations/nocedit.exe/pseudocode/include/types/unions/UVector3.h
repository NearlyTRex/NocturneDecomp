#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// Union: UVector3
typedef union UVector3 {
    CVector3f f;
    CVector3i i;
} UVector3;

