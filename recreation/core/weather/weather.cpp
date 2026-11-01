#include "core/weather/weather.h"

#include "core/actor/actor.h"
#include "core/weather/weathertype.h"

namespace nocturne::core {
namespace {

constexpr float kRainSpeed = 40.0F;
constexpr float kOtherSpeed = 5.0F;
constexpr float kMinLightningDelay = 10.0F;
constexpr float kMaxLightningDelay = 20.0F;
constexpr float kMaxFlashInterval = 10.0F;
constexpr float kMinFlashInterval = 2.0F;

} // namespace

// nocedit 0x005eead0
CWeather::CWeather(CActor &actor) : actor_(actor) {
    setWeatherType(EWeatherType::WEATHER_TYPE_NONE);
}

// nocedit 0x005ef8c0
void CWeather::setWeatherType(EWeatherType type) {
    weather_type_ = type;
    particle_speed_ = type == EWeatherType::WEATHER_TYPE_RAIN ? kRainSpeed : kOtherSpeed;
    lightning_countdown_ = actor_.getRandomFloatFromRange(kMinLightningDelay, kMaxLightningDelay);
    lightning_active_ = false;
    max_flash_interval_ = kMaxFlashInterval;
    flash_timer_ = 0.0F;
    sub_flash_interval_ = actor_.getRandomFloatFromRange(kMinFlashInterval, max_flash_interval_);
}

EWeatherType CWeather::getWeatherType() const {
    return weather_type_;
}

float CWeather::getParticleSpeed() const {
    return particle_speed_;
}

bool CWeather::isLightningActive() const {
    return lightning_active_;
}

float CWeather::getMaxFlashInterval() const {
    return max_flash_interval_;
}

float CWeather::getFlashTimer() const {
    return flash_timer_;
}

float CWeather::getLightningCountdown() const {
    return lightning_countdown_;
}

float CWeather::getSubFlashInterval() const {
    return sub_flash_interval_;
}

} // namespace nocturne::core
