#pragma once

#include <array>

namespace nocturne::platform {

// A texture as a mesh names it.
struct SMRGLTextureBasic {
    // NUL-padded; a name of all 16 characters has no terminator.
    std::array<char, 16> texture_name{};
};

} // namespace nocturne::platform
