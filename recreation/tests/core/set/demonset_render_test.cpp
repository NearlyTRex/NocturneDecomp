#include "common/error/fatalerror.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/actor/actorrenderowners.h"
#include "core/actor/demonactor.h"
#include "core/color3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dskybox/dskybox.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/rect.h"
#include "core/set/demonset.h"
#include "core/water/water.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;
using ::testing::Each;
using ::testing::ElementsAre;
using ::testing::Return;

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    return vertex;
}

class CDemonSetRenderTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
};

// Each polygon reaches the hardware renderer through the quad batch, -1 taking its default.
TEST_F(CDemonSetRenderTest, APrimitiveBatchIsDrawnAsTheRenderersQuadBatch) {
    startRenderer();
    vertex_buffer_[1] = at(10, 2);
    vertex_buffer_[2] = at(14, 6);
    vertex_buffer_[3] = at(10, 6);
    std::vector<SMRGLPrimitiveQuad> polys(
        2, SMRGLPrimitiveQuad{.surface_normal = {},
                              .vertices = {{.vertex_index = 1, .texture_u = 9},
                                           {.vertex_index = 2},
                                           {.vertex_index = 3}}});
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, engine::CDemonRenderer::kDefaultTexturedFlags))
        .Times(2);
    set_.renderPrimitiveBatch(polys, -1);
    EXPECT_EQ(vertex_buffer_[1].u, 9);
}

// Through the renderer's depth test: a corner's reciprocal depth is its depth, and a nearer depth
// in the buffer hides it.
TEST_F(CDemonSetRenderTest, ASinglePrimitiveShowsWhetherAnyOfItPassesTheDepths) {
    constexpr int kPixels = 8;
    constexpr auto kSize = static_cast<std::size_t>(kPixels);
    std::array<std::uint32_t, kSize * kSize> depths{};
    std::array<std::uint32_t *, kSize> depth_rows{};
    for (std::size_t row = 0; row < kSize; ++row) {
        depth_rows.at(row) = depths.data() + (row * kSize);
    }
    ON_CALL(screen_, getZBufferRows())
        .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows)));
    two_d_.setupViewportAndClipping(0, 0, kPixels - 1, kPixels - 1);
    demon_renderer_.enableFaceCapture(false);
    const auto corner = [](int x, int y) {
        SRenderVertex vertex = at(x, y);
        vertex.projected_vertex.transformed_z = 0x1000;
        vertex.projected_vertex.inv_z = 0x1200;
        return vertex;
    };
    vertex_buffer_[1] = corner(0, 0);
    vertex_buffer_[2] = corner(kPixels, 0);
    vertex_buffer_[3] = corner(0, kPixels);
    const platform::SMRGLHeaderPrimitive prim{.surface_normal = {}, .vertex_indices = {1, 2, 3}};
    depths.fill(0x1200);
    EXPECT_TRUE(set_.renderSinglePrimitive(prim));
    depths.fill(0x1201);
    EXPECT_FALSE(set_.renderSinglePrimitive(prim));
}

// With face capture on, each reaches the geometry clip in turn.
TEST_F(CDemonSetRenderTest, EachPrimitiveOfAListIsFilledIntoTheDepth) {
    const std::array<platform::SMRGLHeaderPrimitive, 2> primitives{{
        {.surface_normal = {}, .vertex_indices = {1, 2, 3}},
        {.surface_normal = {}, .vertex_indices = {4, 5, 6}},
    }};
    set_.renderPrimitiveList(primitives);
    EXPECT_THAT(geometry_clips_, ElementsAre(std::vector{1, 2, 3}, std::vector{4, 5, 6}));
}

