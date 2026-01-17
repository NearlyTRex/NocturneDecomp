#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// DOS - System Header
// =============================================================================

// Structure: find_t
typedef struct find_t {
    uchar attrib;
    uchar padding_0x1[3];
    time_t wr_time;
    time_t cr_time;
    time_t ac_time;
    long size;
    char name[260];
} find_t;

