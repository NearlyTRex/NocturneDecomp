#include "common/math/vector3f.h"
#include "core/vecdir/vecdir.h"

#include <gtest/gtest.h>

#include <numbers>
#include <type_traits>

namespace nocturne::core {
namespace {

constexpr float kQuarter = std::numbers::pi_v<float> / 2.0F;

TEST(CoreVecdirFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&convertDirectionVectorToEulerAngles),
                                 common::CVector3f (*)(const common::CVector3f &)>);
}

TEST(CoreVecdirFunctions, ADirectionIsAHeadingAboutYAndAPitchAboutX) {
    const common::CVector3f right = convertDirectionVectorToEulerAngles({.x = 1.0F});
    EXPECT_EQ(right.y, kQuarter);
    EXPECT_EQ(right.x, -0.0F);
    EXPECT_EQ(right.z, 0.0F);
    const common::CVector3f rising = convertDirectionVectorToEulerAngles({.y = 1.0F, .z = 1.0F});
    EXPECT_EQ(rising.y, 0.0F);
    EXPECT_FLOAT_EQ(rising.x, -kQuarter / 2.0F);
}

TEST(CoreVecdirFunctions, StraightUpOrDownIsAQuarterTurnAboutX) {
    EXPECT_EQ(convertDirectionVectorToEulerAngles({.y = 2.0F}).x, -kQuarter);
    EXPECT_EQ(convertDirectionVectorToEulerAngles({.y = -2.0F}).x, kQuarter);
    EXPECT_EQ(convertDirectionVectorToEulerAngles({}).y, 0.0F);
}

} // namespace
} // namespace nocturne::core
