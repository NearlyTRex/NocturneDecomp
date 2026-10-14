#include "engine/clipper/clipplane.h"
#include "platform/projectedvertex.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

using platform::SProjectedVertex;

constexpr int kIntMin = -0x7fffffff - 1;

TEST(ClipPlane, APointOnAPlaneIsPastIt) {
    EXPECT_TRUE(isPastPlane({.transformed_x = 10, .transformed_z = 10}, kPositiveXPlane));
    EXPECT_TRUE(isPastPlane({.transformed_x = -10, .transformed_z = 10}, kNegativeXPlane));
    EXPECT_TRUE(isPastPlane({.transformed_y = 10, .transformed_z = 10}, kPositiveYPlane));
    EXPECT_TRUE(isPastPlane({.transformed_y = -10, .transformed_z = 10}, kNegativeYPlane));
}

TEST(ClipPlane, APointWithinTheDepthIsInsideEverySide) {
    const SProjectedVertex point{.transformed_x = 9, .transformed_y = -9, .transformed_z = 10};
    EXPECT_FALSE(isPastPlane(point, kPositiveXPlane));
    EXPECT_FALSE(isPastPlane(point, kNegativeXPlane));
    EXPECT_FALSE(isPastPlane(point, kPositiveYPlane));
    EXPECT_FALSE(isPastPlane(point, kNegativeYPlane));
}

// Negating the most negative depth leaves it, so only the most negative x is past minus it.
TEST(ClipPlane, MinusTheMostNegativeDepthWraps) {
    EXPECT_TRUE(isPastPlane({.transformed_x = kIntMin, .transformed_z = kIntMin}, kNegativeXPlane));
    EXPECT_FALSE(isPastPlane({.transformed_x = 0, .transformed_z = kIntMin}, kNegativeXPlane));
}

TEST(ClipPlane, AClipReturnsHowFarAlongTheEdgeItMetThePlane) {
    SProjectedVertex output;
    EXPECT_EQ(clipEdgeToPlane({.transformed_z = 10}, {.transformed_x = 30, .transformed_z = 10},
                              kPositiveXPlane, output),
              715827882); // A third, in 1.31.
    EXPECT_EQ(output.transformed_x, 10);
    EXPECT_EQ(output.transformed_z, 10);
}

} // namespace
} // namespace nocturne::engine
