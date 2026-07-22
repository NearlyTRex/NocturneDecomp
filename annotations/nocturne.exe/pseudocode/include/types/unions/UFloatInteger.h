#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: UFloatInteger
#pragma pack(push, 1)
typedef union UFloatInteger {
    float f;
    int i;
} UFloatInteger;
#pragma pack(pop)

