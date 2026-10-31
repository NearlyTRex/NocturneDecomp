#include "common/math/vector3f.h"
#include "core/cloth/cloth.h"
#include "tests/mocks/core/clothfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <numbers>
#include <span>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;

// Four points pinned along the top as two triangles: the top right nearer the middle than the top
// left, and the bottom right a little higher than the bottom left.
class CClothStepTest : public CClothFixture {
protected:
    CClothStepTest() {
        givenFile("models\\square.kfm",
                  clothModelText("-256,0,0\n128,0,0\n-256,-256,0\n128,-192,0\n", 4,
                                 "0,3, 0,0,0, 1,0,0, 3,0,0\n0,3, 0,0,0, 3,0,0, 2,0,0\n", 2));
        givenFile("models\\square.cth",
                  clothText("square.kfm", kPhysics, "2\n// list\n0\n1\n", "0\n"));
    }

    static void setUp(CCloth &cloth) {
        cloth.load("square.cth");
        cloth.setup(kOrigin, kOrigin, nullptr);
    }

    static void step(CCloth &cloth, float delta_time, float floor_y = kNoFloor,
                     const common::CVector3f &position = kOrigin,
                     const common::CVector3f &euler = kOrigin,
                     const common::CVector3f &wind = kOrigin) {
        cloth.process(position, euler, delta_time, floor_y, nullptr, wind);
    }

    static bool samePoints(const CCloth &a, const CCloth &b) {
        for (std::size_t i = 0; i < a.getVertices().size(); ++i) {
            const SClothVertex &p = a.getVertices()[i];
            const SClothVertex &q = b.getVertices()[i];
            if (p.position.x != q.position.x || p.position.y != q.position.y ||
                p.position.z != q.position.z || p.secondary_velocity.y != q.secondary_velocity.y) {
                return false;
            }
        }
        return true;
    }

    static constexpr common::CVector3f kOrigin{};
    static constexpr float kNoFloor = 9999.0F;
    CCloth first_{dosio_, models_};
    CCloth second_{dosio_, models_};
};

// The higher point first, and of the same height the nearer the middle.
TEST_F(CClothStepTest, SetUpThePointsRestAndAreTakenFromTheTopDown) {
    setUp(first_);
    EXPECT_THAT(first_.getVertexOrder(), ElementsAre(1, 0, 3, 2));
    const std::span<const SClothVertex> points = first_.getVertices();
    EXPECT_TRUE(points[0].locked);
    EXPECT_TRUE(points[1].locked);
    EXPECT_FALSE(points[3].locked);
    EXPECT_EQ(points[3].position.y, -0.75F);
    EXPECT_EQ(points[3].secondary_velocity.y, 0.0F);
    // Each point is tied to those as high or higher it shares an edge with, as the edges come.
    EXPECT_THAT(points[0].connected_indices, ElementsAre(1));
    EXPECT_THAT(points[1].connected_indices, ElementsAre(0));
    EXPECT_THAT(points[2].connected_indices, ElementsAre(3, 0));
    EXPECT_THAT(points[3].connected_indices, ElementsAre(1, 0));
    EXPECT_EQ(points[0].rest_lengths[0], 1.5F);
    EXPECT_EQ(points[3].rest_lengths[0], 0.75F);
    EXPECT_FLOAT_EQ(points[3].rest_lengths[1], std::hypot(1.5F, 0.75F));
}

TEST_F(CClothStepTest, PinnedPointsStayAndTheRestFall) {
    setUp(first_);
    step(first_, 0.05F);
    const std::span<const SClothVertex> points = first_.getVertices();
    EXPECT_EQ(points[0].position.y, 0.0F);
    EXPECT_EQ(points[1].position.y, 0.0F);
    EXPECT_NE(points[2].position.y, -1.0F);
    EXPECT_FALSE(points[2].floor_collision);
}

// A floor above the points lifts them onto it before the ties pull them; one of 9999 or more is
// none.
TEST_F(CClothStepTest, AFloorHoldsThePointsUp) {
    setUp(first_);
    step(first_, 0.05F, -0.5F);
    const SClothVertex &point = first_.getVertices()[2];
    EXPECT_GT(point.position.y, -0.75F);
    EXPECT_TRUE(point.floor_collision);
    setUp(second_);
    step(second_, 0.05F, 10000.0F);
    setUp(first_);
    step(first_, 0.05F, -9999.0F);
    EXPECT_TRUE(samePoints(first_, second_));
}

TEST_F(CClothStepTest, AStepShorterThanAHundredthIsAHundredth) {
    setUp(first_);
    step(first_, 0.001F);
    setUp(second_);
    step(second_, 0.01F);
    EXPECT_TRUE(samePoints(first_, second_));
}

// Facing along z, a wind from behind blows the cloth and a wind ahead doesn't.
TEST_F(CClothStepTest, OnlyAWindAgainstTheFacingBlowsTheCloth) {
    setUp(first_);
    step(first_, 0.05F);
    setUp(second_);
    step(second_, 0.05F, kNoFloor, kOrigin, kOrigin, {.z = 2.0F});
    EXPECT_TRUE(samePoints(first_, second_));
    setUp(second_);
    step(second_, 0.05F, kNoFloor, kOrigin, kOrigin, {.z = -2.0F});
    EXPECT_FALSE(samePoints(first_, second_));
}

TEST_F(CClothStepTest, MovingAndTurningSwingTheCloth) {
    setUp(first_);
    step(first_, 0.05F);
    setUp(second_);
    step(second_, 0.05F, kNoFloor, {.x = 0.5F});
    EXPECT_FALSE(samePoints(first_, second_));
    setUp(second_);
    step(second_, 0.05F, kNoFloor, kOrigin, {.y = std::numbers::pi_v<float> / 4.0F});
    EXPECT_FALSE(samePoints(first_, second_));
}

// Falling, the ties hold the bottom points near their rest; lifted near the top by a floor, the
// slack ties spring them back down below it.
TEST_F(CClothStepTest, StretchedTiesPullAndSlackOnesPush) {
    setUp(first_);
    for (int i = 0; i < 10; ++i) {
        step(first_, 0.05F);
    }
    const SClothVertex &hanging = first_.getVertices()[3];
    EXPECT_NEAR(hanging.position.y, -0.75F, 0.25F);
    setUp(second_);
    step(second_, 0.05F, -0.25F);
    EXPECT_LT(second_.getVertices()[3].position.y, -0.25F);
    EXPECT_TRUE(second_.getVertices()[3].floor_collision);
}

} // namespace
} // namespace nocturne::core
