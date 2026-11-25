#include "common/math/matrix3x3f.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "common/random/watcomrandom.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "engine/2d/2d.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <cstdlib>
#include <span>

namespace nocturne::core {
namespace {

using ::testing::Return;

// A camera 48 lines tall over a screen whose depths are one row of 64, repeated.
class CDemonCameraTransformTest : public engine::CDemonRendererFixture {
protected:
    CDemonCameraTransformTest() {
        camera_.init(48);
        depth_rows_.fill(depth_row_.data());
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
    }

    // A scene opened and closed, and the projection it had while open.
    [[nodiscard]] engine::SProjectionParams openAndCloseScene() {
        camera_.beginScene(1);
        const engine::SProjectionParams projection = two_d_.getProjection();
        camera_.endScene(1);
        return projection;
    }

    // The eye-space point of a screen point at a depth, as the scene's projection takes it back.
    [[nodiscard]] static common::CVector3i eyePoint(const engine::SProjectionParams &projection,
                                                    int x, int y, int depth) {
        return {
            .x = static_cast<int>((std::int64_t{(x << 16) - projection.center_x_fixed} * depth) /
                                  projection.half_width_fixed),
            .y = static_cast<int>((std::int64_t{(y << 16) - projection.center_y_fixed} * depth) /
                                  projection.neg_half_height_fixed),
            .z = depth};
    }

