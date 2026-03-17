#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// UTIME - System Header
// =============================================================================

// Structure: _utimbuf
typedef struct _utimbuf {
    time_t actime;
    time_t modtime;
} _utimbuf;

