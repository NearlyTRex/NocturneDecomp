#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/dosio/dosio.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/projectedvertex.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <limits>

namespace nocturne::engine {
namespace {

using common::CMatrix3x3i;
using common::CVector3i;
using platform::SProjectedVertex;
using ::testing::NiceMock;

constexpr int kOne = 0x10000;
constexpr int kIntMin = std::numeric_limits<int>::min();
constexpr int kIntMax = std::numeric_limits<int>::max();

class CSpecialTransformTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Half width 319 and half height 239, centred on (320, 240).
        two_d_.setupViewportAndClipping(0, 0, 639, 479);
        setTransform({.x = kOne}, {.y = kOne}, {.z = kOne});
    }

    void setTransform(const CVector3i &row0, const CVector3i &row1, const CVector3i &row2) {
        CMatrix3x3i transform;
        transform.m = {row0, row1, row2};
        matrix_.setTransformMatrix(transform);
    }

    // A vertex holding a mark in every field, to show which ones a call writes.
    static SProjectedVertex marked() {
        return {.transformed_x = 7,
                .transformed_y = 7,
                .transformed_z = 7,
                .inv_z = 7,
                .screen_x = 7,
                .screen_y = 7};
    }

    SProjectedVertex project(const CVector3i &point) {
        SProjectedVertex vertex = marked();
        special_.transformAndProjectPoint(vertex, point);
        return vertex;
    }

    NiceMock<platform::MockFileSystem> file_system_;
    CDosIo dosio_{file_system_};
    NiceMock<MockScreenDevice> screen_;
    NiceMock<MockRawInput> raw_input_;
    C2d two_d_{dosio_, screen_, raw_input_};
    NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture current_texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
};

TEST_F(CSpecialTransformTest, ProjectsAPointInViewOntoTheScreen) {
    matrix_.setRelativeOrigin({.x = 100, .y = 200, .z = 300});
    const SProjectedVertex vertex = project({.x = 164, .y = 232, .z = 428});
    EXPECT_EQ(vertex.transformed_x, 64);
    EXPECT_EQ(vertex.transformed_y, 32);
    EXPECT_EQ(vertex.transformed_z, 128);
    EXPECT_EQ(vertex.inv_z, 0x7fffffff / 128);
    // 320 + 319 * 64 / 128 and 240 - 239 * 32 / 128, in 16.16.
    EXPECT_EQ(vertex.screen_x, 31424512);
    EXPECT_EQ(vertex.screen_y, 11812864);
}

TEST_F(CSpecialTransformTest, EachCoordinateTakesOneColumnOfTheTransform) {
    setTransform({.x = kOne}, {.x = 2 * kOne, .y = kOne}, {.z = kOne});
    const SProjectedVertex vertex = project({.x = 10, .y = 5, .z = 1000});
    EXPECT_EQ(vertex.transformed_x, 20);
    EXPECT_EQ(vertex.transformed_y, 5);
    EXPECT_EQ(vertex.transformed_z, 1000);
}

// Two halves make a whole only when the products are summed before the shift.
TEST_F(CSpecialTransformTest, SumsTheProductsBeforeDroppingTheFraction) {
    setTransform({.x = kOne / 2}, {.x = kOne / 2}, {.z = kOne});
    EXPECT_EQ(project({.x = 1, .y = 1, .z = 100}).transformed_x, 1);
}

TEST_F(CSpecialTransformTest, TheRelativeOriginWrapsAsTheOriginalsSubtractDid) {
    matrix_.setRelativeOrigin({.x = 1});
    EXPECT_EQ(project({.x = kIntMin, .z = 100}).transformed_x, kIntMax);
}

TEST_F(CSpecialTransformTest, APointOnTheEdgeOfTheViewIsInIt) {
    const SProjectedVertex vertex = project({.x = 100, .y = -100, .z = 100});
    EXPECT_EQ(vertex.screen_x, (320 + 319) << 16);
    EXPECT_EQ(vertex.screen_y, (240 + 239) << 16);
}

TEST_F(CSpecialTransformTest, OutsideTheViewScreenXHoldsTheSidesItIsPast) {
    EXPECT_EQ(project({.x = 101, .z = 100}).screen_x, SProjectedVertex::kClipRight);
    EXPECT_EQ(project({.x = -101, .z = 100}).screen_x, SProjectedVertex::kClipLeft);
    EXPECT_EQ(project({.y = 101, .z = 100}).screen_x, SProjectedVertex::kClipBottom);
    EXPECT_EQ(project({.y = -101, .z = 100}).screen_x, SProjectedVertex::kClipTop);
    EXPECT_EQ(project({}).screen_x, SProjectedVertex::kClipNear);
    EXPECT_EQ(project({.x = 2, .y = -2, .z = 1}).screen_x,
              SProjectedVertex::kClipRight | SProjectedVertex::kClipTop);
    EXPECT_EQ(project({.x = -2, .y = 2, .z = -1}).screen_x, SProjectedVertex::kClipLeft |
                                                                SProjectedVertex::kClipBottom |
                                                                SProjectedVertex::kClipNear);
}

TEST_F(CSpecialTransformTest, OutsideTheViewTheEyeSpacePointIsStillWritten) {
    const SProjectedVertex vertex = project({.x = 300, .y = 20, .z = 100});
    EXPECT_EQ(vertex.transformed_x, 300);
    EXPECT_EQ(vertex.transformed_y, 20);
    EXPECT_EQ(vertex.transformed_z, 100);
    EXPECT_EQ(vertex.inv_z, marked().inv_z);
    EXPECT_EQ(vertex.screen_y, marked().screen_y);
}

// Negating the most negative depth leaves it as it is, as NEG does, so nothing is past the
// left or top.
TEST_F(CSpecialTransformTest, TheMostNegativeDepthIsPastRightBottomAndNear) {
    EXPECT_EQ(project({.z = kIntMin}).screen_x, SProjectedVertex::kClipRight |
                                                    SProjectedVertex::kClipBottom |
                                                    SProjectedVertex::kClipNear);
}

} // namespace
} // namespace nocturne::engine
