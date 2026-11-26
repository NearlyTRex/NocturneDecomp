#include "common/error/fatalerror.h"
#include "core/actor/demonactor.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dcamera/fog.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/dlight/lightglow.h"
#include "core/dlight/lightmappixel.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/rect.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/water/water.h"
#include "core/weather/weather.h"
#include "core/weather/weathertype.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

class CDemonSetSceneTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
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
        for (std::size_t row = 0; row < kRows; ++row) {
            rows_.at(row) = pixels_.data() + (row * kColumns);
            depth_rows_.at(row) = depths_.data() + (row * kColumns);
        }
        ON_CALL(screen_, getScreenRows()).WillByDefault(::testing::Return(std::span(rows_)));
        ON_CALL(screen_, getZBufferRows()).WillByDefault(::testing::Return(std::span(depth_rows_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(::testing::ReturnRef(masks_));
    }

    engine::SColorMasks masks_;
    // A 640 by 480 screen of 32-bit pixels and depths.
    static constexpr std::size_t kColumns = 640;
    static constexpr std::size_t kRows = 480;
    std::vector<std::uint32_t> pixels_ = std::vector<std::uint32_t>(kColumns * kRows);
    std::vector<std::uint32_t> depths_ = std::vector<std::uint32_t>(kColumns * kRows);
    std::array<void *, kRows> rows_{};
    std::array<std::uint32_t *, kRows> depth_rows_{};

    void loadScene(const std::string &vdir_boxes) {
        load({.weather = "1",
              .lights = "3\n" + lightText("Omni", 1) + lightText("Spot", 0) + lightText("Sun", 2),
              .cameras = "1\n" + cameraText("Door"),
              .vdir_boxes = vdir_boxes});
        set_.initScene();
    }
};

// Each master light's shadow map is drawn from the set, which here has no geometry, so its reach
// is nothing, and the screen's rows are put back.
TEST_F(CDemonSetInitSceneTest, EachSpotlightGetsAMasterLightPlacedAsItIs) {
    loadScene("0\n");
    const auto masters = set_.getMasterLights();
    ASSERT_EQ(masters.size(), 1U);
    EXPECT_EQ(masters[0]->getCameraName(), "Spot");
    EXPECT_EQ(masters[0]->getShadowMapWidth(), 512);
    EXPECT_EQ(masters[0]->getTransformScaleFactor(), 0x18000);
    EXPECT_TRUE(masters[0]->hasFilterBuffer());
    EXPECT_NE(set_parts_.filter_cache.findFilter("glow.raw"), nullptr);
    EXPECT_EQ(masters[0]->getMaxDistance(), 0.0F);
    EXPECT_FALSE(masters[0]->isSceneOpen());
    EXPECT_EQ(rows_[0], pixels_.data());
    EXPECT_EQ(demon_renderer_.isShadowPass(), 0);
}

// A set of three spotlights and an omni light after the first: the first and last spotlights seen
// from its one camera in a rectangle of its display, the middle one not, and the last named the
// moon.
class CDemonSetSpotlightTest : public CDemonSetInitSceneTest {
protected:
    CDemonSetSpotlightTest() {
        const auto seen = [](const std::string &name) {
            std::string text = lightText(name, 0);
            text.replace(text.find("visible\n0\n"), std::string_view("visible\n0\n").size(),
                         "visible\n1\n0,2,300,4,200\n");
            return text;
        };
        givenFile("data\\pier.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                            {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        load({.lights = "4\n" + seen("Lamp") + lightText("Omni", 1) + lightText("Hidden", 0) +
                        seen("moonlight"),
              .cameras = "1\n" + cameraText("Door"),
              .pvs = "1\n\t0\n"});
        set_.initScene();
    }

    [[nodiscard]] CDemonLight &master(std::size_t index) const {
        return *set_.getMasterLights()[index];
    }
};

// Showing the camera gathers the spotlights it sees with their rectangles and precomputes each
// one's light over the backdrop.
TEST_F(CDemonSetSpotlightTest, ShowingACameraGathersTheSpotlightsItSees) {
    set_.setCameraView(0);
    const std::span<const SShownSpotlight> shown = set_.getShownSpotlights();
    ASSERT_EQ(shown.size(), 2U);
    EXPECT_EQ(shown[0].light, &master(0));
    EXPECT_EQ(shown[0].bounds, (CRect{.x_min = 2, .x_max = 300, .y_min = 4, .y_max = 200}));
    EXPECT_EQ(shown[1].light, &master(2));
    EXPECT_FALSE(master(0).getLightMap().empty());
    EXPECT_TRUE(master(1).getLightMap().empty());
    EXPECT_EQ(master(0).getLeftExtents()[3], CDemonLight::kNoLeftExtent);
}

