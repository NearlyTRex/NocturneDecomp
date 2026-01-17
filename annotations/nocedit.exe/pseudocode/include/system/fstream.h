#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"

// =============================================================================
// FSTREAM - System Header
// =============================================================================

// Structure: filebuf
typedef struct filebuf {
    streambuf streambuf;
    struct filebuf_vtable* vtable;
    int file_handle;
    int file_mode;
    char unbuffered_get_area[5];
    char attached;
    char padding_0x3E[2];
} filebuf;

// Structure: filebuf_vtable
typedef struct filebuf_vtable {
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
} filebuf_vtable;

// Structure: fstreambase_core
typedef struct fstreambase_core {
    void* layout_info;
    filebuf filebuf;
    void* destructor_vtable;
} fstreambase_core;

// Structure: fstreambase
typedef struct fstreambase {
    fstreambase_core base;
    char padding_0x44[4];
    ios ios_base;
} fstreambase;

// Structure: ifstream
typedef struct ifstream {
    fstreambase_core fstreambase_core;
    istream_core istream_core;
    ios ios;
} ifstream;

// Structure: ofstream
typedef struct ofstream {
    fstreambase_core fstreambase_core;
    ostream_core ostream_core;
    ios ios;
} ofstream;

