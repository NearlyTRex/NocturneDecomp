#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// UTIME - System Header
// =============================================================================

// Structure: utimbuf
typedef struct utimbuf {
    time_t actime;
    time_t modtime;
} utimbuf;

