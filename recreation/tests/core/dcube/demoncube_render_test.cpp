#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/serial/binaryreader.h"
#include "common/serial/binarywriter.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dcube/demoncube.h"
#include "core/set/demonset.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A cube's triangles drawn through a set over the renderer fixture, to its hardware renderer or,
// when clipped, its geometry clip, which records what reaches it, before a camera at the origin
// looking along z on a 64 by 48 screen.
class CDemonCubeRenderTest : public engine::CDemonRendererFixture {
protected:
    CDemonCubeRenderTest() {
        startRenderer();
        two_d_.setupViewportAndClipping(0, 0, 63, 47);
        demon_renderer_.setProjectionScale(90.0F);
        demon_renderer_.setupSceneRendering({});
    }

    // Two triangles over four vertices, each with its own normal, wound to face the camera.
    void givenCube(std::vector<common::CVector3f> vertices) {
        SGeoCube geo;
        geo.vertex_count = static_cast<std::int32_t>(vertices.size());
        geo.vertices = std::move(vertices);
        geo.triangle_count = 2;
        geo.triangles = {{.indices = {0, 2, 1}, .normal = {.x = 1.0F}},
                         {.indices = {0, 3, 2}, .normal = {.x = 0.5F, .y = -0.25F, .z = 1.0F}}};
        common::CBinaryWriter writer;
        writeGeoCube(writer, geo);
        common::CBinaryReader reader(writer.getData());
        cube_.load(reader);
    }

    void draw() {
        cube_.rotateVertices(
            {.renderer = demon_renderer_, .special = special_, .matrix = matrix_, .set = set_});
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    CDemonCube cube_;
};

// Corners well ahead of the camera.
std::vector<common::CVector3f> inView() {
    return {{.x = -1.0F, .y = -1.0F, .z = 40.0F},
            {.x = 1.0F, .y = -1.0F, .z = 40.0F},
            {.x = 1.0F, .y = 1.0F, .z = 40.0F},
            {.x = -1.0F, .y = 1.0F, .z = 40.0F}};
}

// Each corner in 24.8, to nearest with ties to even, projected into the renderer's buffer in
// the cube's order.
TEST_F(CDemonCubeRenderTest, TheCornersAreProjectedIntoTheBufferInOrder) {
    std::vector<common::CVector3f> corners = inView();
    corners[0].x = 1.5F / 256.0F;
    corners[1].x = 2.5F / 256.0F;
    givenCube(corners);
    draw();
    for (const auto &[index, fixed] :
         {std::pair{std::size_t{0}, common::CVector3i{.x = 2, .y = -256, .z = 10240}},
          std::pair{std::size_t{1}, common::CVector3i{.x = 2, .y = -256, .z = 10240}},
          std::pair{std::size_t{2}, common::CVector3i{.x = 256, .y = 256, .z = 10240}}}) {
        platform::SProjectedVertex expected;
        special_.transformAndProjectPoint(expected, fixed);
        EXPECT_EQ(vertex_buffer_[index].projected_vertex.screen_x, expected.screen_x);
        EXPECT_EQ(vertex_buffer_[index].projected_vertex.screen_y, expected.screen_y);
    }
}

// Each a normal's components times 127, to nearest with ties to even, wrapped to a byte: the
// second's 63.5, -31.75 and 127 give 64, 224 and 127, here 8-8-8.
TEST_F(CDemonCubeRenderTest, EachTriangleIsDrawnInItsNormalsColourWithoutClippingWhenAllIsInView) {
    givenCube(inView());
    std::vector<int> colours;
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, _)).Times(2).WillRepeatedly([&] {
        colours.push_back(two_d_.getActiveRenderColor());
        return 1;
    });
    draw();
    EXPECT_THAT(colours, ElementsAre(0x7f0000, 0x40e07f));
    EXPECT_TRUE(geometry_clips_.empty());
    EXPECT_EQ(three_d_.getCullingMode(), 0);
}

TEST_F(CDemonCubeRenderTest, WithACornerOutOfViewEachTriangleIsClipped) {
    std::vector<common::CVector3f> corners = inView();
    corners[3].z = -10.0F;
    givenCube(corners);
    draw();
    EXPECT_THAT(geometry_clips_, ElementsAre(std::vector{0, 2, 1}, std::vector{0, 3, 2}));
}

TEST_F(CDemonCubeRenderTest, MoreVerticesThanTheBufferHoldsIsFatal) {
    const std::size_t held = vertex_buffer_.size();
    givenCube(std::vector<common::CVector3f>(held + 1));
    EXPECT_THAT([this] { draw(); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    std::format("CDemonCube::rotateVerticies - tried to rotate {} vertices, but "
                                "GLOBAL_VERTEX_COUNT = {}",
                                held + 1, held))));
}

} // namespace
} // namespace nocturne::core
