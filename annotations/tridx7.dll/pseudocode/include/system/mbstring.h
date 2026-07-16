#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MBSTRING - System Header
// =============================================================================

// Structure: _iobuf
#pragma pack(push, 8)
typedef struct _iobuf {
    char* _ptr;
    int _cnt;
    char* _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char* _tmpfname;
} __attribute__((aligned(4))) _iobuf;
#pragma pack(pop)

// Typedef: _FILE
typedef _iobuf _FILE;

