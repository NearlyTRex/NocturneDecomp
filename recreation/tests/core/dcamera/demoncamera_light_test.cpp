#include "common/error/fatalerror.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/dlight/lightmappixel.h"
#include "core/rect.h"
#include "tests/mocks/common/vector3fequal.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

// The depth every pixel of the scene is at, 32 world units in 24.8, and a pixel's colour for a
// surface facing back down the view, as the background scene draws it.
constexpr int kDepth = 0x2000;
constexpr std::uint32_t kFacingBack = 0x0000007f;
constexpr std::uint32_t kFacingAway = 0x00000081;
constexpr common::CMatrix3x3f kIdentity{.m = {common::CVector3f{.x = 1.0F},
                                              common::CVector3f{.y = 1.0F},
                                              common::CVector3f{.z = 1.0F}}};

// A camera and a 256 by 256 light at the origin looking down z over a screen of the camera's
// frame, every pixel at kDepth facing back, and rows to spare for the light's map.
class CDemonCameraLightTest : public engine::CDemonRendererFixture {
protected:
    void frame(int screen_height) {
        camera_.init(screen_height);
        width_ = static_cast<std::size_t>(camera_.getFramebufferWidth());
        height_ = static_cast<std::size_t>(camera_.getFramebufferHeight());
        pixels_.assign(width_ * height_, kFacingBack);
        depths_.assign(width_ * height_, static_cast<std::uint32_t>(0x7fffffff / kDepth));
        rows_.assign(std::max<std::size_t>(height_, kLightRows), nullptr);
        depth_rows_.clear();
        for (std::size_t row = 0; row < height_; ++row) {
            rows_[row] = pixels_.data() + (row * width_);
            depth_rows_.push_back(depths_.data() + (row * width_));
        }
        ON_CALL(screen_, getScreenRows()).WillByDefault([this] { return std::span(rows_); });
        ON_CALL(screen_, getZBufferRows()).WillByDefault([this] { return std::span(depth_rows_); });
        camera_.setRotationMatrix(kIdentity);
        light_.setRotationMatrix(kIdentity);
        camera_.beginScene(1);
        camera_.endScene(1);
        light_.init();
        light_.setShadowBoundsMode(0);
        light_.beginScene(0);
        light_.endScene(0);
    }

    std::uint32_t &pixel(std::size_t x, std::size_t y) {
        return pixels_.at((y * width_) + x);
    }

    [[nodiscard]] const SLightMapPixel &mapAt(std::size_t x, std::size_t y) const {
        return light_.getLightMap()[(y * 320) + x];
    }

    static constexpr std::size_t kLightRows = 256;
    CLightParts parts_;
    SDemonLightOwners owners_ =
        parts_.owners(screen_, special_, demon_renderer_, dosio_, matrix_, two_d_);
    CDemonCamera camera_{owners_.camera};
    CDemonLight light_{owners_, 256, 256};
    CFilterCache cache_{dosio_};
    std::size_t width_ = 0;
    std::size_t height_ = 0;
    std::vector<std::uint32_t> pixels_;
    std::vector<std::uint32_t> depths_;
    std::vector<void *> rows_;
    std::vector<std::uint32_t *> depth_rows_;
};

// Each display pixel but the first row's and column's takes its world position through the
// scene's inverse projection, its depth, and its normal from its colour's signed bytes in 127ths;
// the farthest depth drawn is the camera's reach. The fog's drift starts over, a drifting fog
// taking every plane.
TEST_F(CDemonCameraLightTest, NormalsAndPositionsAreTakenFromWhatWasDrawn) {
    frame(48);
    pixel(3, 2) = 0x00817f00;
    depths_.at((5 * width_) + 5) = 0;
    parts_.tables.fog_drift_plane = 5;
    parts_.tables.fog_drift_fraction = 9;
    parts_.tables.fog_grid.scroll_vector = {.x = 1, .y = 0, .z = 0};
    camera_.precomputeNormals();
    const std::size_t at = (2 * 320) + 3;
    common::CVector3i point;
    static_cast<void>(camera_.screenToWorldCoord(3, 2, &point));
    common::CVector3i world;
    camera_.screenToWorldTransform(&point, &world);
    EXPECT_EQ(camera_.getPrecomputedWorldPositions()[at], world);
    EXPECT_EQ(camera_.getPrecomputedDepths()[at], kDepth);
    EXPECT_TRUE(common::isSameVector(camera_.getPrecomputedNormals()[at],
                                     {.x = -1.0F, .y = 1.0F, .z = 0.0F}));
    EXPECT_TRUE(common::isSameVector(camera_.getPrecomputedNormals()[(4 * 320) + 4],
                                     {.x = 0.0F, .y = 0.0F, .z = 1.0F}));
    EXPECT_EQ(camera_.getPrecomputedDepths()[std::size_t{2} * 320], 0);
    EXPECT_EQ(camera_.getMaxDistance(), 32.0F);
    EXPECT_EQ(parts_.tables.fog_drift_plane, 0);
    EXPECT_EQ(parts_.tables.fog_drift_fraction, 0);
    EXPECT_EQ(parts_.tables.fog_plane_count, 16);
    parts_.tables.fog_grid.scroll_vector = {};
    camera_.precomputeNormals();
    EXPECT_EQ(parts_.tables.fog_plane_count, 1);
    for (const common::CVector3i &drift : {common::CVector3i{.y = 1}, common::CVector3i{.z = 1}}) {
        parts_.tables.fog_grid.scroll_vector = drift;
        camera_.precomputeNormals();
        EXPECT_EQ(parts_.tables.fog_plane_count, 16);
    }
}

