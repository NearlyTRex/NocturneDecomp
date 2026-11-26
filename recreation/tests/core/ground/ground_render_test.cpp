#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/ground/ground.h"
#include "core/terrain/terrain.h"
#include "core/texlist/texturelist.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Contains;
using ::testing::Return;
using ::testing::ReturnRef;

constexpr int kOne = 0x10000;
constexpr int kCell = 8 * 256;

// A 4 by 4 ground, its height 256 a row and 128 a column, so a plane, painted with one texture,
// under a camera turned nowhere, its view 64 pixels square.
class CGroundRenderTest : public engine::CDemonRendererFixture {
protected:
    CGroundRenderTest() {
        std::string heights;
        for (int row = 0; row < 4; ++row) {
            for (int column = 0; column < 4; ++column) {
                heights += static_cast<char>((2 * row) + column);
            }
        }
        givenFile("data\\junk.raw", heights);
        givenFile("data\\junk.clr", std::string(32, '\0'));
        givenFile("data\\junk.tex", "1\nsand.raw\n");
        givenFile("art\\SAND.RAW", std::string(std::size_t{32} * 32, '\x01'));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(ReturnRef(masks_));
        for (std::size_t row = 0; row < kSize; ++row) {
            pixel_rows_.at(row) = pixels_.data() + (row * kSize);
            depth_rows_.at(row) = depths_.data() + (row * kSize);
        }
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(pixel_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        ground_.init();
        ground_.load("junk.jnk");
        two_d_.setupViewportAndClipping(0, 0, 63, 63);
        common::CMatrix3x3i unturned;
        unturned.m = {{{.x = kOne}, {.y = kOne}, {.z = kOne}}};
        matrix_.setTransformMatrix(unturned);
        matrix_.invertTransformMatrix();
    }

    // The camera's place, in 24.8, and the ground drawn under it.
    void drawFrom(const common::CVector3i &origin) {
        demon_renderer_.setCameraOrigin(origin);
        ground_.render({.renderer = demon_renderer_, .special = special_, .matrix = matrix_});
    }

    // The renderer vertex the grid point the given cells from the camera's draws with.
    [[nodiscard]] platform::SRenderVertex &vertexAt(int across, int ahead) {
        return vertex_buffer_[CGround::getVertexIndex(ahead + CGround::kGridReach,
                                                      across + CGround::kGridReach)];
    }

    static constexpr std::size_t kSize = 64;
    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint16_t, 256> palette16_{};
    engine::SColorMasks masks_;
    std::vector<std::uint32_t> pixels_ = std::vector<std::uint32_t>(kSize * kSize);
    std::vector<std::uint32_t> depths_ = std::vector<std::uint32_t>(kSize * kSize);
    std::array<void *, kSize> pixel_rows_{};
    std::array<std::uint32_t *, kSize> depth_rows_{};
    CGround ground_{dosio_, 4, 4};
};

TEST_F(CGroundRenderTest, EachGridPointTakesAVertexOfItsOwn) {
    EXPECT_EQ(CGround::getVertexIndex(0, 0), 32U);
    EXPECT_EQ(CGround::getVertexIndex(0, 5), 37U);
    EXPECT_EQ(CGround::getVertexIndex(1, 0), 94U);
}

// A point's height is the plane's wherever it is in its cell, whichever way the cell is split
// and whichever triangle the point is in: a quarter or three quarters across a row, half across
// a column.
TEST_F(CGroundRenderTest, APointTakesThePlaneOfItsCellsTriangle) {
    const auto height = [](int row, int column, int x, int z) {
        return (256 * row) + ((256 * x) / kCell) + (128 * column) + ((128 * z) / kCell);
    };
    for (const auto &[row, column] : {std::pair{0, 1}, std::pair{1, 1}}) {
        for (const int x : {kCell / 4, (3 * kCell) / 4}) {
            EXPECT_EQ(
                ground_.getHeightAtPosition((row * kCell) + x, (column * kCell) + (kCell / 2)),
                height(row, column, x, kCell / 2))
                << row << "," << column << " at " << x;
        }
    }
}

// Ten units up, a point five cells ahead lies five cells out and ten down, grey, faded by its
// distance over the grid's; one behind is not faded at all.
TEST_F(CGroundRenderTest, TheGridPointsAreStoredGreyAndFadedByDistance) {
    drawFrom({.x = 0, .y = 10 * 256, .z = 0});
    const platform::SRenderVertex &ahead = vertexAt(0, 5);
    EXPECT_EQ(ahead.projected_vertex.transformed_z, 5 * kCell);
    EXPECT_EQ(ahead.projected_vertex.transformed_y, (256 * 1) - (10 * 256));
    EXPECT_EQ(ahead.r, 0x3fff);
    EXPECT_EQ(ahead.b, 0x3fff);
    EXPECT_EQ(ahead.a, ((5 * kCell) << 8) / (30 * 8));
    EXPECT_EQ(vertexAt(0, -2).a, 0);
    EXPECT_EQ(vertexAt(0, 30).projected_vertex.transformed_z, 30 * kCell);
}

// The camera's cell rounds toward zero and then one down when below zero, so three cells left
// or behind is taken as four.
TEST_F(CGroundRenderTest, ACameraLeftOfOrBehindTheOriginIsACellFurther) {
    drawFrom({.x = -3 * kCell, .y = 10 * 256, .z = -3 * kCell});
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_x, -kCell);
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_z, 4 * kCell);
}

