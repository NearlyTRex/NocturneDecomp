#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MATH - System Header
// =============================================================================

// Structure: MathErrorContext
typedef struct MathErrorContext {
    int errorType;
    char* errorData;
    double inputValue1;
    double inputValue2;
    double resultValue;
} MathErrorContext;