// A pixel in the light's view takes its depth there less the bias, its shadow map entry and its
// beam texel; the frame's edge pixels and those facing away get none; each row's extents are its
// first and last lit pixels.
TEST_F(CDemonCameraLightTest, EachPixelInTheLightsViewIsFoundInIt) {
    frame(48);
    pixel(20, 10) = kFacingAway;
    camera_.precomputeNormals();
    camera_.precomputeLight(light_, {.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47});
    common::CVector3i world = camera_.getPrecomputedWorldPositions()[(10 * 320) + 10];
    common::CVector3i screen;
    light_.worldToScreenWithFrustumCull(&world, &screen);
    ASSERT_GT(screen.z, 0);
    const std::optional<std::size_t> entry =
        light_.projectLightAndMarkVisibility(screen, false, false);
    ASSERT_TRUE(entry.has_value());
    const unsigned mask = light_.getTextureCoordMask();
    const unsigned texel = ((static_cast<unsigned>(screen.y >> light_.getShadowYShift()) & mask)
                            << static_cast<unsigned>(light_.getTextureRowShift())) +
                           (static_cast<unsigned>(screen.x >> light_.getShadowXShift()) & mask);
    EXPECT_EQ(mapAt(10, 10), (SLightMapPixel{.depth = screen.z - 0x80,
                                             .shadow_entry = static_cast<std::uint32_t>(*entry),
                                             .texel = texel}));
    EXPECT_EQ(mapAt(20, 10), SLightMapPixel{});
    EXPECT_EQ(mapAt(0, 10), SLightMapPixel{});
    EXPECT_EQ(mapAt(10, 0), SLightMapPixel{});
    EXPECT_EQ(mapAt(63, 10), SLightMapPixel{});
    EXPECT_EQ(mapAt(10, 47), SLightMapPixel{});
    EXPECT_NE(mapAt(30, 30).depth, 0);
    int first = CDemonLight::kNoLeftExtent;
    int last = 0;
    for (std::size_t x = 0; x < 64; ++x) {
        if (mapAt(x, 10).depth != 0) {
            first = std::min(first, static_cast<int>(x));
            last = static_cast<int>(x);
        }
    }
    EXPECT_LE(first, 10);
    EXPECT_EQ(light_.getLeftExtents()[10], first);
    EXPECT_EQ(light_.getRightExtents()[10], last);
    EXPECT_EQ(light_.getLeftExtents()[0], CDemonLight::kNoLeftExtent);
    EXPECT_EQ(light_.getRightExtents()[0], 0);
}

// The moving screen's light lights what faces away too, its depths taken further.
TEST_F(CDemonCameraLightTest, TheMovingScreensLightIgnoresFacingAndTakesMoreBias) {
    givenFile("art\\movscrn.raw", std::string(std::size_t{64} * 64, '\x10'));
    frame(48);
    pixel(20, 10) = kFacingAway;
    camera_.precomputeNormals();
    camera_.precomputeLight(light_, {.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47});
    const int plain = mapAt(20, 11).depth;
    camera_.precomputeNormals();
    light_.applyFilter(*cache_.getFilter("movscrn.raw", 0), 0, 0, 0);
    camera_.precomputeLight(light_, {.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47});
    EXPECT_NE(mapAt(20, 10).depth, 0);
    EXPECT_EQ(mapAt(20, 11).depth, plain - 0x80);
}

