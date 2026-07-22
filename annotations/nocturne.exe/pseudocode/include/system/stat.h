#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// STAT - System Header
// =============================================================================

// Structure: _stat
#pragma pack(push, 1)
typedef struct _stat {
    int _st_dev;
    uint _st_ino;
    ushort _st_mode;
    short _st_nlink;
    ulong _st_uid;
    short _st_gid;
    int _st_rdev;
    long _st_size;
    time_t _st_atime;
    time_t _st_mtime;
    time_t _st_ctime;
    time_t _st_btime;
    ulong _st_attr;
    ulong _st_archivedID;
    ulong _st_updatedID;
    ushort _st_inheritedRightsMask;
    uchar _st_originatingNameSpace;
    uchar _st_name[13];
} _stat;
#pragma pack(pop)

