#include "common/error/fatalerror.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "core/dfilter/demonfilter.h"
#include "core/dlight/demonlight.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonLight, DerivesFromCDemonCamera) {
    static_assert(std::is_base_of_v<CDemonCamera, CDemonLight>);
}

TEST(CDemonLight, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonLight>);
}

TEST(CDemonLight, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonLight>);
}

TEST(CDemonLight, Constructors) {
    static_assert(std::is_constructible_v<CDemonLight, const SDemonLightOwners &, int, int>);
}

TEST(CDemonLight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonLight::init), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::allocMasterZBuffer), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::freeMasterZBuffer), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::beginScene), void (CDemonLight::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::endScene), void (CDemonLight::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::beginBackgroundScene), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::endBackgroundScene), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::restoreDirtyRegions), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::projectLightAndMarkVisibility),
                                 std::optional<std::size_t> (CDemonLight::*)(
                                     const common::CVector3i &, bool, bool)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::renderShadowMapDebugView),
                                 void (CDemonLight::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::clearCircularShadowMapEdges),
                                 void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderCoronaGeometry), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderLightBloomQuad), void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::renderLightGlowSprites), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::allocateFilter), void (CDemonLight::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonLight::applyFilter),
                                 void (CDemonLight::*)(const CDemonFilter &, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::initializeVisibilityBuffer),
                                 void (CDemonLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonLight::testShadowMapRegion), int (CDemonLight::*)(CRect *)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::setVolumetricIntensity),
                                 void (CDemonLight::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonLight::drawShadowDepthBuffer),
                                 void (CDemonLight::*)(int, int, int)>);
}

class CDemonLightTest : public engine::CDemonRendererFixture {
protected:
    // The level at (x, y) of the light's beam.
    [[nodiscard]] static std::uint8_t beam(const CDemonLight &light, int x, int y) {
        return light
            .getPrecomputedLightingTextures()[(static_cast<std::size_t>(y) *
                                               static_cast<std::size_t>(light.getTextureWidth())) +
                                              static_cast<std::size_t>(x)];
    }

    [[nodiscard]] static const std::uint8_t *dataOf(const CDemonFilter &filter) {
        return filter.getData().data();
    }

    CLightParts parts_;
    CDemonLight light_{parts_.owners(screen_, special_, demon_renderer_, dosio_, matrix_, two_d_),
                       256, 256};
};

TEST_F(CDemonLightTest, ALightStartsOnWithACircularShadowAndNoBuffers) {
    EXPECT_EQ(light_.getMaxDistance(), 255.0F);
    EXPECT_TRUE(light_.isLightEnabled());
    EXPECT_EQ(light_.getShadowBoundsMode(), 1);
    EXPECT_EQ(light_.getShadowMapWidth(), 256);
    EXPECT_EQ(light_.getShadowMapHeight(), 256);
    EXPECT_EQ(light_.getTransformScaleFactor(), 0x10000);
    EXPECT_EQ(light_.getVolumetricIntensity(), 1.0F);
    EXPECT_TRUE(light_.getShadowDepthBuffer().empty());
    EXPECT_FALSE(light_.hasFilterBuffer());
    light_.setLightEnabled(false);
    light_.setShadowBoundsMode(0);
    light_.setTransformScaleFactor(5);
    EXPECT_FALSE(light_.isLightEnabled());
    EXPECT_EQ(light_.getShadowBoundsMode(), 0);
    EXPECT_EQ(light_.getTransformScaleFactor(), 5);
}

// A depth and a visibility bit a texel, and at full intensity the eighth global filter, whose
// shadow shifts take the 24.8 fraction, the map's size and the filter's.
TEST_F(CDemonLightTest, InitGivesAShadowMapAndTheBrightestGlobalFilter) {
    light_.init();
    EXPECT_EQ(light_.getShadowDepthBuffer().size(), 256U * 256U);
    EXPECT_EQ(light_.getLightmapVisibilityBits().size(), 256U * 256U / 8);
    EXPECT_EQ(light_.getPrecomputedLightingTextures().data(), dataOf(parts_.global_filters[7]));
    EXPECT_EQ(light_.getTextureWidth(), 4);
    EXPECT_EQ(light_.getTextureHeight(), 4);
    EXPECT_EQ(light_.getTextureRowShift(), 2);
    EXPECT_EQ(light_.getTextureColShift(), 2);
    EXPECT_EQ(light_.getTextureCoordMask(), 3U);
    EXPECT_EQ(light_.getShadowXShift(), 8 + 8 + 6);
    EXPECT_EQ(light_.getShadowYShift(), 8 + 8 + 6);
    EXPECT_EQ(light_.getFilterName(), "unnamed");
    light_.free();
    EXPECT_TRUE(light_.getShadowDepthBuffer().empty());
    EXPECT_TRUE(light_.getLightmapVisibilityBits().empty());
    EXPECT_TRUE(light_.getPrecomputedLightingTextures().empty());
}

