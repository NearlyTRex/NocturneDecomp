#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MBSTRING - System Header
// =============================================================================

// Structure: _FILE
#pragma pack(push, 8)
typedef struct _FILE {
    char* _ptr;
    int _cnt;
    char* _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char* _tmpfname;
} __attribute__((aligned(4))) _FILE;
#pragma pack(pop)

