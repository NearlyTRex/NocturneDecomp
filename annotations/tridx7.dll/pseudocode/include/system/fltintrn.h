#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// FLTINTRN - System Header
// =============================================================================

// Typedef: STRFLT
// pointer to _strflt
typedef struct _strflt* STRFLT;

// Structure: _strflt
#pragma pack(push, 8)
typedef struct _strflt {
    int sign;
    int decpt;
    int flag;
    char* mantissa;
} __attribute__((aligned(4))) _strflt;
#pragma pack(pop)

// Enum: enum_3272
enum {
    INTRNCVT_OK = 0,
    INTRNCVT_OVERFLOW = 1,
    INTRNCVT_UNDERFLOW = 2
};
typedef int enum_3272;

// Typedef: INTRNCVT_STATUS
typedef enum_3272 INTRNCVT_STATUS;

