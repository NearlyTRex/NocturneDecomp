#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/clipper/clipper.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/prim/prim.h"
#include "engine/screendevice.h"
#include "engine/screenprojection.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdlib>
#include <limits>
#include <numeric>
#include <span>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

TEST(EngineClipperFunctions, PublicInterface) {
    using Interpolator = void (*)(const SRenderVertex &, const SRenderVertex &, SRenderVertex &);
    static_assert(std::is_same_v<decltype(&interpolateVertexLeftClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexRightClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexBottomClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexTopClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexFarClip),
                                 void (*)(const SRenderVertex &, const SRenderVertex &, int,
                                          SRenderVertex &)>);
    static_assert(std::is_same_v<decltype(&interpolateVertexLeftClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexRightClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexBottomClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexTopClipAdvanced), Interpolator>);
    using PolygonClipper =
        void (*)(std::span<SRenderVertex>, std::span<const int>, const SPolygonState &, CPrim &,
                 CSpecial &, const C3d &, const SCurrentTexture &);
    static_assert(std::is_same_v<decltype(&clipAndRasterize), PolygonClipper>);
    static_assert(std::is_same_v<decltype(&clipPolygonToViewport), PolygonClipper>);
}

constexpr int kMark = 7;

SRenderVertex makeVertex(int x, int y, int z, int scale) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x, .transformed_y = y, .transformed_z = z};
    vertex.u = 100 * scale;
    vertex.v = 200 * scale;
    vertex.r = 300 * scale;
    vertex.g = 400 * scale;
    vertex.b = 500 * scale;
    vertex.a = 600 * scale;
    return vertex;
}

// A vertex holding a mark in every field, to show which ones a clip writes.
SRenderVertex marked() {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = kMark,
                               .transformed_y = kMark,
                               .transformed_z = kMark,
                               .inv_z = kMark,
                               .screen_x = kMark,
                               .screen_y = kMark};
    vertex.u = kMark;
    vertex.v = kMark;
    vertex.r = kMark;
    vertex.g = kMark;
    vertex.b = kMark;
    vertex.a = kMark;
    return vertex;
}

void expectPoint(const SRenderVertex &vertex, int x, int y, int z) {
    EXPECT_EQ(vertex.projected_vertex.transformed_x, x);
    EXPECT_EQ(vertex.projected_vertex.transformed_y, y);
    EXPECT_EQ(vertex.projected_vertex.transformed_z, z);
    EXPECT_EQ(vertex.projected_vertex.screen_x, -1);
    EXPECT_EQ(vertex.projected_vertex.inv_z, kMark);
    EXPECT_EQ(vertex.projected_vertex.screen_y, kMark);
}

// Halfway along an edge from a vertex at zero: the colour, alpha and texture coordinates halve.
void expectBasicCarry(const SRenderVertex &vertex) {
    EXPECT_EQ(vertex.u, 50);
    EXPECT_EQ(vertex.v, 100);
    EXPECT_EQ(vertex.r, 150);
    EXPECT_EQ(vertex.a, 300);
    EXPECT_EQ(vertex.g, kMark);
    EXPECT_EQ(vertex.b, kMark);
}

void expectAdvancedCarry(const SRenderVertex &vertex) {
    EXPECT_EQ(vertex.u, 50);
    EXPECT_EQ(vertex.v, 100);
    EXPECT_EQ(vertex.r, 150);
    EXPECT_EQ(vertex.g, 200);
    EXPECT_EQ(vertex.b, 250);
    EXPECT_EQ(vertex.a, 300);
}

