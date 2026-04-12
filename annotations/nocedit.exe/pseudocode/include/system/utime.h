#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// UTIME - System Header
// =============================================================================

// Structure: _utimbuf
#pragma pack(push, 1)
typedef struct _utimbuf {
    time_t actime;
    time_t modtime;
} _utimbuf;
#pragma pack(pop)

