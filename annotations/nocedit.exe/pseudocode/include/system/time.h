#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// TIME - System Header
// =============================================================================

// Structure: _tm
typedef struct _tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
} _tm;

// Structure: dst_rule
typedef struct dst_rule {
    int seconds;
    int minutes;
    int hours;
    int day;
    int month;
    int week;
    int day_of_year;
    int rule_type;
} dst_rule;

// Typedef: time_t
// Signed Long Integer (compiler-specific size)
typedef long time_t;

