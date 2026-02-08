#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/watcom.h"

// =============================================================================
// IOSTREAM - System Header
// =============================================================================

// Forward declarations
struct streambuf;

// Function Definition: cpp_streambuf_destructor
typedef struct streambuf* cpp_streambuf_destructor(struct streambuf* param0);

// Function Definition: cpp_streambuf_do_sgetn
typedef int cpp_streambuf_do_sgetn(struct streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_do_sputn
typedef int cpp_streambuf_do_sputn(struct streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_doallocate
typedef int cpp_streambuf_doallocate(struct streambuf* param0);

// Function Definition: cpp_streambuf_overflow
typedef int cpp_streambuf_overflow(struct streambuf* param0, int param1);

// Function Definition: cpp_streambuf_pbackfail
typedef int cpp_streambuf_pbackfail(struct streambuf* param0, int param1);

// Function Definition: cpp_streambuf_seekoff
typedef int cpp_streambuf_seekoff(struct streambuf* param0, int param1, int param2, int param3);

// Function Definition: cpp_streambuf_seekpos
typedef int cpp_streambuf_seekpos(struct streambuf* param0, int param1, int param2);

// Function Definition: cpp_streambuf_setbuf
typedef struct streambuf* cpp_streambuf_setbuf(struct streambuf* param0, char* param1, int param2);

// Function Definition: cpp_streambuf_sync
typedef int cpp_streambuf_sync(struct streambuf* param0);

// Function Definition: cpp_streambuf_underflow
typedef int cpp_streambuf_underflow(struct streambuf* param0);

// Structure: ios
typedef struct ios {
    struct streambuf* _strmbuf;
    struct ostream* _tied_stream;
    long _format_flags;
    int _error_state;
    int _enabled_exceptions;
    int _float_precision;
    int _field_width;
    void* _xalloc_list;
    char _fill_character;
    char padding[3];
    void* _i_lock;
    void** cleanup_vtable;
} ios;

// Structure: istream_core
typedef struct istream_core {
    struct WatcomInheritanceLayout* layout_info;
    int _last_read_length;
    struct WatcomThunkedDestructor* destructor_vtable;
    void* istream_data;
} istream_core;

// Structure: istream
typedef struct istream {
    istream_core _istream_core;
    ios _ios;
} istream;

// Structure: ostream_core
typedef struct ostream_core {
    struct WatcomInheritanceLayout* layout_info;
    struct WatcomThunkedDestructor* destructor_vtable;
    void* ostream_data;
} ostream_core;

// Structure: ostream
typedef struct ostream {
    ostream_core _ostream_core;
    ios _ios;
} ostream;

// Structure: streambuf
typedef struct streambuf {
    void* _b_lock;
    char* _reserve_base;
    char* _reserve_end;
    char* _get_base;
    char* _get_end;
    char* _get_ptr;
    char* _put_base;
    char* _put_end;
    char* _put_ptr;
    uint _flags;
} streambuf;

// Structure: streambuf_vtable
typedef struct streambuf_vtable {
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
    void* reserved;
    int base_object_size;
} streambuf_vtable;

