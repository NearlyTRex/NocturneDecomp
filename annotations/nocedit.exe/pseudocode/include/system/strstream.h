#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"
#include "system/watcom.h"

// =============================================================================
// STRSTREAM - System Header
// =============================================================================

// Structure: strstreambuf
typedef struct strstreambuf {
    streambuf _streambuf;
    struct strstreambuf_vtable* _vtable;
    void* _alloc_fn;
    void* _free_fn;
    int _allocation_size;
    short _minbuf_size;
    uchar _bit_flags;
    char padding;
} strstreambuf;

// Structure: strstreambase_core
typedef struct strstreambase_core {
    struct WatcomVirtualBaseDescriptor* layout_info;
    strstreambuf _strstreambuf;
    struct WatcomThunkedDestructor* destructor_vtable;
} strstreambase_core;

// Structure: istrstream
typedef struct istrstream {
    strstreambase_core _strstreambase_core;
    istream_core _istream_core;
    char padding[4];
    ios _ios;
} istrstream;

// Structure: ostrstream
typedef struct ostrstream {
    strstreambase_core _strstreambase_core;
    ostream_core _ostream_core;
    ios _ios;
    char padding[4];
} ostrstream;

// Structure: strstreambase
typedef struct strstreambase {
    strstreambase_core _strstreambase_core;
    char padding[4];
    ios _ios;
    int unknown;
} strstreambase;

// Structure: strstreambuf_vtable
typedef struct strstreambuf_vtable {
    cpp_streambuf_do_sgetn* do_sgetn;
    cpp_streambuf_do_sputn* do_sputn;
    cpp_streambuf_pbackfail* pbackfail;
    cpp_streambuf_overflow* overflow;
    cpp_streambuf_underflow* underflow;
    cpp_streambuf_setbuf* setbuf;
    cpp_streambuf_seekoff* seekoff;
    cpp_streambuf_seekpos* seekpos;
    cpp_streambuf_sync* sync;
    cpp_streambuf_destructor* destructor;
    cpp_streambuf_doallocate* doallocate;
} strstreambuf_vtable;

