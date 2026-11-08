#pragma once

#include <cstdint>

namespace nocturne::platform {

// How the hardware renderer's scene is smoothed, once its 3D has landed and before the 2D is
// drawn over it. The original had no anti-aliasing. The values are frozen: the game saves them
// as [Graphics] antialias.
enum class EAntialias : std::uint8_t {
    Off,
    Fxaa,
};

inline constexpr int kAntialiasCount = 2;

} // namespace nocturne::platform
