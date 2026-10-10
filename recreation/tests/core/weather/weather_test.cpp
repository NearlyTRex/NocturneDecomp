#include "core/weather/weather.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWeather, IsConcrete) {
    static_assert(!std::is_abstract_v<CWeather>);
}

TEST(CWeather, Constructors) {
    static_assert(std::is_constructible_v<CWeather>);
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

} // namespace
} // namespace nocturne::core
