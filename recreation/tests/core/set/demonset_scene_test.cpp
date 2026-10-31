#include "common/error/fatalerror.h"
#include "core/dcamera/fog.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/weather/weather.h"
#include "core/weather/weathertype.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

class CDemonSetSceneTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

[[nodiscard]] std::uint64_t hashOf(std::span<const int> table) {
    std::uint64_t hash = 1469598103934665603ULL;
    for (const int value : table) {
        hash = (hash ^ static_cast<std::uint32_t>(value)) * 1099511628211ULL;
    }
    return hash;
}

TEST_F(CDemonSetSceneTest, TheIntensityTableIsEmptyUntilAGammaIsSet) {
    EXPECT_TRUE(set_.getIntensityToValueLookupTable().empty());
}

// The table nocedit's own code builds at a gamma of a half: its hash and every 4096th entry.
TEST_F(CDemonSetSceneTest, AGammaOfAHalfBuildsTheOriginalsIntensityTable) {
    set_.setGamma(0x8000);
    const std::span<const int> table = set_.getIntensityToValueLookupTable();
    ASSERT_EQ(table.size(), 0x10000U);
    EXPECT_EQ(hashOf(table), 2279908216968309971ULL);
    EXPECT_EQ(table[0], 0x100);
    EXPECT_EQ(table[4096], 16384);
    EXPECT_EQ(table[std::size_t{2} * 4096], 23170);
    EXPECT_EQ(table[std::size_t{15} * 4096], 63454);
}

// At a gamma of one each intensity is itself, but never under 0x100; the camera's palette is
// rebuilt for the same gamma.
TEST_F(CDemonSetSceneTest, AGammaOfOneLeavesEachIntensityAboveTheFloor) {
    set_.setGamma(0x8000);
    set_.setGamma(0x10000);
    const std::span<const int> table = set_.getIntensityToValueLookupTable();
    EXPECT_EQ(hashOf(table), 9679581518374382979ULL);
    EXPECT_EQ(table[0xff], 0x100);
    EXPECT_EQ(table[0x101], 0x101);
    EXPECT_EQ(table[0xffff], 0xffff);
    EXPECT_EQ(set_parts_.tables.lightmap_palette[100] & 0xffU, 100U);
}

// A raining set with a spotlight between two lights of other types, a camera in the one virtual
// director box, and the spotlight's filters on disk.
class CDemonSetInitSceneTest : public CSetFileFixture {
protected:
    CDemonSetInitSceneTest() {
        givenFile("art\\glow.raw", std::string(std::size_t{64} * 64, '\x40'));
        givenFile("art\\dim.raw", std::string(std::size_t{64} * 64, '\x08'));
        ON_CALL(screen_, getWindowHeight()).WillByDefault(::testing::Return(480));
    }

    void loadScene(const std::string &vdir_boxes) {
        load({.weather = "1",
              .lights = "3\n" + lightText("Omni", 1) + lightText("Spot", 0) + lightText("Sun", 2),
              .cameras = "1\n" + cameraText("Door"),
              .vdir_boxes = vdir_boxes});
        set_.initScene();
    }
};

TEST_F(CDemonSetInitSceneTest, EachSpotlightGetsAMasterLightPlacedAsItIs) {
    loadScene("0\n");
    const auto masters = set_.getMasterLights();
    ASSERT_EQ(masters.size(), 1U);
    EXPECT_EQ(masters[0]->getCameraName(), "Spot");
    EXPECT_EQ(masters[0]->getShadowMapWidth(), 512);
    EXPECT_EQ(masters[0]->getTransformScaleFactor(), 0x18000);
    EXPECT_TRUE(masters[0]->hasFilterBuffer());
    EXPECT_NE(set_parts_.filter_cache.findFilter("glow.raw"), nullptr);
}

// The camera's tables are built, the set's fog is the active fog, the ambient level the coronas'
// blend, and the weather the set's.
TEST_F(CDemonSetInitSceneTest, TheSceneTakesTheSetsFogAmbientAndWeather) {
    EXPECT_CALL(set_parts_.loading_screen, update).Times(::testing::AnyNumber());
    EXPECT_CALL(set_parts_.loading_screen, update(::testing::StrEq("Initializing scene"), false));
    loadScene("0\n");
    EXPECT_EQ(set_parts_.camera->getFramebufferHeight(), 480);
    EXPECT_EQ(set_parts_.tables.lightmap_palette[9] & 0xffU, 9U);
    EXPECT_EQ(set_.getActiveFog().color_index.r, set_.getSceneFog().color_index.r);
    EXPECT_EQ(set_.getActiveFog().density_multiplier, 8.0F);
    EXPECT_EQ(set_parts_.tables.fog_color_index.b, 3);
    EXPECT_EQ(set_parts_.camera->getCoronaBlendFactor(),
              static_cast<int>(static_cast<double>(set_.getMinAmbientValue()) * 65535.0));
    EXPECT_EQ(set_parts_.weather.getWeatherType(), EWeatherType::WEATHER_TYPE_RAIN);
    EXPECT_EQ(set_parts_.flashlight->getPrecomputedLightingTextures().data(),
              set_parts_.light_parts.global_filters[7].getData().data());
}

// A second scene drops the first's master lights and loaded filters.
TEST_F(CDemonSetInitSceneTest, ASecondSceneStartsItsLightsAndFiltersAfresh) {
    loadScene("0\n");
    set_.getMasterLights()[0]->setLightEnabled(false);
    set_parts_.filter_cache.getFilter("glow.raw", 0)->init(0.0F, 0);
    set_.initScene();
    ASSERT_EQ(set_.getMasterLights().size(), 1U);
    EXPECT_TRUE(set_.getMasterLights()[0]->isLightEnabled());
    EXPECT_EQ(set_parts_.filter_cache.getFilterCount(), 2U);
    EXPECT_EQ(set_parts_.filter_cache.findFilter("glow.raw")->getData()[0], 0x10);
}

TEST_F(CDemonSetInitSceneTest, ACameraInABoxIsInItsGroupAndOneOutsideInNone) {
    loadScene("2\n1,2,3\n4,5,6\n0,0,0\n50,50,50\n1,1,1\n0,0,0\n");
    EXPECT_EQ(set_.getCameras()[0].getVdirZone(), 0);
    loadScene("1\n50,50,50\n1,1,1\n0,0,0\n");
    EXPECT_EQ(set_.getCameras()[0].getVdirZone(), -1);
}

// The camera at (1,2,3) is level with each box on x, and with the second on y too.
TEST_F(CDemonSetInitSceneTest, ACameraMustBeInsideOnEveryAxis) {
    loadScene("2\n1,50,3\n1,1,1\n0,0,0\n1,2,50\n1,1,1\n0,0,0\n");
    EXPECT_EQ(set_.getCameras()[0].getVdirZone(), -1);
}

TEST_F(CDemonSetInitSceneTest, MoreThanNinetySixSpotlightsIsFatal) {
    std::string lights = "97\n";
    for (int i = 0; i < 97; ++i) {
        lights += lightText("Spot", 0);
    }
    load({.lights = lights});
    EXPECT_THAT([this] { set_.initScene(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CDemonSet::initScene - Too many spotlights!")));
}

} // namespace
} // namespace nocturne::core
