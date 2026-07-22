#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/watcom.h"

// =============================================================================
// IOSTREAM - System Header
// =============================================================================

// Structure: ios
typedef struct ios {
    struct streambuf* __strmbuf;
    struct _ostream* __tied_stream;
    long __format_flags;
    int __error_state;
    int __enabled_exceptions;
    int __float_precision;
    int __field_width;
    void* __xalloc_list;
    char __fill_character;
    char padding[3];
    void* __i_lock;
    void** cleanup_vtable;
} ios;

// Structure: ostream_core
typedef struct ostream_core {
    struct WatcomInheritanceLayout* layout_info;
    struct WatcomThunkedDestructor* destructor_vtable;
    void* ostream_data;
} ostream_core;

// Structure: _ostream
typedef struct _ostream {
    ostream_core _ostream_core;
    ios _ios;
} _ostream;

// Structure: streambuf
typedef struct streambuf {
    void* __b_lock;
    char* __reserve_base;
    char* __reserve_end;
    char* __get_base;
    char* __get_end;
    char* __get_ptr;
    char* __put_base;
    char* __put_end;
    char* __put_ptr;
    uint __flags;
} streambuf;

