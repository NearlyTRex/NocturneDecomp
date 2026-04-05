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

#include <fstream>
#include "system/iostream.h"

inline _istream *watcom_istream_from(std::istream &is) {
    return reinterpret_cast<_istream *>(&is);
}

inline _ostream *watcom_ostream_from(std::ostream &os) {
    return reinterpret_cast<_ostream *>(&os);
}