// Two cubes along x of geometry that draws nothing, seen from (8, 8, -40) along z: the walk
// draws the camera's cube along x, 1, then 0, all in its first slab.
class CDemonSetSceneGeometryTest : public CDemonSetRenderTest {
protected:
    CDemonSetSceneGeometryTest() {
        SGeoCube cube;
        cube.vertex_count = 3;
        cube.vertices = {{}, {}, {}};
        cube.triangle_count = 1;
        cube.triangles.resize(1);
        givenFile("data\\set.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                           {.x = 2, .y = 1, .z = 1}, {cube, cube}));
        EXPECT_TRUE(set_parts_.raytrace.loadAndSyncWithGeoFile("set.geo"));
        demon_renderer_.setProjectionScale(90.0F);
        demon_renderer_.setCameraOriginFromScaledPoint({.x = 8.0F, .y = 8.0F, .z = -40.0F});
        demon_renderer_.setupSceneRendering({});
        demon_renderer_.processCameraRelativeVertex({});
    }
};

// A set of one camera at (1, 2, 3), whose PVS is its one empty cube, a scene camera framing 64
// by 48, and two renderable actors, the one at the origin the nearer and scaled.
class CDemonSetBackgroundTest : public CDemonSetRenderTest {
protected:
    CDemonSetBackgroundTest() {
        givenFile("models\\test.set",
                  SSetFile{.cameras = "1\n" + cameraText("cam"), .pvs = "1\n\t0\n"}.text());
        givenFile("data\\pier.geo",
                  geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 1, .y = 1, .z = 1}, {{}}));
        set_.load("test.set");
        set_parts_.camera->init(kFrameHeight);
        for (std::size_t row = 0; row < frame_rows_.size(); ++row) {
            frame_rows_.at(row) = frame_.at(row).data();
        }
        depth_rows_.fill(depth_row_.data());
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(frame_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(hardware_palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(hardware_palette32_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(::testing::ReturnRef(masks_));
        near_.setRenderable(true);
        near_.setScale({.x = 1, .y = 2, .z = 3});
        far_.setRenderable(true);
        far_.setLocation({.position = {.x = 0.0F, .y = 0.0F, .z = 50.0F}, .area_id = 0});
        set_.setActors({&near_, &far_});
        set_.buildActorTypeLists();
    }

    void showTheCamera() {
        set_.setCameraView(0);
    }

    // Untextured, a polygon goes to the geometry clip only with face capture on.
    bool faceCaptureIsOn() {
        const std::size_t before = geometry_clips_.size();
        SMRGLPrimitiveQuad poly;
        poly.vertices = {{.vertex_index = 0}, {.vertex_index = 1}, {.vertex_index = 2}};
        demon_renderer_.renderTexturedPoly(poly, 0);
        return geometry_clips_.size() > before;
    }

    static constexpr int kFrameHeight = 48;
    std::array<std::array<std::uint32_t, 64>, kFrameHeight> frame_{};
    std::array<void *, kFrameHeight> frame_rows_{};
    std::array<std::uint32_t, 64> depth_row_{};
    std::array<std::uint32_t *, kFrameHeight> depth_rows_{};
    std::array<std::uint16_t, 256> hardware_palette16_{};
    std::array<std::uint32_t, 256> hardware_palette32_{};
    engine::SColorMasks masks_;
    CTestActor near_{kTestLeafType};
    CTestActor far_{kTestLeafType};
};

// Nearest first, each draws its background layer opaque, tinted by its scale, and leaves the
// flat colour untinted: for the depths, over the backdrop, then in the lit frame.
TEST_F(CDemonSetBackgroundTest, EachActorDrawsItsBackgroundOpaqueAndTintedByItsScale) {
    std::vector<std::string> drawn;
    const auto record = [this, &drawn](std::string_view name) {
        return [this, &drawn, name](int layer_flag) {
            const CColor3i &tint = set_.getFlatColor();
            drawn.push_back(std::format("{} {} {},{},{} {:#x}", name, layer_flag, tint.r, tint.g,
                                        tint.b, three_d_.getCurrentAlphaValue()));
        };
    };
    near_.onRenderBackground(record("near"));
    far_.onRenderBackground(record("far"));
    static_cast<void>(demon_renderer_.setRenderAlpha(0x8000));
    showTheCamera();
    EXPECT_THAT(drawn, ElementsAre("near 1 1,2,3 0xff", "far 1 65536,65536,65536 0xff",
                                   "near 1 1,2,3 0xff", "far 1 65536,65536,65536 0xff",
                                   "near 1 1,2,3 0xff", "far 1 65536,65536,65536 0xff"));
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0x10000, .g = 0x10000, .b = 0x10000}));
}

