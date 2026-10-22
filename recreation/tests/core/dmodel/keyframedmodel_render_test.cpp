#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/set/demonset.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/setparts.h"
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

using common::CVector3i;
using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;
using ::testing::Return;

constexpr int kOne = 0x10000;

// A square two thousand units ahead, in view, as corners 0 to 3.
constexpr const char *kSquareCorners = "0,0,2048\n512,0,2048\n512,512,2048\n0,512,2048\n";

// Version 5 text: the counts, then the corners for each frame, the polygons as texture and
// corners, the texture names and the parts.
std::string model(const std::string &counts, const std::string &vertices,
                  const std::string &polygons, const std::string &textures,
                  const std::string &parts) {
    return "/\n5\n;\n" + counts + "\n;\n0\n;\n" + vertices + ";\n" + polygons + ";\n" + textures +
           ";\n" + parts;
}

class CKeyFramedModelRenderTest : public engine::CDemonRendererFixture {
protected:
    CKeyFramedModelRenderTest() {
        two_d_.setupViewportAndClipping(0, 0, 639, 479);
        matrix_.setTransformMatrix(
            {.m = {CVector3i{.x = kOne}, CVector3i{.y = kOne}, CVector3i{.z = kOne}}});
        ON_CALL(screen_, getBitsPerPixel()).WillByDefault(Return(32));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        // a.raw is 32 texels across and b.raw 64.
        givenFile("art\\a.raw", std::string(std::size_t{32} * 32, '\x01'));
        givenFile("art\\b.raw", std::string(std::size_t{64} * 64, '\x02'));
        ON_CALL(renderer_, drawPolyList(_, _, _, _))
            .WillByDefault(
                [this](SRenderVertex *, const SMRGLPrimitiveQuad *const *, int count, int) {
                    lists_.push_back({count, texture_.dimension});
                    return 1;
                });
        ON_CALL(renderer_, drawPolygon2(_, _, _)).WillByDefault([this](SRenderVertex **, int, int) {
            ++single_polygons_;
            return 1;
        });
    }

    void draw(const std::string &contents) {
        givenFile("models\\test.kfm", contents);
        model_.load("test.kfm");
        startRenderer();
        model_.prepareForRender(0, -1, demon_renderer_, set_);
    }

    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint16_t, 256> palette16_{};
    // Each list drawn: its polygons, and the texture current for it by width.
    std::vector<std::array<int, 2>> lists_;
    int single_polygons_ = 0;
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    CKeyFramedModel model_{dosio_};
};

TEST_F(CKeyFramedModelRenderTest, AModelWithoutPolygonsDrawsNothing) {
    startRenderer();
    vertex_buffer_[0].r = 9;
    model_.prepareForRender(0, -1, demon_renderer_, set_);
    EXPECT_TRUE(lists_.empty());
    EXPECT_EQ(single_polygons_, 0);
    EXPECT_EQ(vertex_buffer_[0].r, 9);
}

TEST_F(CKeyFramedModelRenderTest, TheFramesVerticesArePutOnTheScreenAndLit) {
    draw(model("4,1,1,1,1", kSquareCorners, "0,3, 0,0,0, 2,0,0, 1,0,0\n", "a.raw\n", "4,1\n"));
    EXPECT_EQ(vertex_buffer_[2].projected_vertex.transformed_z, 2048);
    EXPECT_GE(vertex_buffer_[2].projected_vertex.screen_x, 0);
    EXPECT_GE(vertex_buffer_[2].r, 0x280);
}

// The polygons are wound to face the camera, so each reaches its list.
TEST_F(CKeyFramedModelRenderTest, EachRunOfOneTextureIsDrawnWithIt) {
    draw(model("4,3,2,1,1", kSquareCorners,
               "1,3, 0,0,0, 2,0,0, 1,0,0\n1,3, 0,0,0, 3,0,0, 2,0,0\n0,3, 0,0,0, 3,0,0, 1,0,0\n",
               "a.raw\nb.raw\n", "4,3\n"));
    EXPECT_EQ(lists_, (std::vector<std::array<int, 2>>{{2, 64}, {1, 32}}));
}