// Seven times the intensity, chopped, picks a global filter; past the ends it is held.
TEST_F(CDemonLightTest, TheIntensityPicksTheGlobalFilter) {
    light_.setVolumetricIntensity(0.5F);
    EXPECT_EQ(light_.getVolumetricIntensity(), 0.5F);
    EXPECT_EQ(light_.getPrecomputedLightingTextures().data(), dataOf(parts_.global_filters[3]));
    light_.setVolumetricIntensity(2.0F);
    EXPECT_EQ(light_.getPrecomputedLightingTextures().data(), dataOf(parts_.global_filters[7]));
    light_.setVolumetricIntensity(-1.0F);
    EXPECT_EQ(light_.getPrecomputedLightingTextures().data(), dataOf(parts_.global_filters[0]));
}

TEST_F(CDemonLightTest, ALightWiderThan256PicksAPlayerFilter) {
    CDemonLight wide{parts_.owners(screen_, special_, demon_renderer_, dosio_, matrix_, two_d_),
                     512, 512};
    wide.setVolumetricIntensity(0.7F);
    EXPECT_EQ(wide.getPrecomputedLightingTextures().data(), dataOf(parts_.player_filters[2]));
    EXPECT_EQ(wide.getShadowXShift(), 8 + 9 + 5);
}

TEST_F(CDemonLightTest, AFilterIndexScalesTheShadowDown) {
    light_.applyFilter(parts_.player_filters[0], 2, 0, 0);
    EXPECT_EQ(light_.getShadowXShift(), 8 + 8 + 5 - 2);
    EXPECT_EQ(light_.getShadowYShift(), 8 + 8 + 5 - 2);
    EXPECT_EQ(light_.getTextureCoordMask(), 7U);
}

// With a buffer, a whole texel's offset moves the beam, wrapping, at 255 256ths of its level; a
// half texel blends the two it falls between.
TEST_F(CDemonLightTest, AMovingFilterIsDrawnOffsetIntoItsBuffer) {
    light_.allocateFilter();
    EXPECT_TRUE(light_.hasFilterBuffer());
    const CDemonFilter &filter = parts_.global_filters[7];
    const auto level = [&filter](int x, int y) -> unsigned {
        return filter.getData()[(static_cast<std::size_t>(y) * 4) + static_cast<std::size_t>(x)];
    };
    light_.applyFilter(filter, 0, 0x100, 0x300);
    EXPECT_NE(light_.getPrecomputedLightingTextures().data(), dataOf(filter));
    EXPECT_EQ(beam(light_, 0, 0), (level(1, 3) * 255 * 255) >> 16);
    EXPECT_EQ(beam(light_, 3, 1), (level(0, 0) * 255 * 255) >> 16);
    light_.applyFilter(filter, 0, 0x80, 0);
    EXPECT_EQ(beam(light_, 1, 2), (255 * ((level(2, 2) * 0x80) + (level(1, 2) * 0x7f))) >> 16);
}

// The light inited over a screen of 300 rows, each its own address.
class CDemonLightSceneTest : public CDemonLightTest {
protected:
    CDemonLightSceneTest() {
        light_.init();
        for (std::size_t row = 0; row < rows_.size(); ++row) {
            rows_.at(row) = &markers_.at(row);
        }
        ON_CALL(screen_, getScreenRows())
            .WillByDefault(::testing::Return(std::span<void *>(rows_)));
    }

    [[nodiscard]] std::uint16_t depthAt(int x, int y) const {
        return light_.getShadowDepthBuffer()[(static_cast<std::size_t>(y) * 256) +
                                             static_cast<std::size_t>(x)];
    }

    std::array<int, 300> markers_{};
    std::array<void *, 300> rows_{};
};