// Each actor draws with the set's renderer, polygon state, special, camera tables and events, and
// the set itself.
TEST_F(CDemonSetBackgroundTest, EachActorDrawsWithTheSetsOwners) {
    showTheCamera();
    const std::optional<SActorRenderOwners> &owners = far_.getRenderOwners();
    ASSERT_TRUE(owners.has_value());
    EXPECT_EQ(&owners->renderer, &demon_renderer_);
    EXPECT_EQ(&owners->three_d, &three_d_);
    EXPECT_EQ(&owners->special, &special_);
    EXPECT_EQ(&owners->set, &set_);
    EXPECT_EQ(&owners->camera_tables, &set_parts_.tables);
    EXPECT_EQ(&owners->events, &set_parts_.events);
}

// An actor that turns face capture off leaves it on for the next.
TEST_F(CDemonSetBackgroundTest, EachActorsBackgroundStartsWithFaceCaptureOn) {
    near_.onRenderBackground([this](int) { demon_renderer_.enableFaceCapture(false); });
    bool far_capturing = false;
    far_.onRenderBackground([this, &far_capturing](int) { far_capturing = faceCaptureIsOn(); });
    showTheCamera();
    EXPECT_TRUE(far_capturing);
}

// The geometry's depths are put back before the actors draw over the backdrop, and the camera
// keeps the depths they leave, which the lit frame draws over in turn.
TEST_F(CDemonSetBackgroundTest, TheActorsDrawOverTheGeometrysDepthsThenTheirOwn) {
    std::vector<std::uint32_t> under_actors;
    near_.onRenderBackground([this, &under_actors](int) {
        under_actors.push_back(depth_row_[0]);
        depth_row_.fill(9);
    });
    showTheCamera();
    ASSERT_EQ(under_actors.size(), 3U);
    EXPECT_NE(under_actors[0], 9U);
    EXPECT_EQ(under_actors[1], under_actors[0]);
    EXPECT_EQ(under_actors[2], 9U);
    EXPECT_EQ(set_parts_.camera->getZBuffer()[0], 9U);
}

// A set with a sky has it drawn into the lit frame, about its geometry.
TEST_F(CDemonSetBackgroundTest, TheSkyIsDrawnIntoTheLitFrame) {
    givenFile("models\\test.set",
              SSetFile{.cameras = "1\n" + cameraText("cam"), .pvs = "1\n\t0\n", .sky = "1"}.text());
    givenFile("art\\stars.raw", std::string(std::size_t{256} * 256, '\0'));
    givenFile("art\\stars.act", std::string(768, '\0'));
    set_.load("test.set");
    set_.setActors({&near_, &far_});
    showTheCamera();
    const CSkyDome &sky = *set_parts_.sky_dome;
    EXPECT_EQ(sky.getTexture().texture_name, "stars.raw");
    EXPECT_EQ(vertex_buffer_[0].r, 200);
    EXPECT_GT(sky.getVertexScale(), 0.0F);
}

// What an actor's drawing changed of the transform it was drawn at is noted afresh.
TEST_F(CDemonSetBackgroundTest, EachActorIsNotedAsDrawnAgainAfterwards) {
    near_.onRenderBackground([this](int) { near_.setDrawnTransform({}); });
    showTheCamera();
    EXPECT_EQ(near_.getDrawnTransform().dirty_flags, SDrawnTransform::kEveryPass);
}

// An actor with no background of its own draws nothing into the camera's frame, and with no
// backdrop for the camera, none is drawn either.
TEST_F(CDemonSetBackgroundTest, MostActorsHaveNoBackground) {
    showTheCamera();
    EXPECT_THAT(set_parts_.camera->getFramebuffer(), Each(0U));
}

TEST_F(CDemonSetBackgroundTest, TheCamerasBackdropIsDrawnBeforeTheActorsDrawOverIt) {
    givenFile("backdrop\\cam.ACT", std::string(3, '\x10') + std::string(765, '\0'));
    givenFile("backdrop\\cam.raw", std::string(std::size_t{640} * 480, '\0'));
    givenFile("art\\BACKGND.RAW", std::string(std::size_t{256} * 256, '\0'));
    givenFile("art\\BACKGND.act", std::string(768, '\0'));
    std::uint32_t under_actors = 0;
    near_.onRenderBackground(
        [this, &under_actors](int) { under_actors = set_parts_.camera->getFramebuffer()[0]; });
    showTheCamera();
    EXPECT_EQ(under_actors, 0x101010U);
}