// Each frame a light's events switch it on and off, the off winning, and the moon is on only
// while the director's focus was outside every box at the last switch.
TEST_F(CDemonSetSpotlightTest, TheEventsSwitchTheLightsAndTheMoonFollowsTheBoxes) {
    ON_CALL(set_parts_.events, evaluateCondition(::testing::_))
        .WillByDefault(::testing::Return(false));
    ON_CALL(set_parts_.events, evaluateCondition(::testing::StrEq("Hiddenoff")))
        .WillByDefault(::testing::Return(true));
    ON_CALL(set_parts_.events, evaluateCondition(::testing::StrEq("Lampon")))
        .WillByDefault(::testing::Return(true));
    master(0).setLightEnabled(false);
    set_.process();
    EXPECT_TRUE(master(0).isLightEnabled());
    EXPECT_FALSE(master(1).isLightEnabled());
    EXPECT_FALSE(master(2).isLightEnabled());
    set_.toggleLights();
    EXPECT_FALSE(set_.getLightsOn());
    set_.process();
    EXPECT_TRUE(master(0).isLightEnabled());
    set_.toggleLights();
    EXPECT_TRUE(set_.getLightsOn());
}

// A scene's coronas take the light of each shown spotlight that is on.
// The lamp's map is made to light one pixel at the middle of its shadow map, which nothing is in
// front of.
TEST_F(CDemonSetSpotlightTest, TheSceneAddsTheLightOfEachShownSpotlightThatIsOn) {
    set_.setCameraView(0);
    CDemonLight &lamp = master(0);
    const std::span<const std::uint8_t> beam = lamp.getPrecomputedLightingTextures();
    const auto texel = static_cast<std::uint32_t>(std::ranges::max_element(beam) - beam.begin());
    const std::size_t middle = (static_cast<std::size_t>(lamp.getShadowMapHeight() / 2) *
                                static_cast<std::size_t>(lamp.getShadowMapWidth())) +
                               static_cast<std::size_t>(lamp.getShadowMapWidth() / 2);
    ASSERT_EQ(lamp.getShadowDepthBuffer()[middle], 0xffffU);
    std::vector<SLightMapPixel> map(std::size_t{320} * 240);
    map[(5 * 320) + 7] = {
        .depth = 1, .shadow_entry = static_cast<std::uint32_t>(middle), .texel = texel};
    lamp.setLightMap(map);
    lamp.getLeftExtents()[5] = 7;
    lamp.getRightExtents()[5] = 7;
    master(2).setLightEnabled(false);
    set_.renderScene();
    const std::uint8_t start = set_parts_.tables.corona_light[(4 * 320) + 7];
    EXPECT_EQ(set_parts_.tables.corona_light[(5 * 320) + 7],
              static_cast<std::uint8_t>(start + beam[texel]));
    lamp.setLightEnabled(false);
    set_.renderScene();
    EXPECT_EQ(set_parts_.tables.corona_light[(5 * 320) + 7], start);
}

// The same set with two actors: the first draws something wherever it is drawn, the second
// nothing, and each notes the light whose scene each of its draws is in.
class CDemonSetSpotlightActorTest : public CDemonSetSpotlightTest {
protected:
    CDemonSetSpotlightActorTest() {
        for (CTestActor *actor : {&drawing_, &empty_}) {
            actor->setRenderable(true);
            actor->onRenderBackground([this](int /*layer_flag*/) { noteBackground(); });
        }
        drawing_.onRenderOpaque([this] {
            noteOpaque(drawing_lights_);
            return 1;
        });
        empty_.onRenderOpaque([this] {
            noteOpaque(empty_lights_);
            return 0;
        });
        set_.setActors({&drawing_, &empty_});
        set_.buildActorTypeLists();
    }

    // The background drawn into a light's master depths, with only depths drawn.
    void noteBackground() {
        const CDemonCamera *scene = set_parts_.tables.scene_camera;
        if (scene != &*set_parts_.camera && rows_[0] != pixels_.data()) {
            EXPECT_EQ(demon_renderer_.isShadowPass(), 1);
            background_lights_.push_back(scene);
        }
    }

    void noteOpaque(std::vector<const CDemonLight *> &lights) const {
        if (set_parts_.tables.shadow_light != nullptr) {
            EXPECT_EQ(set_parts_.tables.scene_camera, set_parts_.tables.shadow_light);
            EXPECT_EQ(demon_renderer_.isShadowPass(), 1);
        }
        lights.push_back(set_parts_.tables.shadow_light);
    }

