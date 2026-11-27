#include "core/dcamera/demoncamera.h"
#include "core/dlight/demonlight.h"
#include "core/game/game.h"
#include "core/weather/weather.h"
#include "core/weather/weathertype.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/core/mockeventconditions.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWeather, IsConcrete) {
    static_assert(!std::is_abstract_v<CWeather>);
}

TEST(CWeather, Constructors) {
    static_assert(std::is_constructible_v<CWeather, CActor &>);
    static_assert(!std::is_default_constructible_v<CWeather>);
}

TEST(CWeather, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWeather::update), void (CWeather::*)(CDemonCamera &)>);
    static_assert(std::is_same_v<decltype(&CWeather::createLightningStrike),
                                 void (CWeather::*)(float, bool, CDemonCamera &)>);
    static_assert(std::is_same_v<decltype(&CWeather::renderParticles), void (CWeather::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWeather::setWeatherType), void (CWeather::*)(EWeatherType)>);
    static_assert(std::is_same_v<decltype(&CWeather::setOriginAndRotation),
                                 void (CWeather::*)(common::CVector3f *, common::CVector3f *)>);
}

// No weather, falling slowly, the next lightning 10 to 20 seconds away and its sub-flashes 2 to
// 10 apart.
TEST(CWeather, TheWeatherStartsAsNone) {
    CTestClasses classes;
    const CWeather weather{classes.get()};
    EXPECT_EQ(weather.getWeatherType(), EWeatherType::WEATHER_TYPE_NONE);
    EXPECT_EQ(weather.getParticleSpeed(), 5.0F);
    EXPECT_FALSE(weather.isLightningActive());
    EXPECT_EQ(weather.getMaxFlashInterval(), 10.0F);
    EXPECT_EQ(weather.getFlashTimer(), 0.0F);
    EXPECT_GE(weather.getLightningCountdown(), 10.0F);
    EXPECT_LE(weather.getLightningCountdown(), 20.0F);
    EXPECT_GE(weather.getSubFlashInterval(), 2.0F);
    EXPECT_LE(weather.getSubFlashInterval(), 10.0F);
}

TEST(CWeather, RainFallsFasterThanSnow) {
    CTestClasses classes;
    CWeather weather{classes.get()};
    weather.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
    EXPECT_EQ(weather.getWeatherType(), EWeatherType::WEATHER_TYPE_RAIN);
    EXPECT_EQ(weather.getParticleSpeed(), 40.0F);
    weather.setWeatherType(EWeatherType::WEATHER_TYPE_SNOW);
    EXPECT_EQ(weather.getParticleSpeed(), 5.0F);
}

// Setting the weather again draws a new lightning time.
TEST(CWeather, EachSettingDrawsTheLightningAfresh) {
    CTestClasses classes;
    CWeather weather{classes.get()};
    const float first = weather.getLightningCountdown();
    weather.setWeatherType(EWeatherType::WEATHER_TYPE_NONE);
    EXPECT_NE(weather.getLightningCountdown(), first);
}

// A storm over a scene whose light is a fifth, its frames as long as each test says.
class CWeatherStormTest : public engine::CDemonRendererFixture {
protected:
    static constexpr float kSceneLight = 0.2F;
    // The camera's effect intensity is held in 65535ths, truncated.
    static constexpr double kLevels = 65535.0;

    CWeatherStormTest() {
        camera_.setEffectIntensity(kSceneLight);
    }

    void frame(float seconds) {
        classes_.getGame().slamDT(seconds);
        weather_.update(camera_);
    }

    [[nodiscard]] int light() const {
        return camera_.getCoronaBlendFactor();
    }

    [[nodiscard]] static int levelOf(float intensity) {
        return static_cast<int>(static_cast<double>(intensity) * kLevels);
    }

    // The scene's light as the camera holds it, back in 0 to 1.
    [[nodiscard]] float sceneLight() const {
        return static_cast<float>(light()) * static_cast<float>(1.0 / kLevels);
    }

    void barFlashes() {
        ON_CALL(classes_.getEvents(), evaluateCondition(std::string_view("noLightningFlash")))
            .WillByDefault(::testing::Return(true));
    }

    CTestClasses classes_;
    CLightParts parts_;
    SDemonLightOwners owners_ =
        parts_.owners(screen_, special_, demon_renderer_, dosio_, matrix_, two_d_);
    CDemonCamera camera_{owners_.camera};
    CWeather weather_{classes_.get()};
};

// A strike flashes 0.65 over the scene's light and sets the next lightning 10 to 20 seconds away.
TEST_F(CWeatherStormTest, AStrikeFlashesOverTheScenesLight) {
    const float scene = sceneLight();
    weather_.createLightningStrike(0.5F, true, camera_);
    EXPECT_TRUE(weather_.isLightningActive());
    EXPECT_EQ(weather_.getFlashTimer(), 0.5F);
    EXPECT_EQ(light(), levelOf(scene + 0.65F));
    EXPECT_GE(weather_.getLightningCountdown(), 10.0F);
    EXPECT_LE(weather_.getLightningCountdown(), 20.0F);
    EXPECT_GE(weather_.getSubFlashInterval(), 2.0F);
    EXPECT_LE(weather_.getSubFlashInterval(), 10.0F);
}

TEST_F(CWeatherStormTest, AStrikeOverABrightSceneFlashesFull) {
    camera_.setEffectIntensity(0.9F);
    weather_.createLightningStrike(0.5F, false, camera_);
    EXPECT_EQ(light(), levelOf(1.0F));
}

