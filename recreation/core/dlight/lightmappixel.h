#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a display pixel of the camera's view falls in a light's, as the camera's precomputeLight
// left it: its depth there less the light's bias, 0 where the light doesn't reach it; its shadow
// map entry; and its beam texel.
struct SLightMapPixel {
    int depth = 0;
    std::uint32_t shadow_entry = 0;
    std::uint32_t texel = 0;

    bool operator==(const SLightMapPixel &) const = default;
};

} // namespace nocturne::core
