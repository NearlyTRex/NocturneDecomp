// =============================================================================
// CRT STUBS SHIM
// =============================================================================
//
// Stand-ins for Watcom CRT symbols referenced by static initializers and
// vtable/typeinfo tables in globals_*.cpp. The crt/ module is deliberately
// excluded from the build (we link against the host C/C++ runtime), but the
// globals still contain baked-in pointers to these Watcom CRT functions.
//
// Two flavours live here:
//
//   1. Bridges  — entries whose callers ARE reached at runtime, where the
//                 _ostream*/_istream* parameter actually came from a real
//                 std::ostream/std::istream via the watcom_*_from helpers in
//                 stream_compat.h. These reinterpret_cast back to the std type
//                 and forward the call.
//
//   2. Stubs    — entries that resolve the link but are never expected to be
//                 hit at runtime (vtable/typeinfo slots, dead Watcom-only
//                 ctors/dtors, callers that have been replaced by modern STL).
//
// Bridges currently in place:
//   - ostream_put: reached by codec write paths (flushBitBuffer,
//                  writeBitsToStream, CLZWDictionary::writeCodeSequence) which
//                  call put(c) without inspecting _ostream fields.
//   - istream_get: reached by codec read paths. Callers used to dereference
//                  Watcom-specific fields like (istream->_ios).padding +
//                  layout_info->offset_to_base + -0x21 for EOF detection;
//                  those callers (readByteWithCount, readBitsFromStream,
//                  CCodec::process) have keeps that now query std::istream::
//                  fail() via the same reinterpret_cast.
//
// Return-value convention for stubs:
//   - ctors / dtors return this_ptr (the Watcom convention)
//   - int / uint methods return 0
//   - void returns nothing
//   - variadic stdio returns 0
//
// If a STUB starts getting called at runtime (ASan will notice or output will
// silently go missing), promote it to a bridge — but check first whether the
// caller pokes at Watcom-specific layout fields (like the istream_get callers
// above), which means the caller itself needs a keep instead.

#include "nocturne.h"
#include "stream_compat.h"

// -- pure virtual dispatchers -------------------------------------------------

void __watcallStack crt_cpp_c_pureVirtualStub_FUN_005fee9f(void) {}
void crt_cpp_c_handlePureVirtualCall_FUN_006015f1(void) {}

// -- stdio --------------------------------------------------------------------

int __cdecl crt_stdio_c__sprintf_FUN_005fdbd0(char *, char *, ...) { return 0; }
int __watcallStack crt_stdio_c_closeUnsupported_FUN_0060b9b7(void) { return 0; }

// -- iostream: ios, ostream, istream, streambuf ------------------------------

ios * __cdecl crt_iostream_cpp_ios_ctor_FUN_006061fc(ios *this_ptr) { return this_ptr; }
ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0060632c(ios *this_ptr, uint) { return this_ptr; }
uint __cdecl crt_iostream_cpp_ios_clear_FUN_00600e64(ios *, uint) { return 0; }

_ostream * __cdecl crt_iostream_cpp_ostream_ctor_FUN_006061a2(_ostream *this_ptr, uint) { return this_ptr; }
_ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(_ostream *this_ptr, uint) { return this_ptr; }
_ostream * __cdecl crt_iostream_cpp_ostream_put_FUN_005ff2d7(_ostream *this_ptr, int c) {
    if (this_ptr) std_ostream_from(this_ptr).put(static_cast<char>(c));
    return this_ptr;
}
void __cdecl crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4(ios *, int) {}

_istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_00606376(_istream *this_ptr, uint) { return this_ptr; }
_istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(_istream *this_ptr, uint) { return this_ptr; }
_istream * __cdecl crt_iostream_cpp_istream_get_FUN_005ff245(_istream *this_ptr, char *c) {
    if (this_ptr && c) std_istream_from(this_ptr).get(*c);
    return this_ptr;
}

streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(streambuf *this_ptr) { return this_ptr; }
streambuf * __watcallStack crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff(streambuf *this_ptr, void *, int) { return this_ptr; }
int __watcallStack crt_iostream_cpp_streambuf_do_sputn_FUN_00606780(streambuf *, void *, SIZE_T) { return 0; }
int __watcallStack crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932(streambuf *, void *, SIZE_T) { return 0; }
void __watcallStack crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f(streambuf *, int, int, int) {}
int __watcallStack crt_iostream_cpp_streambuf_seekoff_FUN_00610ab0(streambuf *, int, int, int) { return 0; }
int __watcallStack crt_iostream_cpp_streambuf_sync_FUN_00610ab6(streambuf *) { return 0; }
int __watcallStack crt_iostream_cpp_doallocate_FUN_0060d677(streambuf *) { return 0; }

// -- fstream: fstreambase, ifstream, ofstream, filebuf -----------------------

fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(fstreambase *this_ptr, uint) { return this_ptr; }
fstreambase * __cdecl crt_fstream_cpp_fstreambase_dtor_FUN_00606509(fstreambase *this_ptr, uint) { return this_ptr; }
void __cdecl crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_006064f1(ios *, int) {}

ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(void *this_ptr, int) { return (ifstream *)this_ptr; }
ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_005ff856(void *this_ptr, uint) { return (ifstream *)this_ptr; }
void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(_istream *, int) {}
void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios *, int) {}

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(void *this_ptr, int) { return (ofstream *)this_ptr; }
ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(void *this_ptr, uint) { return (ofstream *)this_ptr; }
void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(_ostream *, int) {}
void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *, int) {}

filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(filebuf *this_ptr) { return this_ptr; }
filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(filebuf *this_ptr, uint) { return this_ptr; }
int __watcallStack crt_fstream_cpp_filebuf_overflow_FUN_0060d881(filebuf *, int) { return 0; }
int __watcallStack crt_fstream_cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf *, int) { return 0; }
int __watcallStack crt_fstream_cpp_filebuf_seekoff_FUN_0060dbe8(filebuf *, long, int, int) { return 0; }
streambuf * __watcallStack crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c(filebuf *this_ptr, char *, int) { return (streambuf *)this_ptr; }
int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(filebuf *) { return 0; }
int __watcallStack crt_fstream_cpp_filebuf_underflow_FUN_0060da87(filebuf *) { return 0; }

void __cdecl crt_fstream_cpp_openFile_FUN_00600e85(void *, char *, int, SIZE_T) {}
_istream * __cdecl crt_fstream_cpp_istream_seekg_FUN_00600ee4(void *this_ptr, int) { return (_istream *)this_ptr; }

// -- strstream: strstreambase, strstreambuf, ostrstream, istrstream ---------

strstreambase * __cdecl crt_strstream_cpp_strstreambase_dtor_FUN_006062a6(strstreambase *this_ptr, uint) { return this_ptr; }
void __cdecl crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0060618a(ios *, int) {}

strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf *this_ptr) { return this_ptr; }
strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f(strstreambuf *this_ptr, uint) { return this_ptr; }
int __watcallStack crt_strstream_cpp_strstreambuf_overflow_FUN_0060b9bd(strstreambuf *, int) { return 0; }
int __watcallStack crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf *) { return 0; }
strstreambuf * __watcallStack crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70(strstreambuf *this_ptr, char *, int) { return this_ptr; }
int __watcallStack crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80(strstreambuf *, int, int, int) { return 0; }
int __watcallStack crt_strstream_cpp_strstreambuf_sync_FUN_0060bb7c(void) { return 0; }
int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_0060bc22(strstreambuf *) { return 0; }

_ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(void *this_ptr, uint) { return (_ostrstream *)this_ptr; }
_istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(void *this_ptr, uint) { return (_istrstream *)this_ptr; }