TEST(EngineClipperFunctions, RightClipMeetsXEqualToTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexRightClip(makeVertex(0, 0, 10, 0), makeVertex(20, 8, 10, 1), output);
    expectPoint(output, 10, 4, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, LeftClipMeetsXEqualToMinusTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexLeftClip(makeVertex(0, 0, 10, 0), makeVertex(-20, 8, 10, 1), output);
    expectPoint(output, -10, 4, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, TopClipMeetsYEqualToTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexTopClip(makeVertex(0, 0, 10, 0), makeVertex(8, 20, 10, 1), output);
    expectPoint(output, 4, 10, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, BottomClipMeetsYEqualToMinusTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexBottomClip(makeVertex(0, 0, 10, 0), makeVertex(8, -20, 10, 1), output);
    expectPoint(output, 4, -10, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, FarClipMeetsTheGivenDepth) {
    SRenderVertex output = marked();
    interpolateVertexFarClip(makeVertex(0, 0, 2, 0), makeVertex(20, 40, 22, 1), 12, output);
    expectPoint(output, 10, 20, 12);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, TheAdvancedClipsCarryGreenAndBlueToo) {
    SRenderVertex output = marked();
    interpolateVertexRightClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(20, 8, 10, 1), output);
    expectPoint(output, 10, 4, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexLeftClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(-20, 8, 10, 1), output);
    expectPoint(output, -10, 4, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexTopClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(8, 20, 10, 1), output);
    expectPoint(output, 4, 10, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexBottomClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(8, -20, 10, 1), output);
    expectPoint(output, 4, -10, 10);
    expectAdvancedCarry(output);
}

// The outside vertex lying on the plane makes the fraction its largest, a step short of one.
TEST(EngineClipperFunctions, AnOutsideVertexOnThePlaneIsReachedJustShort) {
    SRenderVertex output = marked();
    interpolateVertexRightClip(makeVertex(0, 0, 10, 0), makeVertex(100, 100, 100, 1), output);
    expectPoint(output, 99, 99, 99);
}

constexpr int kFar = std::numeric_limits<int>::max();
// A 20-pixel view: x equal to the depth is pixel 20, y equal to it pixel 0.
constexpr SProjectionParams kProjection{.half_width_fixed = 10 << 16,
                                        .neg_half_height_fixed = -(10 << 16),
                                        .center_x_fixed = 10 << 16,
                                        .center_y_fixed = 10 << 16};

// An eye-space corner: projected when in view, else holding the sides it is past.
SRenderVertex eye(int x, int y, int z, int sides = 0) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x, .transformed_y = y, .transformed_z = z};
    if (sides == 0) {
        projectToScreen(vertex.projected_vertex, kProjection);
    } else {
        vertex.projected_vertex.screen_x = sides;
    }
    return vertex;
}

constexpr int kRight = platform::SProjectedVertex::kClipRight;
constexpr int kLeft = platform::SProjectedVertex::kClipLeft;
constexpr int kTop = platform::SProjectedVertex::kClipTop;

class CClipToViewTest : public C2dFixture {
protected:
    void SetUp() override {
        two_d_.setProjection(kProjection);
        state_.vertex_processing = true;
        state_.draw_scanline = [this](const SSoftwareEdge &, const SSoftwareEdge &, int y) {
            rows_.push_back(y);
            return false;
        };
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(screen_rows_)));
        ON_CALL(screen_, getColorTable16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(color_table16_)));
        ON_CALL(screen_, getColorChannels()).WillByDefault(ReturnRef(channels_));
        ON_CALL(renderer_, init(_)).WillByDefault(Return(1));
        ON_CALL(renderer_, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
        ON_CALL(renderer_, lockFrame()).WillByDefault(Return(1));
        ON_CALL(renderer_, unlockFrame()).WillByDefault(Return(1));
        ON_CALL(renderer_, drawPolygon(_, _, _))
            .WillByDefault([this](SRenderVertex *vertices, int count, int) {
                polygons_.emplace_back(vertices, vertices + count);
                return 1;
            });
        ON_CALL(renderer_, drawPolygon2(_, _, _))
            .WillByDefault([this](SRenderVertex **corners, int count, int) {
                corners_.emplace_back(corners, corners + count);
                return 1;
            });
    }

    void startRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(4, 1, 32), 1);
    }

    void clip(std::vector<SRenderVertex> &buffer) {
        const std::vector<int> indices = getIndices(buffer);
        clipAndRasterize(buffer, indices, state_, prim_, special_, three_d_, texture_);
    }

    void clipToViewport(std::vector<SRenderVertex> &buffer) {
        const std::vector<int> indices = getIndices(buffer);
        clipPolygonToViewport(buffer, indices, state_, prim_, special_, three_d_, texture_);
    }

    static std::vector<int> getIndices(const std::vector<SRenderVertex> &buffer) {
        std::vector<int> indices(buffer.size());
        std::ranges::iota(indices, 0);
        return indices;
    }

    // Pixels (10, 10), (10, 15) and (15, 15): facing away under culling mode 1.
    static std::vector<SRenderVertex> getTriangleInView() {
        return {eye(0, 0, 10), eye(0, -5, 10), eye(5, -5, 10)};
    }

    std::vector<int> rows_;
    std::vector<std::vector<SRenderVertex>> polygons_;
    std::vector<std::vector<SRenderVertex *>> corners_;
    SPolygonState state_;
    std::array<std::uint32_t, 4> screen_row_{};
    std::array<void *, 1> screen_rows_{screen_row_.data()};
    std::array<std::uint16_t, 256> color_table16_{};
    SColorChannels channels_;
    NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, texture_};
    CPrim prim_{special_, two_d_, three_d_, texture_};
};

