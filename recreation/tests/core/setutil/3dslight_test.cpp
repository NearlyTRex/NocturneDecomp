#include "common/math/matrix3x3f.h"
#include "common/text/textscanner.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/setutil/3dslight.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

// A version 26 spotlight named Spot, 512 by 128, at (1,2,3) turned by (0.1,0.3,0.2), its lens
// 30mm, its aspect 1.5 and intensity a quarter, with two filters on disk and a moving one.
class C3DSLightSceneTest : public engine::CDemonRendererFixture {
protected:
    C3DSLightSceneTest() {
        givenFile("art\\glow.raw", std::string(std::size_t{64} * 64, '\x40'));
        givenFile("art\\dim.raw", std::string(std::size_t{64} * 64, '\x08'));
        const std::string text = lightText("Spot", 0);
        common::CTextScanner scanner(text);
        light_.load(scanner, 26);
    }

    C3DSLight light_;
    CLightParts parts_;
    CFilterCache cache_{dosio_};
};

TEST_F(C3DSLightSceneTest, ALightsMasterLightIsPlacedTurnedNamedAndInitialised) {
    EXPECT_EQ(light_.getFilters().size(), 2U);
    EXPECT_EQ(light_.getFilters()[0], nullptr);
    const std::unique_ptr<CDemonLight> made =
        light_.create(parts_.owners(screen_, special_), cache_);
    EXPECT_EQ(made->getShadowMapWidth(), 512);
    EXPECT_EQ(made->getShadowMapHeight(), 128);
    EXPECT_EQ(made->getShadowDepthBuffer().size(), 512U * 128U);
    EXPECT_EQ(made->getShadowBoundsMode(), 0);
    EXPECT_EQ(made->getPosition().y, 2.0F);
    common::CMatrix3x3f turned;
    turned.buildRotationMatrix(light_.getOrient());
    EXPECT_EQ(made->getRotationMatrix().m[1].z, turned.m[1].z);
    EXPECT_EQ(made->getFocalLength(), 30.0F);
    EXPECT_EQ(made->getCameraName(), "Spot");
    ASSERT_NE(light_.getFilters()[0], nullptr);
    EXPECT_EQ(light_.getFilters()[0]->getName(), "glow.raw");
    EXPECT_EQ(light_.getFilters()[1], cache_.findFilter("dim.raw"));
}

// With no filters a light's shadow is circular.
TEST_F(C3DSLightSceneTest, ALightWithNoFiltersHasACircularShadow) {
    C3DSLight plain;
    const std::unique_ptr<CDemonLight> made =
        plain.create(parts_.owners(screen_, special_), cache_);
    EXPECT_EQ(made->getShadowBoundsMode(), 1);
    EXPECT_EQ(made->getShadowMapWidth(), 256);
    EXPECT_EQ(cache_.getFilterCount(), 0U);
}

// The aspect becomes 16.16, the intensity picks the filter, and a moving filter gets a buffer.
TEST_F(C3DSLightSceneTest, ApplyingGivesTheLightItsAspectIntensityAndMovingFilter) {
    CDemonLight light{parts_.owners(screen_, special_), 256, 256};
    light_.apply(light);
    EXPECT_EQ(light.getCameraName(), "Spot");
    EXPECT_EQ(light.getPosition().x, 1.0F);
    EXPECT_EQ(light.getTransformScaleFactor(), 0x18000);
    EXPECT_EQ(light.getVolumetricIntensity(), 0.25F);
    EXPECT_EQ(light.getPrecomputedLightingTextures().data(),
              parts_.global_filters[1].getData().data());
    EXPECT_TRUE(light.hasFilterBuffer());
    C3DSLight still;
    CDemonLight other{parts_.owners(screen_, special_), 256, 256};
    still.apply(other);
    EXPECT_FALSE(other.hasFilterBuffer());
}

TEST(C3DSLight, IsConcrete) {
    static_assert(!std::is_abstract_v<C3DSLight>);
}

TEST(C3DSLight, Constructors) {
    static_assert(std::is_constructible_v<C3DSLight>);
}

TEST(C3DSLight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C3DSLight::load),
                                 void (C3DSLight::*)(common::CTextScanner &, int)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::create),
                                 std::unique_ptr<CDemonLight> (C3DSLight::*)(
                                     const SDemonLightOwners &, CFilterCache &)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::apply), void (C3DSLight::*)(CDemonLight &)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::doNothing), void (C3DSLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::process), void (C3DSLight::*)(CDemonLight *, int)>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::advanceFilter), void (C3DSLight::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::setFilterFrame),
                                 void (C3DSLight::*)(int, CDemonLight *)>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::addFilter), void (C3DSLight::*)(char *, float, int)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::isVisible), int (C3DSLight::*)()>);
}

} // namespace
} // namespace nocturne::core