// With the hardware renderer the geometry and actors are drawn again before the lit frame; the
// camera's scene is closed either way.
TEST_F(CDemonSetBackgroundTest, InHardwareTheGeometryAndActorsAreDrawnAgain) {
    startRenderer();
    special_.setUseExternalRenderer(true);
    int drawn = 0;
    near_.onRenderBackground([&drawn](int) { ++drawn; });
    showTheCamera();
    EXPECT_EQ(drawn, 4);
    EXPECT_FALSE(set_parts_.camera->isSceneOpen());
}

TEST_F(CDemonSetBackgroundTest, ASceneNeedsACameraShown) {
    EXPECT_THAT([this] { set_.renderScene(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CDemonSet::isCameraPanning - no camera selected")));
}

// The background test's set with its camera shown.
class CDemonSetFrameTest : public CDemonSetBackgroundTest {
protected:
    CDemonSetFrameTest() {
        showTheCamera();
    }
};

// The coronas start over in the first scene after a camera is shown, and in every scene while
// shadows are on.
TEST_F(CDemonSetFrameTest, TheCoronasStartOverOnceACameraIsShownOrWithShadowsOn) {
    CGame &game = set_parts_.classes.getGame();
    game.shadow_flag = 0;
    const int start = set_parts_.camera->getCoronaBlendFactor() / 0x400;
    ASSERT_NE(start, 9);
    std::vector<std::uint8_t> &light = set_parts_.tables.corona_light;
    std::ranges::fill(light, 9);
    set_.renderScene();
    EXPECT_EQ(light[0], start);
    std::ranges::fill(light, 9);
    set_.renderScene();
    EXPECT_EQ(light[0], 9);
    game.shadow_flag = 1;
    set_.renderScene();
    EXPECT_EQ(light[0], start);
}

// Farthest first each renderable actor draws opaque, tinted by its scale and with the render
// alpha full, then each transparent one draws tinted; the flat colour is left untinted, and the
// camera's scene is closed again.
TEST_F(CDemonSetFrameTest, TheActorsDrawOpaqueThenTintedFarthestFirst) {
    near_.setTransparent(true);
    far_.setTransparent(true);
    std::vector<std::string> drawn;
    const auto record = [this, &drawn](std::string_view name) {
        return [this, &drawn, name] {
            const CColor3i &tint = set_.getFlatColor();
            drawn.push_back(std::format("{} {},{},{} {:#x}", name, tint.r, tint.g, tint.b,
                                        three_d_.getCurrentAlphaValue()));
            return 1;
        };
    };
    near_.onRenderOpaque(record("near opaque"));
    far_.onRenderOpaque(record("far opaque"));
    near_.onRenderTransparent(record("near tinted"));
    far_.onRenderTransparent(record("far tinted"));
    static_cast<void>(demon_renderer_.setRenderAlpha(0x8000));
    set_.renderScene();
    EXPECT_THAT(drawn, ElementsAre("far opaque 65536,65536,65536 0xff", "near opaque 1,2,3 0xff",
                                   "far tinted 65536,65536,65536 0xff", "near tinted 1,2,3 0xff"));
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0x10000, .g = 0x10000, .b = 0x10000}));
    EXPECT_FALSE(set_parts_.camera->isSceneOpen());
}

// A pass's bit stays on an actor while it drew something in it, and is cleared on one that drew
// nothing or doesn't take the pass.
TEST_F(CDemonSetFrameTest, EachPassKeepsItsBitWhileTheActorDrewInIt) {
    near_.onRenderOpaque([] { return 1; });
    far_.setRenderable(false);
    far_.setTransparent(true);
    far_.onRenderTransparent([] { return 1; });
    set_.renderScene();
    EXPECT_EQ(near_.getDrawnTransform().dirty_flags,
              SDrawnTransform::kEveryPass & ~SDrawnTransform::kTransparentPass);
    EXPECT_EQ(far_.getDrawnTransform().dirty_flags,
              SDrawnTransform::kEveryPass & ~SDrawnTransform::kOpaquePass);
}

