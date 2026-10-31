#pragma once

#include "common/math/vector3i.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::core {

// A wrapping 16 by 16 by 16 grid of fog densities, and how the camera's fog moves through it.
struct SFogGrid {
    static constexpr std::size_t kSize = 16;

    using Row = std::array<std::uint8_t, kSize>;
    using Plane = std::array<Row, kSize>;

    // Indexed [z][y][x].
    std::array<Plane, kSize> planes{};
    common::CVector3i sampling_offset;
    // 16.16 world units a second.
    common::CVector3i scroll_vector;
    // 24.8.
    int height_threshold = 0;
    // 16.16.
    int density_multiplier = 0;
};

} // namespace nocturne::core