// The second part starts on the texture the first ended on, which stays current.
TEST_F(CKeyFramedModelRenderTest, TheCurrentTextureCarriesIntoTheNextPart) {
    draw(model("4,3,2,2,1", kSquareCorners,
               "1,3, 0,0,0, 2,0,0, 1,0,0\n1,3, 0,0,0, 3,0,0, 2,0,0\n0,3, 0,0,0, 3,0,0, 1,0,0\n",
               "a.raw\nb.raw\n", "4,1\n0,2\n"));
    EXPECT_EQ(lists_, (std::vector<std::array<int, 2>>{{1, 64}, {1, 64}, {1, 32}}));
}

TEST_F(CKeyFramedModelRenderTest, AModelOfOneTextureDrawsEachPartWhole) {
    draw(model("4,3,1,2,1", kSquareCorners,
               "0,3, 0,0,0, 2,0,0, 1,0,0\n0,3, 0,0,0, 3,0,0, 2,0,0\n0,3, 0,0,0, 3,0,0, 1,0,0\n",
               "b.raw\n", "4,2\n0,1\n"));
    EXPECT_EQ(lists_, (std::vector<std::array<int, 2>>{{2, 64}, {1, 64}}));
}

TEST_F(CKeyFramedModelRenderTest, AModelWithoutTexturesStillDraws) {
    draw(model("4,1,0,1,1", kSquareCorners, "0,3, 0,0,0, 2,0,0, 1,0,0\n", "", "4,1\n"));
    EXPECT_EQ(lists_, (std::vector<std::array<int, 2>>{{1, 0}}));
}

// Without frames and with an empty box, nothing turns winding culling on, so each polygon is
// drawn alone.
TEST_F(CKeyFramedModelRenderTest, AModelWithoutFramesIsDrawnPolygonByPolygon) {
    draw(model("4,2,1,1,0", "", "0,3, 0,0,0, 2,0,0, 1,0,0\n0,3, 0,0,0, 3,0,0, 2,0,0\n", "a.raw\n",
               "4,2\n"));
    EXPECT_TRUE(lists_.empty());
    EXPECT_EQ(single_polygons_, 2);
}

// Loading keeps the box of the model before, here 70000 / 256 world units across.
TEST_F(CKeyFramedModelRenderTest, AModelWithoutFramesCullsWhenTheBoxLeftBehindIsLarge) {
    givenFile("models\\big.kfm", model("2,1,1,1,1", "0,0,0\n70000,0,0\n",
                                       "0,3, 0,0,0, 1,0,0, 1,0,0\n", "a.raw\n", "2,1\n"));
    model_.load("big.kfm");
    draw(model("4,2,1,1,0", "", "0,3, 0,0,0, 2,0,0, 1,0,0\n0,3, 0,0,0, 3,0,0, 2,0,0\n", "a.raw\n",
               "4,2\n"));
    EXPECT_EQ(single_polygons_, 0);
}

// Version 8 carries the flag that turns culling off.
TEST_F(CKeyFramedModelRenderTest, AModelAskingForNoCullingIsDrawnPolygonByPolygon) {
    draw(std::string("/\n8\n;\n4,2,1,1,1\n;\n0\n;\n0\n;\n1\n;\n0\n;\n") + kSquareCorners +
         ";\n0,3, 0,0,0, 2,0,0, 1,0,0\n0,3, 0,0,0, 1,0,0, 2,0,0\n;\na.raw\n;\n4,2\n");
    EXPECT_TRUE(lists_.empty());
    EXPECT_EQ(single_polygons_, 2);
}

// An untextured polygon goes to the geometry clip only with face capture on.
TEST_F(CKeyFramedModelRenderTest, AfterwardsCullingIsOffAndFaceCaptureOn) {
    draw(model("4,1,1,1,1", kSquareCorners, "0,3, 0,0,0, 2,0,0, 1,0,0\n", "a.raw\n", "4,1\n"));
    EXPECT_EQ(three_d_.getCullingMode(), 0);
    demon_renderer_.renderTexturedPoly(
        SMRGLPrimitiveQuad{
            .surface_normal = {},
            .vertices = {{.vertex_index = 0}, {.vertex_index = 1}, {.vertex_index = 2}}},
        0);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

} // namespace
} // namespace nocturne::core
