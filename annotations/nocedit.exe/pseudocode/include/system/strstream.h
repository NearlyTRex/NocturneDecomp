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
    streambuf streambuf;
    struct strstreambuf_vtable* vtable;
    void* alloc_fn;
    void* free_fn;
    int allocation_size;
    short minbuf_size;
    uchar bit_flags;
    char padding;
} strstreambuf;

// Structure: strstreambase_core
typedef struct strstreambase_core {
    struct WatcomVirtualBaseDescriptor* layout_info;
    strstreambuf strstreambuf;
    struct WatcomThunkedDestructor* destructor_vtable;
} strstreambase_core;

// Structure: istrstream
typedef struct istrstream {
    strstreambase_core strstreambase_core;
    istream_core istream_core;
    char padding[4];
    ios ios;
} istrstream;

// Structure: ostrstream
typedef struct ostrstream {
    strstreambase_core strstreambase_core;
    ostream_core field_68;
    ios field_80;
    char field_124[4];
} ostrstream;

// Structure: strstreambase
typedef struct strstreambase {
    strstreambase_core strstreambase_core;
    char padding[4];
    ios ios;
    int field_116;
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