// A quad ahead is textured, its corners inset from the texture's edges; one behind, wholly past
// the near plane, is left as it was.
TEST_F(CGroundRenderTest, EachQuadInViewIsTexturedAndOnesBehindAreNot) {
    vertexAt(0, -2).u = 7;
    drawFrom({.x = 0, .y = 10 * 256, .z = 0});
    EXPECT_EQ(texture_.dimension, 32);
    EXPECT_THAT((std::vector<int>{0x8 << 16, 0xf8 << 16}), Contains(vertexAt(0, 5).u));
    EXPECT_EQ(vertexAt(0, -2).u, 7);
}

// Each quad is two triangles, split along the diagonal its cell's checkerboard square picks.
TEST_F(CGroundRenderTest, EachQuadIsSplitAlongItsSquaresDiagonal) {
    startRenderer();
    demon_renderer_.enableFaceCapture(false);
    std::vector<std::vector<std::size_t>> triangles;
    ON_CALL(renderer_, drawPolygon2(_, _, _))
        .WillByDefault([this, &triangles](platform::SRenderVertex **corners, int count, int) {
            std::vector<std::size_t> indices;
            indices.reserve(static_cast<std::size_t>(count));
            for (int corner = 0; corner < count; ++corner) {
                indices.push_back(
                    static_cast<std::size_t>(corners[corner] - vertex_buffer_.data()));
            }
            triangles.push_back(indices);
            return 1;
        });
    drawFrom({.x = 0, .y = 10 * 256, .z = 0});
    const auto at = [](int across, int ahead) {
        return CGround::getVertexIndex(ahead + CGround::kGridReach, across + CGround::kGridReach);
    };
    // Row 5 of the grid is its row 1, odd: column 0 splits the other way from column 1.
    EXPECT_THAT(triangles, Contains(std::vector{at(0, 6), at(1, 5), at(0, 5)}));
    EXPECT_THAT(triangles, Contains(std::vector{at(0, 6), at(1, 6), at(1, 5)}));
    EXPECT_THAT(triangles, Contains(std::vector{at(2, 6), at(2, 5), at(1, 5)}));
    EXPECT_THAT(triangles, Contains(std::vector{at(1, 6), at(2, 6), at(1, 5)}));
}

// A colour picks its texture by its low 12 bits; one past the list picks none.
TEST_F(CGroundRenderTest, AColourPicksItsTextureByItsLowBits) {
    CTextureList list{dosio_};
    list.load("junk.jnk");
    list.captureTexture(demon_renderer_, 1);
    EXPECT_EQ(texture_.dimension, 0);
    list.captureTexture(demon_renderer_, 0x1000);
    EXPECT_EQ(texture_.dimension, 32);
}

// A terrain over the same 4 by 4 ground.
class CTerrainRenderTest : public CGroundRenderTest {
protected:
    void drawTerrainFrom(const common::CVector3f &camera) {
        demon_renderer_.setCameraOriginFromScaledPoint(camera);
        terrain_.render(0, {.renderer = demon_renderer_, .special = special_, .matrix = matrix_});
    }

