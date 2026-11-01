#include "core/weather/weather.h"
#include "core/weather/weathertype.h"
#include "tests/mocks/core/testclasses.h"

#include <gtest/gtest.h>

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
    static_assert(std::is_same_v<decltype(&CWeather::update), void (CWeather::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWeather::createLightningStrike), void (CWeather::*)(float, int)>);
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

} // namespace
} // namespace nocturne::core
