#include "platform/inputface.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(SInputFace, HoldsIndicesAndSixteenBitCoordinates) {
    static_assert(std::is_same_v<decltype(SInputFace::vertex_indices), STrianglePackedIndices>);
    static_assert(std::is_same_v<decltype(SInputFace::u_coord_0), std::uint16_t>);
    static_assert(std::is_same_v<decltype(SInputFace::v_coord_2), std::uint16_t>);
    const SInputFace face;
    EXPECT_EQ(face.vertex_indices.vertex_index_0, 0);
    EXPECT_EQ(face.u_coord_0, 0);
    EXPECT_EQ(face.u_coord_1, 0);
    EXPECT_EQ(face.u_coord_2, 0);
    EXPECT_EQ(face.v_coord_0, 0);
    EXPECT_EQ(face.v_coord_1, 0);
    EXPECT_EQ(face.v_coord_2, 0);
}

} // namespace
} // namespace nocturne::platform
