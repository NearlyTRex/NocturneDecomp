#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "core/set/set.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

using common::CVector3i;

constexpr int kOne = 0x10000;

TEST(CoreSetFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&qsortByDisplayListEntry),
                                 int (*)(SDisplayListSortEntry *, SDisplayListSortEntry *)>);
    static_assert(std::is_same_v<decltype(&transformToWorldSpace),
                                 CVector3i (*)(const CVector3i &, const engine::CMatrix &)>);
}

class CTransformToWorldSpaceTest : public engine::C2dFixture {
protected:
    void giveTheCamera(const common::CMatrix3x3i &transform) {
        matrix_.setTransformMatrix(transform);
        matrix_.invertTransformMatrix();
    }

    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
};

TEST_F(CTransformToWorldSpaceTest, APointIsUnscaledAndMovedOutToTheCamera) {
    giveTheCamera(
        {.m = {CVector3i{.x = 2 * kOne}, CVector3i{.y = 2 * kOne}, CVector3i{.z = 2 * kOne}}});
    matrix_.setCameraOrigin(100, 200, 300);
    EXPECT_EQ(transformToWorldSpace({.x = 10, .y = 20, .z = 30}, matrix_),
              (CVector3i{.x = 105, .y = 210, .z = 315}));
}

// The camera turns x onto y; going back turns y onto x and x onto minus y.
TEST_F(CTransformToWorldSpaceTest, APointIsTurnedBackByTheCamerasInverse) {
    giveTheCamera({.m = {CVector3i{.y = kOne}, CVector3i{.x = -kOne}, CVector3i{.z = kOne}}});
    EXPECT_EQ(transformToWorldSpace({.x = 10, .y = 20, .z = 30}, matrix_),
              (CVector3i{.x = 20, .y = -10, .z = 30}));
}

} // namespace
} // namespace nocturne::core