// Every corner says it is past the right side, which would drop the polygon if it were clipped.
TEST_F(CClipToViewTest, WithoutVertexProcessingThePolygonIsDrawnAsIndexed) {
    startRenderer();
    state_.vertex_processing = false;
    std::vector<SRenderVertex> buffer{eye(20, 0, 10, kRight), eye(20, 5, 10, kRight),
                                      eye(25, 5, 10, kRight)};
    clip(buffer);
    clipToViewport(buffer);
    ASSERT_EQ(corners_.size(), 2U);
    EXPECT_EQ(corners_[0][0], buffer.data());
}

TEST_F(CClipToViewTest, APolygonWhollyPastOneSideIsDropped) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(20, 0, 10, kRight), eye(20, 5, 10, kRight),
                                      eye(25, 5, 10, kRight)};
    clip(buffer);
    clipToViewport(buffer);
    EXPECT_TRUE(polygons_.empty());
    EXPECT_TRUE(corners_.empty());
}

// Every corner is outside, but past different sides, so the polygon is clipped onto the view.
TEST_F(CClipToViewTest, CornersPastDifferentSidesAreClipped) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(-30, 0, 10, kLeft), eye(30, 0, 10, kRight),
                                      eye(0, 30, 10, kTop)};
    clip(buffer);
    ASSERT_EQ(polygons_.size(), 1U);
    for (const SRenderVertex &vertex : polygons_[0]) {
        EXPECT_LE(std::abs(vertex.projected_vertex.transformed_x), 10);
        EXPECT_LE(std::abs(vertex.projected_vertex.transformed_y), 10);
    }
}

// Every corner is past the right side by the planes though not by its sides.
TEST_F(CClipToViewTest, APolygonClippedToFewerThanThreeCornersIsDropped) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(20, 0, 10, kRight), eye(20, 5, 10, kTop),
                                      eye(25, 5, 10, kLeft)};
    clip(buffer);
    clipToViewport(buffer);
    EXPECT_TRUE(polygons_.empty());
}

TEST_F(CClipToViewTest, APolygonInViewIsRasterisedWhole) {
    std::vector<SRenderVertex> buffer = getTriangleInView();
    clip(buffer);
    EXPECT_EQ(rows_, (std::vector<int>{10, 11, 12, 13, 14}));
    rows_.clear();
    clipToViewport(buffer);
    EXPECT_EQ(rows_, (std::vector<int>{10, 11, 12, 13, 14}));
}

