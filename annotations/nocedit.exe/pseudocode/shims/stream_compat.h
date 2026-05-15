#pragma once

// =============================================================================
// STREAM_COMPAT - Watcom/STL Stream Compatibility Layer
// =============================================================================
//
// The original binary uses Watcom C++ 11.0 iostream classes internally.
// The codec functions (CLZWCompress, CLZWDecompress) and ostream_write take
// Watcom _istream*/_ostream* parameters. In reconstructed code we use
// std::ifstream/std::ofstream for readability, and these adapters bridge
// the interface at the boundary.
//
// At the binary level, the Watcom ifstream contains an _istream subobject
// and the Watcom ofstream contains an _ostream subobject. The original code
// passed pointers to these subobjects directly. These helpers replicate that
// conversion for the reconstructed std:: streams.
//
// This header lives in shims/ rather than include/system/ because the
// system/ tree is regenerated from headers.py on every Ghidra re-export —
// keeping the project-specific buffer wrappers and back-cast helpers here
// means re-exports don't wipe them.

#include <fstream>
#include <strstream>
#include "system/iostream.h"

inline _istream *watcom_istream_from(std::istream &is) {
    return reinterpret_cast<_istream *>(&is);
}

inline _ostream *watcom_ostream_from(std::ostream &os) {
    return reinterpret_cast<_ostream *>(&os);
}

// Inverses of watcom_*_from. Every _istream*/_ostream* in our build originated
// from a watcom_*_from call, so the back-cast is symmetric. Use these to query
// or operate on the underlying std stream (e.g. .fail(), .put(), .get()) inside
// keeps and shim bridges instead of open-coding a reinterpret_cast.
inline std::istream &std_istream_from(_istream *is) {
    return *reinterpret_cast<std::istream *>(is);
}

inline std::ostream &std_ostream_from(_ostream *os) {
    return *reinterpret_cast<std::ostream *>(os);
}

// File-stream variants. Used when a function receives the full Watcom
// ifstream*/ofstream* (typically a re-open / clear / seekg pattern on an
// already-constructed stream). The Watcom struct layout begins with the
// fstreambase_core subobject; std::ifstream / std::ofstream begin with their
// own fstreambase-equivalent. The compat layer asserts these layouts are
// reinterpret-cast-compatible at the boundary so methods like .clear() and
// .seekg() resolve to the actual std implementation.
inline std::ifstream &std_ifstream_from(ifstream *fs) {
    return *reinterpret_cast<std::ifstream *>(fs);
}

inline std::ofstream &std_ofstream_from(ofstream *fs) {
    return *reinterpret_cast<std::ofstream *>(fs);
}

// RAII wrappers for the codec keeps' "stream over a fixed buffer" pattern. They
// hide three things:
//   1. The choice of std::ostrstream / std::istrstream as the buffer-backed
//      stream (a C++98-deprecated header; encapsulated here so a future swap to
//      a custom std::streambuf is a one-file edit, not N keep edits).
//   2. The libstdc++ strstreambuf n==0 quirk: it treats size 0 as "find the
//      end via strlen", which walks past the buffer end. Watcom's _ostrstream
//      with size 0 is a silent-fail write sink; the wrapper emulates that by
//      routing to a 1-byte fallback when the caller's buffer is full.
//   3. The "decrement caller's remaining-size by tellp() at end of scope"
//      bookkeeping that codec keeps repeat verbatim — handled by the dtor.
//
// Implicit conversion to _ostream*/_istream* lets the wrapper be passed directly
// to vtable codec calls expecting Watcom stream pointers.
class watcom_buffer_ostream {
    char fallback_;
    bool full_;
    int *size_ptr_;
    std::ostrstream oss_;
public:
    watcom_buffer_ostream(char *buf, int *size_ptr)
        : full_(*size_ptr <= 0)
        , size_ptr_(size_ptr)
        , oss_(full_ ? &fallback_ : buf,
               full_ ? 1 : *size_ptr,
               std::ios::out | std::ios::binary) {}
    ~watcom_buffer_ostream() {
        if (!full_) *size_ptr_ -= (int)oss_.tellp();
    }
    operator _ostream *() { return watcom_ostream_from(oss_); }
};

class watcom_buffer_istream {
    std::istrstream iss_;
public:
    watcom_buffer_istream(char *buf, int size) : iss_(buf, size) {}
    operator _istream *() { return watcom_istream_from(iss_); }
};
