#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: UMpegSubbandScalefactorCodes
#pragma pack(push, 1)
typedef union UMpegSubbandScalefactorCodes {
    int q[3][32];
    float f[3][32];
} UMpegSubbandScalefactorCodes;
#pragma pack(pop)