// An actor that drew nothing is left out of the frames after while it stays where it was drawn,
// and drawn again once it moves.
TEST_F(CDemonSetFrameTest, AnActorThatDrewNothingWaitsUntilItMoves) {
    int drawn = 0;
    far_.onRenderOpaque([&drawn] {
        ++drawn;
        return 0;
    });
    set_.renderScene();
    set_.renderScene();
    EXPECT_EQ(drawn, 1);
    far_.setLocation({.position = {.x = 1.0F, .y = 0.0F, .z = 50.0F}, .area_id = 0});
    set_.renderScene();
    EXPECT_EQ(drawn, 2);
}

// Each actor is noted as drawn where it is now, its passes left as they drew.
TEST_F(CDemonSetFrameTest, EachActorsPlaceIsNotedAsDrawn) {
    near_.setLocation({.position = {.x = 5.0F, .y = 0.0F, .z = 0.0F}, .area_id = 0});
    near_.onRenderOpaque([] { return 1; });
    set_.renderScene();
    EXPECT_EQ(near_.getDrawnTransform().position.x, 5.0F);
    EXPECT_NE(near_.getDrawnTransform().dirty_flags & SDrawnTransform::kOpaquePass, 0U);
}

// An actor that turns face capture off leaves it on for the next.
TEST_F(CDemonSetFrameTest, EachActorStartsWithFaceCaptureOn) {
    far_.onRenderOpaque([this] {
        demon_renderer_.enableFaceCapture(false);
        return 1;
    });
    bool near_capturing = false;
    near_.onRenderOpaque([this, &near_capturing] {
        near_capturing = faceCaptureIsOn();
        return 1;
    });
    set_.renderScene();
    EXPECT_TRUE(near_capturing);
}

// The scene keeps the camera's buffers, so what its actors draw marks the camera, and the next
// scene first puts back the depths under what was marked.
TEST_F(CDemonSetFrameTest, TheDepthsUnderWhatWasMarkedComeBackFirst) {
    near_.onRenderOpaque([this] {
        EXPECT_EQ(set_parts_.tables.kept_camera, set_parts_.camera.get());
        set_.pushScreenBoundsToCamera(0);
        return 1;
    });
    set_.renderScene();
    EXPECT_EQ(set_parts_.camera->getDirtyRects().size(), 1U);
    const std::uint32_t kept = set_parts_.camera->getZBuffer()[0];
    depth_row_[0] = kept + 1;
    set_parts_.camera->pushRect({.x_min = 0, .x_max = 0, .y_min = 0, .y_max = 0});
    set_.renderScene();
    EXPECT_EQ(depth_row_[0], kept);
}

// The set with water two units up in tiles of 32, and a frame time that rolls its waves on: how
// often it was drawn shows in its waves' phase.
class CDemonSetWaterTest : public CDemonSetBackgroundTest {
protected:
    CDemonSetWaterTest() {
        for (std::size_t frame = 0; frame < CWater::kTextureCount; ++frame) {
            givenFile(std::format("art\\WATER{}.RAW", frame),
                      std::string(std::size_t{32} * 32, '\x01'));
        }
        set_parts_.water.setLevel(2.0F, 32.0F);
        set_parts_.water.setWaveAnimationEnabled(false);
        set_parts_.classes.getGame().slamDT(kFrameTime);
    }

    [[nodiscard]] long draws() const {
        return std::lround(static_cast<double>(set_parts_.water.getWavePhase()) /
                           (kFrameTime * 3.1415926535));
    }

    [[nodiscard]] bool tilesReported() const {
        for (int row = 0; row < set_parts_.console.getConsoleHeight(); ++row) {
            if (set_parts_.console.getRow(row).starts_with("Vis water tiles")) {
                return true;
            }
        }
        return false;
    }

    static constexpr float kFrameTime = 0.125F;
};

// The software geometry finds the water's tiles, and blends still water in; waving water waits
// for the frame.
TEST_F(CDemonSetWaterTest, TheGeometryFindsTheTilesAndBlendsStillWaterIn) {
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_TRUE(tilesReported());
    EXPECT_EQ(draws(), 1);
    set_parts_.water.setWaveAnimationEnabled(true);
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_EQ(draws(), 1);
}