    [[nodiscard]] std::size_t mapSize() const {
        return master(0).getShadowDepthBuffer().size();
    }

    CTestActor drawing_{kTestLeafType};
    CTestActor empty_{kTestLeafType};
    std::vector<const CDemonCamera *> background_lights_;
    std::vector<const CDemonLight *> drawing_lights_;
    std::vector<const CDemonLight *> empty_lights_;
};

// Each shown spotlight keeps its map as master depths from the shared budget, which the actors'
// backgrounds are drawn into; once the frame is lit the actors are drawn into each map that is
// on, here only the lamp's, as showing the camera turned the moon off.
TEST_F(CDemonSetSpotlightActorTest, ShowingACameraKeepsEachSpotlightsMasterDepths) {
    set_.setCameraView(0);
    EXPECT_EQ(master(0).getMasterZBuffer().size(), mapSize());
    EXPECT_TRUE(master(1).getMasterZBuffer().empty());
    EXPECT_EQ(master(2).getMasterZBuffer().size(), master(2).getShadowDepthBuffer().size());
    EXPECT_EQ(set_parts_.tables.restore_memory_used,
              mapSize() + master(2).getShadowDepthBuffer().size() + 16);
    EXPECT_EQ(background_lights_,
              (std::vector<const CDemonCamera *>{&master(0), &master(0), &master(2), &master(2)}));
    EXPECT_FALSE(master(2).isLightEnabled());
    EXPECT_EQ(drawing_lights_, std::vector<const CDemonLight *>{&master(0)});
    EXPECT_EQ(set_parts_.tables.shadow_light, nullptr);
    EXPECT_EQ(demon_renderer_.getRasterizerDepthBias(), 0x8000);
}

// One that drew in a spotlight stays lit by one until the camera changes; one that drew nothing
// loses the spotlight's pass but keeps having been lit.
TEST_F(CDemonSetSpotlightActorTest, EachActorKeepsItsSpotlightBitWhileItDrewThere) {
    set_.setCameraView(0);
    master(2).setLightEnabled(true);
    SDrawnTransform lit = empty_.getDrawnTransform();
    lit.dirty_flags = SDrawnTransform::kSpotlightPass | SDrawnTransform::kLitBySpotlight;
    empty_.setDrawnTransform(lit);
    set_.renderStaticLights();
    EXPECT_EQ(drawing_.getDrawnTransform().dirty_flags &
                  (SDrawnTransform::kSpotlightPass | SDrawnTransform::kLitBySpotlight),
              SDrawnTransform::kSpotlightPass | SDrawnTransform::kLitBySpotlight);
    EXPECT_EQ(empty_.getDrawnTransform().dirty_flags, SDrawnTransform::kLitBySpotlight);
    EXPECT_EQ(empty_lights_.back(), &master(2));
}

// Without the spotlight's passes due, an actor where it was drawn is left out of the light's
// list; with only having been lit by one, it is drawn again.
TEST_F(CDemonSetSpotlightActorTest, AnActorOnceLitIsDrawnIntoTheSpotlightsAgain) {
    set_.setCameraView(0);
    master(2).setLightEnabled(true);
    for (CTestActor *actor : {&drawing_, &empty_}) {
        SDrawnTransform drawn = actor->getDrawnTransform();
        drawn.dirty_flags = 0;
        actor->setDrawnTransform(drawn);
    }
    SDrawnTransform lit = drawing_.getDrawnTransform();
    lit.dirty_flags = SDrawnTransform::kLitBySpotlight;
    drawing_.setDrawnTransform(lit);
    drawing_lights_.clear();
    empty_lights_.clear();
    set_.renderStaticLights();
    EXPECT_EQ(drawing_lights_, (std::vector<const CDemonLight *>{&master(0), &master(2)}));
    EXPECT_TRUE(empty_lights_.empty());
}

// With shadows off nothing is drawn into the maps, and a spotlight that is off is passed over.
TEST_F(CDemonSetSpotlightActorTest, OnlyShadowsOnDrawTheSpotlightsThatAreOn) {
    set_.setCameraView(0);
    master(2).setLightEnabled(true);
    drawing_lights_.clear();
    CGame &game = set_parts_.classes.getGame();
    game.shadow_flag = 0;
    set_.renderStaticLights();
    EXPECT_TRUE(drawing_lights_.empty());
    game.shadow_flag = 1;
    master(0).setLightEnabled(false);
    set_.renderStaticLights();
    EXPECT_EQ(drawing_lights_, std::vector<const CDemonLight *>{&master(2)});
}

