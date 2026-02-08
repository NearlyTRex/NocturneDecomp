#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MATH - System Header
// =============================================================================

// Forward declarations
struct MathErrorContext;

// Function Definition: MATH_CHECK_REPORTING_FUNC
typedef int MATH_CHECK_REPORTING_FUNC(struct MathErrorContext* param0);

// Structure: MathErrorContext
typedef struct MathErrorContext {
    int errorType;
    char* errorData;
    double inputValue1;
    double inputValue2;
    double resultValue;
} MathErrorContext;

