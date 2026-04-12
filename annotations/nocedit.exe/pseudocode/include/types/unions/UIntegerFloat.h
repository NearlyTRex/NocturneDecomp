#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: UIntegerFloat
#pragma pack(push, 1)
typedef union UIntegerFloat {
    int i;
    float f;
} UIntegerFloat;
#pragma pack(pop)