TEST_F(CClipToViewTest, TwoCornersInViewDrawNothing) {
    std::vector<SRenderVertex> buffer{eye(0, 0, 10), eye(5, -5, 10)};
    clip(buffer);
    clipToViewport(buffer);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CClipToViewTest, APolygonInViewGoesToTheHardwareRenderer) {
    startRenderer();
    std::vector<SRenderVertex> buffer = getTriangleInView();
    state_.mode.render_flags = common::kRenderTextured;
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, common::kRenderTextured)).Times(2);
    clip(buffer);
    clipToViewport(buffer);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CClipToViewTest, APolygonInViewFacingAwayIsCulledBeforeTheHardwareRenderer) {
    startRenderer();
    three_d_.setCullingMode(1);
    std::vector<SRenderVertex> buffer = getTriangleInView();
    clip(buffer);
    EXPECT_TRUE(corners_.empty());
    std::swap(buffer[1], buffer[2]);
    clip(buffer);
    EXPECT_EQ(corners_.size(), 1U);
}

TEST_F(CClipToViewTest, TwoCornersInViewReachTheHardwareRendererOnlyWithoutCulling) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(0, 0, 10), eye(5, -5, 10)};
    three_d_.setCullingMode(1);
    clip(buffer);
    EXPECT_TRUE(corners_.empty());
    three_d_.setCullingMode(0);
    clip(buffer);
    EXPECT_EQ(corners_.size(), 1U);
}

TEST_F(CClipToViewTest, WithTexturesOffOnlyTheViewportClipUsesTheHardwareRenderer) {
    startRenderer();
    texture_.textures_disabled = true;
    std::vector<SRenderVertex> buffer = getTriangleInView();
    clip(buffer);
    EXPECT_TRUE(corners_.empty());
    EXPECT_FALSE(rows_.empty());
    clipToViewport(buffer);
    EXPECT_EQ(corners_.size(), 1U);
}

// From (0, 0) to (30, 0) the edge meets the right side at 10; the third corner is in view.
TEST_F(CClipToViewTest, AnEdgeAcrossASideIsCutWhereItMeetsIt) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(0, 0, 10), eye(30, 0, 10, kRight), eye(0, -5, 10)};
    clip(buffer);
    ASSERT_EQ(polygons_.size(), 1U);
    ASSERT_EQ(polygons_[0].size(), 4U);
    const auto cut = std::ranges::find_if(polygons_[0], [](const SRenderVertex &vertex) {
        return vertex.projected_vertex.transformed_y == 0 &&
               vertex.projected_vertex.transformed_x == 10;
    });
    EXPECT_NE(cut, polygons_[0].end());
}

// The frustum clip starts each side's pass from the polygon's last corner and the viewport clip
// from its first, which puts the corner in view second for the one and first for the other.
TEST_F(CClipToViewTest, TheClipsStartTheirPassesFromDifferentCorners) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(0, 0, 10), eye(30, 0, 10, kRight),
                                      eye(30, 8, 10, kRight)};
    clip(buffer);
    clipToViewport(buffer);
    ASSERT_EQ(polygons_.size(), 2U);
    ASSERT_EQ(polygons_[0].size(), 3U);
    EXPECT_EQ(polygons_[0][1].projected_vertex.transformed_x, 0);
    EXPECT_EQ(polygons_[1][0].projected_vertex.transformed_x, 0);
}

// Only the frustum clip has a far plane; nothing sets it from the deepest depth there is.
TEST_F(CClipToViewTest, TheFrustumClipCutsAwayACornerAtTheFarPlane) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(0, 0, 10), eye(30, 0, 10, kRight), eye(0, 0, kFar)};
    const auto at_far = [](const SRenderVertex &vertex) {
        return vertex.projected_vertex.transformed_z == kFar;
    };
    clip(buffer);
    clipToViewport(buffer);
    ASSERT_EQ(polygons_.size(), 2U);
    EXPECT_TRUE(std::ranges::none_of(polygons_[0], at_far));
    EXPECT_TRUE(std::ranges::any_of(polygons_[1], at_far));
}

TEST_F(CClipToViewTest, APolygonWhollyAtTheFarPlaneLeavesNothing) {
    startRenderer();
    std::vector<SRenderVertex> buffer{eye(0, 0, kFar), eye(kFar, 0, kFar, kRight), eye(0, 5, kFar)};
    clip(buffer);
    EXPECT_TRUE(polygons_.empty());
}

} // namespace
} // namespace nocturne::engine