// A point the light doesn't see is out of it: the moving screen's, which faces any way.
TEST_F(CDemonCameraLightTest, APointBehindTheLightIsOutOfIt) {
    givenFile("art\\movscrn.raw", std::string(std::size_t{64} * 64, '\x10'));
    frame(48);
    light_.applyFilter(*cache_.getFilter("movscrn.raw", 0), 0, 0, 0);
    camera_.precomputeNormals();
    light_.setRotationMatrix({.m = {common::CVector3f{.x = -1.0F}, common::CVector3f{.y = 1.0F},
                                    common::CVector3f{.z = -1.0F}}});
    light_.beginScene(0);
    light_.endScene(0);
    camera_.precomputeLight(light_, {.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47});
    EXPECT_EQ(mapAt(10, 10), SLightMapPixel{});
    EXPECT_EQ(light_.getLeftExtents()[10], CDemonLight::kNoLeftExtent);
}

// For a circular shadow a point in the corner of the light's view, off its circle, is out of it.
TEST_F(CDemonCameraLightTest, APointOffTheLightsCircleIsOutOfIt) {
    frame(48);
    camera_.precomputeNormals();
    light_.setShadowBoundsMode(1);
    camera_.precomputeLight(light_, {.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47});
    EXPECT_EQ(mapAt(1, 1), SLightMapPixel{});
    EXPECT_NE(mapAt(32, 24).depth, 0);
}

// On a 480-line frame only the rectangle's pixels are found, the rows outside it lit by none.
TEST_F(CDemonCameraLightTest, OnAFullFrameOnlyTheRectangleIsFound) {
    frame(480);
    camera_.precomputeNormals();
    camera_.precomputeLight(light_, {.x_min = 5, .x_max = 200, .y_min = 10, .y_max = 20});
    EXPECT_EQ(light_.getLeftExtents()[9], CDemonLight::kNoLeftExtent);
    EXPECT_EQ(light_.getRightExtents()[21], 0);
    EXPECT_EQ(light_.getLeftExtents()[10], 5);
    EXPECT_EQ(light_.getRightExtents()[10], 200);
}

// Each precomputed light takes the next of eight maps; a ninth is fatal, naming the camera.
TEST_F(CDemonCameraLightTest, NoMoreThanEightLightsArePrecomputed) {
    frame(48);
    camera_.setCameraName("hall");
    camera_.precomputeNormals();
    const CRect all{.x_min = 0, .x_max = 63, .y_min = 0, .y_max = 47};
    camera_.precomputeLight(light_, all);
    const SLightMapPixel *first = light_.getLightMap().data();
    camera_.precomputeLight(light_, all);
    EXPECT_EQ(light_.getLightMap().data(), first + (std::ptrdiff_t{320} * 240));
    for (int light = 2; light < CDemonCamera::kMaxPrecomputedLights; ++light) {
        camera_.precomputeLight(light_, all);
    }
    EXPECT_THAT([&] { camera_.precomputeLight(light_, all); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "CDemonCamera::precomputeLight - Too many lights visible from camera hall")));
    camera_.precomputeNormals();
    camera_.precomputeLight(light_, all);
    EXPECT_EQ(light_.getLightMap().data(), first);
}

// Each lit pixel in front of the light's shadow map adds the beam's level to the coronas' light,
// wrapping; a pixel the light doesn't reach, or one behind the map, adds nothing.
TEST_F(CDemonCameraLightTest, TheLightsBeamIsAddedWhereItReaches) {
    frame(48);
    const std::span<const std::uint8_t> beam = light_.getPrecomputedLightingTextures();
    const auto texel = static_cast<std::uint32_t>(std::ranges::max_element(beam) - beam.begin());
    std::vector<SLightMapPixel> map(std::size_t{320} * 240);
    map[(3 * 320) + 4] = {.depth = 5, .shadow_entry = 0, .texel = texel};
    map[(3 * 320) + 5] = {.depth = 0, .shadow_entry = 0, .texel = texel};
    map[(3 * 320) + 6] = {.depth = -1, .shadow_entry = 0, .texel = texel};
    map[(3 * 320) + 9] = {.depth = 5, .shadow_entry = 0, .texel = texel};
    light_.setLightMap(map);
    light_.getLeftExtents()[3] = 4;
    light_.getRightExtents()[3] = 8;
    light_.getLeftExtents()[4] = CDemonLight::kNoLeftExtent;
    light_.getRightExtents()[4] = 0;
    std::vector<std::uint8_t> &corona = parts_.tables.corona_light;
    std::ranges::fill(corona, 250);
    const std::uint8_t level = beam[texel];
    ASSERT_GT(level, 6);
    camera_.addLightmapToCorona(light_);
    EXPECT_EQ(corona[(3 * 320) + 4], static_cast<std::uint8_t>(250 + level));
    EXPECT_EQ(corona[(3 * 320) + 5], 250);
    EXPECT_EQ(corona[(3 * 320) + 6], 250);
    EXPECT_EQ(corona[(3 * 320) + 9], 250);
    EXPECT_EQ(corona[(4 * 320) + 4], 250);
}

} // namespace
} // namespace nocturne::core
