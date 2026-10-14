#include "platform/trianglepackedindices.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(STrianglePackedIndices, HoldsThreeSixteenBitIndices) {
    static_assert(std::is_same_v<decltype(STrianglePackedIndices::vertex_index_0), std::uint16_t>);
    static_assert(std::is_same_v<decltype(STrianglePackedIndices::vertex_index_1), std::uint16_t>);
    static_assert(std::is_same_v<decltype(STrianglePackedIndices::vertex_index_2), std::uint16_t>);
    const STrianglePackedIndices indices;
    EXPECT_EQ(indices.vertex_index_0, 0);
    EXPECT_EQ(indices.vertex_index_1, 0);
    EXPECT_EQ(indices.vertex_index_2, 0);
}

} // namespace
} // namespace nocturne::platform
