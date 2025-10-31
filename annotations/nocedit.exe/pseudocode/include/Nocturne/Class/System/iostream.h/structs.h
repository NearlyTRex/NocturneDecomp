#pragma once

// Structure: ios
typedef struct ios {
    streambuf* __strmbuf;
    ostream* __tied_stream;
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

// Structure: istream
typedef struct istream {
    istream_core istream_core;
    ios ios;
} istream;

// Structure: istream_core
typedef struct istream_core {
    WatcomInheritanceLayout* layout_info;
    int __last_read_length;
    WatcomThunkedDestructor* destructor_vtable;
    void* istream_data;
} istream_core;

// Structure: ostream
typedef struct ostream {
    ostream_core ostream_core;
    ios ios;
} ostream;

// Structure: ostream_core
typedef struct ostream_core {
    WatcomInheritanceLayout* layout_info;
    WatcomThunkedDestructor* destructor_vtable;
    void* ostream_data;
} ostream_core;

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