// What the actors drew into a spotlight's map is put back after the scene, and before the next
// camera is shown, so its master depths are taken from the map as the set left it.
TEST_F(CDemonSetSpotlightActorTest, TheMapsGetTheirMasterDepthsBack) {
    set_.setCameraView(0);
    CDemonLight &lamp = master(0);
    const auto width = static_cast<std::size_t>(lamp.getShadowMapWidth());
    const std::uint16_t master_depth = lamp.getMasterZBuffer()[(3 * width) + 4];
    drawing_.onRenderOpaque([this, &lamp] {
        if (set_parts_.tables.shadow_light == &lamp) {
            static_cast<std::uint16_t *>(rows_[3])[4] = 0x0123;
            lamp.pushRect({.x_min = 4, .x_max = 4, .y_min = 3, .y_max = 3});
        }
        return 1;
    });
    set_.renderStaticLights();
    ASSERT_EQ(lamp.getShadowDepthBuffer()[(3 * width) + 4], 0x0123U);
    set_.renderScene();
    EXPECT_EQ(lamp.getShadowDepthBuffer()[(3 * width) + 4], master_depth);
    set_.renderStaticLights();
    set_.setCameraView(0);
    EXPECT_EQ(lamp.getMasterZBuffer()[(3 * width) + 4], master_depth);
    EXPECT_EQ(set_parts_.tables.restore_memory_used,
              mapSize() + master(2).getShadowDepthBuffer().size() + 16);
}

// Shown before its master lights are made, a set shows no spotlight and leaves them alone.
TEST_F(CDemonSetInitSceneTest, ASetWithoutMasterLightsShowsNoSpotlight) {
    std::string text = lightText("Lamp", 0);
    text.replace(text.find("visible\n0\n"), std::string_view("visible\n0\n").size(),
                 "visible\n1\n0,2,300,4,200\n");
    givenFile("data\\pier.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                        {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
    load({.lights = "1\n" + text, .cameras = "1\n" + cameraText("Door"), .pvs = "1\n\t0\n"});
    set_parts_.camera->init(480);
    set_.setCameraView(0);
    EXPECT_TRUE(set_.getShownSpotlights().empty());
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

// The art of the headlight, the flare sprites and the water, each 32 by 32, but for any named
// missing.
class CDemonSetAssetsTest : public CDemonSetSceneTest {
protected:
    CDemonSetAssetsTest() {
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(::testing::Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(::testing::Return(std::span<std::uint32_t, 256>(palette32_)));
    }

    void givenArt(std::string_view missing = "") {
        std::vector<std::string> names = {"HEADLITE.RAW", "SUN06.RAW", "SUN07.RAW", "SUN09.RAW",
                                          "SUNCRAM.RAW",  "SUN11.RAW", "SUN12.RAW", "SUN13.RAW"};
        for (int frame = 0; frame < 16; ++frame) {
            names.push_back(std::format("WATER{}.RAW", frame));
        }
        for (const std::string &name : names) {
            if (name != missing) {
                givenFile("art\\" + name, std::string(std::size_t{32} * 32, '\x10'));
            }
        }
    }

    std::array<std::uint16_t, 256> palette16_{};
    std::array<std::uint32_t, 256> palette32_{};
};

// Each texture is found in the cache; the cramped sprite is loaded once for its three places.
TEST_F(CDemonSetAssetsTest, TheGlowAndWaterTexturesAreLoaded) {
    givenArt();
    set_.loadAssets();
    const SLightGlowTextures &glow = set_parts_.light_parts.glow;
    EXPECT_EQ(glow.headlight.cache_index, 0);
    EXPECT_EQ(glow.sprites[0].cache_index, 1);
    EXPECT_EQ(glow.sprites[3].cache_index, 4);
    EXPECT_EQ(glow.sprites[7].cache_index, 4);
    EXPECT_EQ(glow.sprites[8].cache_index, 4);
    const std::span<const platform::SMRGLTextureBasic> water = set_parts_.water.getTextures();
    EXPECT_EQ(water[0].texture_name, "WATER0.RAW");
    EXPECT_EQ(water[0].cache_index, 8);
    EXPECT_EQ(water[15].texture_name, "WATER15.RAW");
    EXPECT_EQ(water[15].cache_index, 23);
}

TEST_F(CDemonSetAssetsTest, AMissingWaterFrameIsFatal) {
    givenArt("WATER15.RAW");
    EXPECT_THAT([this] { set_.loadAssets(); },
                ThrowsMessage<common::CFatalError>(::testing::StartsWith(
                    "CTextureCache::load - Bad texture length : WATER15.RAW")));
}

} // namespace
} // namespace nocturne::core
