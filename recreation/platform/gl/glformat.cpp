#include "platform/gl/glformat.h"

#include "common/video/framebuffer.h"

#include <array>
#include <cstddef>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

// Indexed by EPixelLayout, from Rgb565. Bgra8888 is B, G, R, A in memory: the little-endian
// bytes of 0xAARRGGBB.
constexpr std::array<SGlPixelFormat, 2> kFormats = {{
    {.format = GL_RGB, .type = GL_UNSIGNED_SHORT_5_6_5},
    {.format = GL_BGRA, .type = GL_UNSIGNED_BYTE},
}};

} // namespace

SGlPixelFormat getGlPixelFormat(common::EPixelLayout layout) {
    if (layout == common::EPixelLayout::Indexed8) {
        throw std::invalid_argument("GL has no format for 8-bit indexed pixels");
    }
    return kFormats.at(static_cast<std::size_t>(layout) - 1);
}

} // namespace nocturne::platform::gl
