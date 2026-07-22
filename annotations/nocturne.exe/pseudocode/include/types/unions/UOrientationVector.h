#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/COrientation.h"
#include "types/classes/CVector3f.h"

// Union: UOrientationVector
#pragma pack(push, 1)
typedef union UOrientationVector {
    CVector3f vec;
    COrientation orient;
} UOrientationVector;
#pragma pack(pop)

