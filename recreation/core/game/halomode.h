#pragma once

#include <cstdint>

namespace nocturne::core {

// The INI's haloMode; the values are frozen. The light shafts through fog show from Simple, the
// flashlight's own beam only at Complex.
enum class EHaloMode : std::uint8_t {
    Off = 0,
    Simple = 1,
    Complex = 2,
};

inline constexpr int kHaloModeCount = 3;

} // namespace nocturne::core
