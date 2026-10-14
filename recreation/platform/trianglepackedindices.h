#pragma once

#include <cstdint>

namespace nocturne::platform {

// A triangle's corners as indices into a vertex buffer.
struct STrianglePackedIndices {
    std::uint16_t vertex_index_0 = 0;
    std::uint16_t vertex_index_1 = 0;
    std::uint16_t vertex_index_2 = 0;
};

} // namespace nocturne::platform