    // The defaults at the test ground's size, and with the speed given.
    [[nodiscard]] static STerrainSettings
    small(int scroll_per_second = STerrainSettings::kDefaultScrollPerSecond) {
        return {.scroll_per_second = scroll_per_second, .width = 4, .height = 4};
    }

    CTerrain terrain_{ground_};
};

// The camera is taken over the ground's point (1032, 0), at the ground's height there, 128;
// a point five cells ahead, 384 high, lies 2304 below it. The camera is back after.
TEST_F(CTerrainRenderTest, TheGroundIsDrawnAsIfTheCameraWereOverItsOrigin) {
    terrain_.init(small());
    EXPECT_TRUE(terrain_.isInitialized());
    drawTerrainFrom({.x = 0.0F, .y = 10.0F, .z = 0.0F});
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_x, 0);
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_y, 384 - ((10 * 256) + 128));
    EXPECT_EQ(matrix_.getCameraOrigin(), (common::CVector3i{.x = 0, .y = 10 * 256, .z = 0}));
}

// A second's frame time scrolls the ground 0x6270 in 24.8 along z, which the draw takes the
// camera back by: its cell, -12 and a bit, is taken as -13, so the point five cells ahead of
// that is 8816 ahead of the camera. Past 0x8000000 the scroll wraps, and init starts it over.
TEST_F(CTerrainRenderTest, TheGroundScrollsWithTheFrameTimeAndWraps) {
    terrain_.init(small());
    terrain_.process(0x10000);
    EXPECT_EQ(terrain_.getScroll(), 0x6270);
    drawTerrainFrom({.x = 0.0F, .y = 10.0F, .z = 0.0F});
    EXPECT_EQ(matrix_.getCameraOrigin().z, 0);
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_z, ((-13 + 5) * kCell) + 0x6270);
    // 0x14d0 seconds is 0x8000000 less 0x6270 plus a little past it.
    terrain_.process(0x14d0 * 0x10000);
    EXPECT_EQ(terrain_.getScroll(), (0x6270 * 0x14d1) - 0x8000000);
    terrain_.init(small());
    EXPECT_EQ(terrain_.getScroll(), 0);
}

// Over a point of its own the camera is taken there instead: over (0, 1) the ground is an eighth
// of a row up its slope of 256 a row, 32 high, and the point five cells ahead, 256 high, lies a
// unit back along z.
TEST_F(CTerrainRenderTest, TheGroundIsDrawnOverThePointItIsGiven) {
    STerrainSettings settings = small();
    settings.origin_x = 0;
    settings.origin_z = 256;
    terrain_.init(settings);
    EXPECT_EQ(terrain_.getSettings(), settings);
    drawTerrainFrom({.x = 0.0F, .y = 10.0F, .z = 0.0F});
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_y, 256 - ((10 * 256) + 32));
    EXPECT_EQ(vertexAt(0, 5).projected_vertex.transformed_z, (5 * kCell) - 256);
}

// A set's own speed scrolls the ground backward as well, which wraps the other way.
TEST_F(CTerrainRenderTest, AGroundScrollingBackwardWrapsTheOtherWay) {
    terrain_.init(small(-0x6270));
    terrain_.process(0x10000);
    EXPECT_EQ(terrain_.getScroll(), -0x6270);
    terrain_.process(0x14d0 * 0x10000);
    EXPECT_EQ(terrain_.getScroll(), 0x8000000 - (0x6270 * 0x14d1));
}

TEST_F(CTerrainRenderTest, WithoutTheGroundNothingIsDrawn) {
    vertexAt(0, 5).r = 7;
    drawTerrainFrom({.x = 0.0F, .y = 10.0F, .z = 0.0F});
    terrain_.init(small());
    terrain_.free();
    EXPECT_FALSE(terrain_.isInitialized());
    drawTerrainFrom({.x = 0.0F, .y = 10.0F, .z = 0.0F});
    EXPECT_EQ(vertexAt(0, 5).r, 7);
}

} // namespace
} // namespace nocturne::core
