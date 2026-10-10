#pragma once

#include "platform/trianglepackedindices.h"

#include <cstdint>

namespace nocturne::platform {

// A triangle of a mesh with its texture coordinates per corner.
struct SInputFace {
    STrianglePackedIndices vertex_indices;
    // 0.16, where the other draws carry 8.24.
    std::uint16_t u_coord_0 = 0;
    std::uint16_t u_coord_1 = 0;
    std::uint16_t u_coord_2 = 0;
    std::uint16_t v_coord_0 = 0;
    std::uint16_t v_coord_1 = 0;
    std::uint16_t v_coord_2 = 0;
};

} // namespace nocturne::platform