    SCameraTables tables_;
    common::CWatcomRandom crt_;
    CDemonCamera camera_{{.tables = tables_,
                          .screen = screen_,
                          .special = special_,
                          .crt_random = crt_,
                          .renderer = demon_renderer_,
                          .dosio = dosio_,
                          .matrix = matrix_,
                          .two_d = two_d_}};
    std::array<std::uint32_t, 64> depth_row_{};
    std::array<std::uint32_t *, 48> depth_rows_{};
};

// 16.16 on screen, the depth 0x7fffffff over the stored word, or farthest where nothing was drawn.
TEST_F(CDemonCameraTransformTest, AScreenPointTakesItsDepthFromTheZBuffer) {
    depth_row_[5] = 0x100;
    common::CVector3i point;
    EXPECT_EQ(camera_.screenToWorldCoord(5, 3, &point), 0x7fffffff / 0x100);
    EXPECT_EQ(point, (common::CVector3i{.x = 5 << 16, .y = 3 << 16, .z = 0x7fffffff / 0x100}));
    EXPECT_EQ(camera_.screenToWorldCoord(6, 3, &point), 0x7fffffff);
    EXPECT_EQ(point.z, 0x7fffffff);
}

// The stored word divides as a signed one.
TEST_F(CDemonCameraTransformTest, AHighDepthWordDividesAsNegative) {
    depth_row_[1] = 0xfffffffe;
    common::CVector3i point;
    EXPECT_EQ(camera_.screenToWorldCoord(1, 0, &point), 0x7fffffff / -2);
}

// The point lands where the scene's own transform takes it back to the eye's, within the
// inverse's rounding, for a camera placed and turned or not.
TEST_F(CDemonCameraTransformTest, ThePointIsTheOneTheScenesTransformSeesThere) {
    for (const common::CVector3f &angles :
         {common::CVector3f{}, common::CVector3f{.x = 0.3F, .y = 1.1F, .z = -0.4F}}) {
        common::CMatrix3x3f turn;
        turn.buildRotationMatrix(angles);
        camera_.setRotationMatrix(turn);
        camera_.setPosition({.x = 1.0F, .y = 2.0F, .z = 3.0F});
        camera_.beginScene(1);
        const common::CMatrix3x3i transform = matrix_.getTransformMatrix();
        const common::CVector3i origin = matrix_.getCameraOrigin();
        const engine::SProjectionParams projection = two_d_.getProjection();
        camera_.endScene(1);
        ASSERT_NE(projection.half_width_fixed, 0);
        for (const auto &[x, y] : {std::array{32, 24}, std::array{0, 0}, std::array{63, 47}}) {
            common::CVector3i screen_point{.x = x << 16, .y = y << 16, .z = 0x20000};
            common::CVector3i world;
            EXPECT_EQ(camera_.screenToWorldTransform(&screen_point, &world), &world);
            const common::CVector3i eye = eyePoint(projection, x, y, 0x20000);
            const std::array<std::int64_t, 3> offset{world.x - origin.x, world.y - origin.y,
                                                     world.z - origin.z};
            const std::array<int, 3> expected{eye.x, eye.y, eye.z};
            for (std::size_t axis = 0; axis < 3; ++axis) {
                const auto column = [&](std::size_t row) {
                    const common::CVector3i &m = transform.m[row];
                    return std::int64_t{std::array{m.x, m.y, m.z}[axis]};
                };
                const std::int64_t back =
                    ((column(0) * offset[0]) + (column(1) * offset[1]) + (column(2) * offset[2])) >>
                    16;
                EXPECT_LE(std::llabs(back - expected[axis]), 8) << axis;
            }
        }
    }
}

// A point the scene shows lands back where it was on the screen, at its depth, within the
// inverse's rounding.
TEST_F(CDemonCameraTransformTest, AWorldPointOnTheScreenProjectsBackOntoIt) {
    common::CMatrix3x3f turn;
    turn.buildRotationMatrix({.x = 0.3F, .y = 1.1F, .z = -0.4F});
    camera_.setRotationMatrix(turn);
    camera_.setPosition({.x = 1.0F, .y = 2.0F, .z = 3.0F});
    static_cast<void>(openAndCloseScene());
    for (const auto &[x, y] : {std::array{32, 24}, std::array{5, 40}}) {
        common::CVector3i screen_point{.x = x << 16, .y = y << 16, .z = 0x20000};
        common::CVector3i world;
        camera_.screenToWorldTransform(&screen_point, &world);
        common::CVector3i projected;
        EXPECT_EQ(camera_.worldToScreenWithFrustumCull(&world, &projected), &projected);
        EXPECT_LE(std::abs(projected.x - (x << 16)), 0x100) << x;
        EXPECT_LE(std::abs(projected.y - (y << 16)), 0x100) << y;
        EXPECT_LE(std::abs(projected.z - 0x20000), 8);
    }
}

// Behind the camera, or past a side of its view, the point is all zeros.
TEST_F(CDemonCameraTransformTest, APointOffTheViewProjectsToZeros) {
    common::CMatrix3x3f turn;
    turn.buildRotationMatrix({.x = 0.3F, .y = 1.1F, .z = -0.4F});
    camera_.setRotationMatrix(turn);
    camera_.setPosition({.x = 1.0F, .y = 2.0F, .z = 3.0F});
    static_cast<void>(openAndCloseScene());
    const common::CVector3i origin = matrix_.getCameraOrigin();
    common::CVector3i ahead{.x = 32 << 16, .y = 24 << 16, .z = 0x20000};
    common::CVector3i world;
    camera_.screenToWorldTransform(&ahead, &world);
    common::CVector3i behind{.x = origin.x - (world.x - origin.x),
                             .y = origin.y - (world.y - origin.y),
                             .z = origin.z - (world.z - origin.z)};
    common::CVector3i projected{.x = 1, .y = 1, .z = 1};
    camera_.worldToScreenWithFrustumCull(&behind, &projected);
    EXPECT_EQ(projected, common::CVector3i{});
    for (const auto &[x, y] : {std::array{4000, 24}, std::array{-4000, 24}, std::array{32, 4000},
                               std::array{32, -4000}}) {
        common::CVector3i aside{.x = x << 16, .y = y << 16, .z = 0x20000};
        camera_.screenToWorldTransform(&aside, &world);
        projected = {.x = 1, .y = 1, .z = 1};
        camera_.worldToScreenWithFrustumCull(&world, &projected);
        EXPECT_EQ(projected, common::CVector3i{}) << x << "," << y;
    }
}

} // namespace
} // namespace nocturne::core
