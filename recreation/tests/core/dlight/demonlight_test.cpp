#include "core/dfilter/demonfilter.h"
#include "core/dlight/demonlight.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
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
                                 std::uint16_t *(CDemonLight::*)(common::CVector3i *, std::uint8_t,
                                                                 std::uint8_t)>);
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
    CDemonLight light_{parts_.owners(screen_, special_), 256, 256};
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
    CDemonLight wide{parts_.owners(screen_, special_), 512, 512};
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

} // namespace
} // namespace nocturne::core