// A flash dims by its frame's time a second until its time runs out, then the scene's light
// returns.
TEST_F(CWeatherStormTest, AFlashDimsThenEnds) {
    const float scene = sceneLight();
    weather_.createLightningStrike(0.5F, true, camera_);
    const float flash = sceneLight();
    frame(0.1F);
    EXPECT_EQ(light(), levelOf(flash - 0.1F));
    EXPECT_TRUE(weather_.isLightningActive());
    frame(0.5F);
    EXPECT_EQ(light(), levelOf(scene));
    EXPECT_FALSE(weather_.isLightningActive());
    EXPECT_EQ(weather_.getFlashTimer(), 0.0F);
}

// A flash dimmed below the scene's light stops at it.
TEST_F(CWeatherStormTest, AFlashDimsNoLowerThanTheScenesLight) {
    const float scene = sceneLight();
    weather_.createLightningStrike(10.0F, true, camera_);
    frame(0.7F);
    EXPECT_EQ(light(), levelOf(scene));
    EXPECT_FALSE(weather_.isLightningActive());
    EXPECT_EQ(weather_.getFlashTimer(), 0.0F);
}

// noLightningFlash keeps a strike from flashing, and puts out a flash already lit.
TEST_F(CWeatherStormTest, NoLightningFlashBarsTheFlashes) {
    const float scene = sceneLight();
    weather_.createLightningStrike(10.0F, true, camera_);
    barFlashes();
    frame(0.1F);
    EXPECT_EQ(light(), levelOf(scene));
    EXPECT_FALSE(weather_.isLightningActive());
    const int unlit = light();
    weather_.createLightningStrike(10.0F, true, camera_);
    EXPECT_EQ(light(), unlit);
    EXPECT_TRUE(weather_.isLightningActive());
}

// Without rain there is no lightning to come, and the gap between sub-flashes stays.
TEST_F(CWeatherStormTest, SnowBringsNoLightning) {
    weather_.setWeatherType(EWeatherType::WEATHER_TYPE_SNOW);
    const float countdown = weather_.getLightningCountdown();
    frame(100.0F);
    EXPECT_EQ(weather_.getLightningCountdown(), countdown);
    EXPECT_EQ(weather_.getMaxFlashInterval(), 10.0F);
    EXPECT_FALSE(weather_.isLightningActive());
}

// In the rain the longest gap between sub-flashes grows by a tenth of itself a second, to 15.
TEST_F(CWeatherStormTest, TheRainsSubFlashesSpreadOut) {
    weather_.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
    frame(0.1F);
    EXPECT_FLOAT_EQ(weather_.getMaxFlashInterval(),
                    static_cast<float>(std::exp(0.01 + std::log(10.0))));
    for (int i = 0; i < 20; ++i) {
        frame(0.25F);
    }
    EXPECT_EQ(weather_.getMaxFlashInterval(), 15.0F);
}

// Before the lightning comes, a sub-flash lights the scene 0.1 to 0.3 over its light, for up to
// 0.6 seconds a unit of its brightness, and the next is 0.1 seconds to the longest gap away.
TEST_F(CWeatherStormTest, TheRainSubFlashesBeforeTheLightning) {
    weather_.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
    const float scene = sceneLight();
    for (int i = 0; i < 40 && !weather_.isLightningActive(); ++i) {
        frame(0.25F);
    }
    ASSERT_TRUE(weather_.isLightningActive());
    EXPECT_GE(light(), levelOf(scene + 0.1F) - 1);
    EXPECT_LE(light(), levelOf(scene + 0.3F) + 1);
    // The camera holds the flash truncated, so its time may run a hair past what that says.
    EXPECT_LE(weather_.getFlashTimer(), (sceneLight() * 0.6F) + 0.001F);
    EXPECT_GE(weather_.getSubFlashInterval(), 0.1F);
    EXPECT_GT(weather_.getLightningCountdown(), 0.0F);
}

// A barred sub-flash still sets the next one's time.
TEST_F(CWeatherStormTest, ABarredSubFlashLightsNothing) {
    weather_.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
    barFlashes();
    for (int i = 0; i < 40; ++i) {
        frame(0.25F);
        EXPECT_FALSE(weather_.isLightningActive());
        EXPECT_EQ(light(), levelOf(kSceneLight));
    }
}

// When the countdown runs out the lightning strikes, flashing, or is thunder alone, the
// sub-flashes then a second apart at most and starting at once; either way the next is 10 to 20
// seconds off.
TEST_F(CWeatherStormTest, TheLightningComesAsAStrikeOrThunder) {
    weather_.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
    bool struck = false;
    bool thundered = false;
    for (int storm = 0; storm < 40 && !(struck && thundered); ++storm) {
        weather_.setWeatherType(EWeatherType::WEATHER_TYPE_RAIN);
        frame(25.0F);
        EXPECT_GE(weather_.getLightningCountdown(), 10.0F);
        EXPECT_LE(weather_.getLightningCountdown(), 20.0F);
        if (weather_.isLightningActive()) {
            struck = true;
        } else {
            thundered = true;
            EXPECT_EQ(weather_.getSubFlashInterval(), 0.0F);
            EXPECT_FLOAT_EQ(weather_.getMaxFlashInterval(),
                            static_cast<float>(std::exp(2.5 + std::log(1.0))));
        }
        frame(0.0F);
        camera_.setEffectIntensity(kSceneLight);
    }
    EXPECT_TRUE(struck);
    EXPECT_TRUE(thundered);
}

} // namespace
} // namespace nocturne::core
