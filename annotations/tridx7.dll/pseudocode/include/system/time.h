#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// TIME - System Header
// =============================================================================

// Structure: tm
#pragma pack(push, 1)
typedef struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
} tm;
#pragma pack(pop)