// Its scene points the screen's first 256 rows at the shadow map, cleared far, with only depths
// drawn and the transform stretched by the beam's aspect, then puts them back, its reach the
// farthest depth drawn in 24.8.
TEST_F(CDemonLightSceneTest, ItsSceneDrawsDepthsIntoTheShadowMap) {
    light_.setTransformScaleFactor(0x20000);
    light_.beginScene(0);
    EXPECT_TRUE(light_.isSceneOpen());
    EXPECT_EQ(depthAt(5, 5), 0xffffU);
    EXPECT_EQ(rows_[0], light_.getShadowDepthBuffer().data());
    EXPECT_EQ(rows_[255], light_.getShadowDepthBuffer().data() + (std::ptrdiff_t{255} * 256));
    EXPECT_EQ(rows_[256], &markers_[256]);
    EXPECT_EQ(demon_renderer_.isShadowPass(), 1);
    EXPECT_EQ(parts_.tables.scene_camera, &light_);
    const common::CMatrix3x3i stretched = matrix_.getTransformMatrix();
    static_cast<std::uint16_t *>(rows_[3])[4] = 0x0500;
    static_cast<std::uint16_t *>(rows_[9])[9] = 0x0200;
    EXPECT_THAT([this] { light_.beginScene(0); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CDemonLight::beginScene - Scene already open")));
    light_.endScene(0);
    EXPECT_FALSE(light_.isSceneOpen());
    EXPECT_EQ(rows_[0], markers_.data());
    EXPECT_EQ(demon_renderer_.isShadowPass(), 0);
    EXPECT_EQ(parts_.tables.scene_camera, nullptr);
    EXPECT_EQ(light_.getMaxDistance(), 5.0F);
    light_.setTransformScaleFactor(0x10000);
    light_.beginScene(1);
    EXPECT_EQ(matrix_.getTransformMatrix().m[1].y * 2, stretched.m[1].y);
    EXPECT_EQ(depthAt(4, 3), 0x0500U);
    light_.endScene(0);
    EXPECT_EQ(light_.getMaxDistance(), 5.0F);
    EXPECT_THAT([this] { light_.endScene(0); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CDemonLight::endScene - Scene not open")));
}

// A circular shadow's map has its corners outside the circle at 0; a rectangular one's are left.
TEST_F(CDemonLightSceneTest, ACircularShadowClearsTheCornersOutsideItsCircle) {
    light_.beginScene(0);
    light_.setShadowBoundsMode(0);
    light_.clearCircularShadowMapEdges();
    EXPECT_EQ(depthAt(0, 0), 0xffffU);
    light_.setShadowBoundsMode(1);
    light_.clearCircularShadowMapEdges();
    light_.endScene(0);
    EXPECT_EQ(depthAt(0, 0), 0U);
    EXPECT_EQ(depthAt(255, 0), 0U);
    EXPECT_EQ(depthAt(0, 255), 0U);
    EXPECT_EQ(depthAt(255, 255), 0U);
    EXPECT_EQ(depthAt(128, 0), 0U);
    EXPECT_EQ(depthAt(128, 1), 0xffffU);
    EXPECT_EQ(depthAt(128, 128), 0xffffU);
}

// A point in front of the light in 16.16 falls on its map's entry, marked seen; an odd column
// rounds on by a quarter and an odd row by a half, both ways at once.
TEST_F(CDemonLightSceneTest, APointInTheLightFallsOnItsEntryMarkedSeen) {
    light_.setShadowBoundsMode(0);
    EXPECT_EQ(
        light_.projectLightAndMarkVisibility({.x = 10 << 16, .y = 3 << 16, .z = 1}, false, false),
        std::optional<std::size_t>((3 * 256) + 10));
    EXPECT_EQ(light_.getLightmapVisibilityBits()[(3 * 256 / 8) + 1], 1U << 2U);
    // A quarter takes 0xc000 over the next whole and leaves 0xa000; a half takes both.
    const int three_quarters = (10 << 16) + 0xc000;
    const int five_eighths = (10 << 16) + 0xa000;
    EXPECT_EQ(light_.projectLightAndMarkVisibility({.x = three_quarters, .y = five_eighths, .z = 1},
                                                   true, false),
              std::optional<std::size_t>((10 * 256) + 11));
    EXPECT_EQ(light_.projectLightAndMarkVisibility({.x = five_eighths, .y = five_eighths, .z = 1},
                                                   false, true),
              std::optional<std::size_t>((11 * 256) + 11));
    light_.initializeVisibilityBuffer();
    EXPECT_EQ(light_.getLightmapVisibilityBits()[(3 * 256 / 8) + 1], 0U);
}

// Behind the light, or off its map, or for a circular shadow outside its circle, there is none.
TEST_F(CDemonLightSceneTest, APointOutOfTheLightFallsOnNothing) {
    light_.setShadowBoundsMode(0);
    EXPECT_FALSE(light_.projectLightAndMarkVisibility({.z = 0}, false, false));
    for (const common::CVector3i &point : {common::CVector3i{.x = -1 << 16, .y = 0, .z = 1},
                                           common::CVector3i{.x = 256 << 16, .y = 0, .z = 1},
                                           common::CVector3i{.x = 0, .y = -1 << 16, .z = 1},
                                           common::CVector3i{.x = 0, .y = 256 << 16, .z = 1}}) {
        EXPECT_FALSE(light_.projectLightAndMarkVisibility(point, false, false));
    }
    light_.setShadowBoundsMode(1);
    EXPECT_FALSE(light_.projectLightAndMarkVisibility({.x = 0, .y = 0, .z = 1}, false, false));
    EXPECT_EQ(light_.projectLightAndMarkVisibility({.x = 128 << 16, .y = 0, .z = 1}, false, false),
              std::optional<std::size_t>(128));
}

} // namespace
} // namespace nocturne::core
