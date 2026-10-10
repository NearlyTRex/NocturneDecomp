#pragma once

#include "platform/mrglvertex.h"

#include <vector>

namespace nocturne::platform {

// A mesh polygon. The MRGL record is a header and as many corners as its count says, past the
// four the original's type declares; here the corners are the record's own.
struct SMRGLPrimitiveQuad {
    std::vector<SMRGLVertex> vertices;
};

} // namespace nocturne::platform
