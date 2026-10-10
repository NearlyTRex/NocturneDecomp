#pragma once

#include "common/fwd.h"

#include <GL/glcorearb.h>

namespace nocturne::platform::gl {

struct SGlPixelFormat {
    GLenum format = 0;
    GLenum type = 0;

    bool operator==(const SGlPixelFormat &) const = default;
};

// How a framebuffer layout reads and writes in GL. Throws std::invalid_argument for Indexed8,
// which GL has no format for.
[[nodiscard]] SGlPixelFormat getGlPixelFormat(common::EPixelLayout layout);

} // namespace nocturne::platform::gl
