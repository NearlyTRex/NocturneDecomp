#pragma once

#include <string>

namespace nocturne::platform {

// A texture as a mesh names it.
struct SMRGLTextureBasic {
    std::string texture_name;
    // The engine's texture cache slot it was last found in, tried first next time.
    int cache_index = 0;
};

} // namespace nocturne::platform