TEST_F(CDemonSetWaterTest, TheShadowPassAndTheHardwareLeaveTheWaterOut) {
    demon_renderer_.setShadowPass(1);
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    demon_renderer_.setShadowPass(0);
    special_.setUseExternalRenderer(true);
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_FALSE(tilesReported());
    EXPECT_EQ(draws(), 0);
}

// Showing a camera blends still water into its backdrop with the geometry and draws it into the
// lit frame; in hardware it is drawn after the geometry too.
TEST_F(CDemonSetWaterTest, ShowingACameraDrawsStillWaterIntoEachFrame) {
    showTheCamera();
    EXPECT_EQ(draws(), 2);
    startRenderer();
    special_.setUseExternalRenderer(true);
    showTheCamera();
    EXPECT_EQ(draws(), 5);
}

// In the frame, waving water is drawn between the opaque and the tinted actors, and still water
// into the backdrop after them.
TEST_F(CDemonSetWaterTest, TheFrameDrawsWavingWaterOverItAndStillWaterIntoTheBackdrop) {
    showTheCamera();
    near_.setTransparent(true);
    long before_tinted = 0;
    near_.onRenderTransparent([this, &before_tinted] {
        before_tinted = draws();
        return 1;
    });
    const long shown = draws();
    set_.renderScene();
    EXPECT_EQ(before_tinted, shown);
    EXPECT_EQ(draws(), shown + 1);
    set_parts_.water.setWaveAnimationEnabled(true);
    set_.renderScene();
    EXPECT_EQ(before_tinted, shown + 2);
    EXPECT_EQ(draws(), shown + 2);
}

// The same set on the train: its geometry is train.geo, so the junk ground is loaded with it.
class CDemonSetTrainTest : public CDemonSetBackgroundTest {
protected:
    CDemonSetTrainTest() {
        constexpr std::size_t kCells = std::size_t{256} * 256;
        givenFile("data\\junk.raw", std::string(kCells, '\0'));
        givenFile("data\\junk.clr", std::string(kCells * 2, '\0'));
        givenFile("data\\junk.tex", "1\nsand.raw\n");
        givenFile("art\\SAND.RAW", std::string(std::size_t{32} * 32, '\x01'));
        givenFile("data\\train.geo",
                  geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 1, .y = 1, .z = 1}, {{}}));
        givenFile("models\\train.set", SSetFile{.geometry = "train.geo",
                                                .cameras = "1\n" + cameraText("cam"),
                                                .pvs = "1\n\t0\n"}
                                           .text());
        set_.load("train.set");
        set_parts_.camera->init(kFrameHeight);
    }

    // Whether the ground's grid has been drawn since its vertices were last cleared.
    [[nodiscard]] bool groundDrawn() const {
        return std::ranges::any_of(vertex_buffer_,
                                   [](const SRenderVertex &vertex) { return vertex.r == 0x3fff; });
    }

    void clearVertices() {
        for (SRenderVertex &vertex : vertex_buffer_) {
            vertex.r = 0;
        }
    }
};

TEST_F(CDemonSetTrainTest, TheTrainsGroundIsDrawnWithTheGeometryAndInTheFrame) {
    ASSERT_TRUE(set_.isAboardMovingVehicle());
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_TRUE(groundDrawn());
    showTheCamera();
    clearVertices();
    set_.renderScene();
    EXPECT_TRUE(groundDrawn());
}

TEST_F(CDemonSetSceneGeometryTest, TheSceneIsLitFromAboveAndInFront) {
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_EQ(light_.getLightDirection(), (common::CVector3i{.x = 0, .y = -46333, .z = 46333}));
}

// With no camera shown, a PVS already set is drawn when one is asked for, and the walk
// otherwise; neither is kept by any camera.
TEST_F(CDemonSetSceneGeometryTest, WithNoCameraShownAnyPVSSetIsDrawnWhenAskedFor) {
    const std::array<int, 1> pvs{0};
    set_parts_.raytrace.setPVS(pvs);
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawCameraPVS);
    EXPECT_THAT(set_parts_.raytrace.savePVS(), ElementsAre(0));
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_THAT(set_parts_.raytrace.savePVS(), ElementsAre(1, 0));
}

} // namespace
} // namespace nocturne::core
