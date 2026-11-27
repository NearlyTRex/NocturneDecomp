#include "core/weather/weather.h"

#include "core/actor/actor.h"
#include "core/dcamera/demoncamera.h"
#include "core/event/eventconditions.h"
#include "core/game/game.h"
#include "core/weather/weathertype.h"

#include <algorithm>
#include <cmath>

namespace nocturne::core {
namespace {

constexpr float kRainSpeed = 40.0F;
constexpr float kOtherSpeed = 5.0F;
constexpr float kMinLightningDelay = 10.0F;
constexpr float kMaxLightningDelay = 20.0F;
constexpr float kMaxFlashInterval = 10.0F;
constexpr float kMinFlashInterval = 2.0F;
// The camera's effect intensity is held in 65535ths.
constexpr float kIntensityPerLevel = static_cast<float>(1.0 / 65535.0);
constexpr float kFullIntensity = 1.0F;
// A strike's flash over the scene's light.
constexpr float kStrikeFlash = 0.65F;
// A sub-flash comes 0.1 seconds to the longest gap apart, and is 0.1 to 0.3 over the scene's
// light, for up to 0.6 seconds a unit of its brightness.
constexpr float kMinSubFlashGap = 0.1F;
constexpr float kMinSubFlash = 0.1F;
constexpr float kMaxSubFlash = 0.3F;
constexpr float kMinSubFlashSeconds = 0.01F;
constexpr float kSubFlashSecondsPerLevel = 0.6F;
// Four strikes in ten are seen; the rest are thunder alone.
constexpr float kStrikeChance = 0.4F;
// A storm's strikes flash for a tenth of a second.
constexpr float kStormStrikeSeconds = 0.1F;
// After thunder the sub-flashes are a second apart at most; the gap grows by a tenth of itself a
// second, to 15 seconds.
constexpr float kThunderFlashInterval = 1.0F;
constexpr double kFlashIntervalGrowth = 0.1;
constexpr float kLongestFlashInterval = 15.0F;

[[nodiscard]] float sceneLight(const CDemonCamera &camera) {
    return static_cast<float>(camera.getCoronaBlendFactor()) * kIntensityPerLevel;
}

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

// deferred: each of the 200 drops or flakes falling, put back 100 units up once below the
//   ground, a raindrop splashing four times where it lands, with setOriginAndRotation,
//   renderParticles and CFireEffect::createRainDrop
// deferred: the rain heard at a tenth of its volume, and stopped while there is no weather, with
//   CSound::playSound
// deferred: BW3's weather types 4 and 5: the flakes drifting up to 5 units a second each way and
//   carried by their own wind, the storm's rain at half its volume and every one of its
//   lightnings a strike, and the longest gap between sub-flashes left where it is, with BW3's
//   weather types
// nocedit 0x005eeaf0
// bw1 0x005ae190
// bw2 0x0058a660
// bw3 0x0057bda0
void CWeather::update(CDemonCamera &camera) {
    const float delta_time = actor_.getGame().getDeltaTimeFloat();
    if (lightning_active_) {
        flash_timer_ -= delta_time;
        if (flash_timer_ >= 0.0F && !isFlashBarred()) {
            float light = sceneLight(camera) - delta_time;
            if (light < base_ambient_) {
                light = base_ambient_;
                lightning_active_ = false;
                flash_timer_ = 0.0F;
            }
            camera.setEffectIntensity(light);
        } else {
            camera.setEffectIntensity(base_ambient_);
            lightning_active_ = false;
            flash_timer_ = 0.0F;
        }
    }
    if (weather_type_ != EWeatherType::WEATHER_TYPE_RAIN) {
        return;
    }
    lightning_countdown_ -= delta_time;
    if (lightning_countdown_ < 0.0F) {
        if (actor_.randomChance(kStrikeChance) == 0) {
            createThunder();
        } else {
            createLightningStrike(kStormStrikeSeconds, true, camera);
        }
    } else {
        sub_flash_interval_ -= delta_time;
        if (sub_flash_interval_ < 0.0F) {
            sub_flash_interval_ =
                actor_.getRandomFloatFromRange(kMinSubFlashGap, max_flash_interval_);
            if (!isFlashBarred()) {
                lightning_active_ = true;
                base_ambient_ = sceneLight(camera);
                const float flash = std::min(
                    actor_.getRandomFloatFromRange(kMinSubFlash, kMaxSubFlash) + base_ambient_,
                    kFullIntensity);
                flash_timer_ = actor_.getRandomFloatFromRange(kMinSubFlashSeconds,
                                                              flash * kSubFlashSecondsPerLevel);
                camera.setEffectIntensity(flash);
            }
        }
    }
    if (max_flash_interval_ >= kLongestFlashInterval) {
        max_flash_interval_ = kLongestFlashInterval;
    } else {
        max_flash_interval_ =
            static_cast<float>(std::exp((static_cast<double>(delta_time) * kFlashIntervalGrowth) +
                                        std::log(static_cast<double>(max_flash_interval_))));
    }
}

// deferred: the bolt drawn from above the set's middle, as far out as the set is wide, high or
//   half deep, along the weather's direction, and the strike heard from there, while play_sound
//   is set, with setOriginAndRotation, CFireEffect::createLightningBolt and
//   CSound::playActorSound
// deferred: BW3's storm (weather type 5): its next lightning half to three quarters of a second
//   away, and its strike hitting a visible living character, with BW3's weather types
// deferred: BW3's flash dimming back to the shown camera's ambient value, whole, rather than to
//   the scene's light, with a per-game weather table
// nocedit 0x005eeeb0
// bw1 0x005ae580
// bw2 0x0058aa30
// bw3 0x0057c2e0
void CWeather::createLightningStrike(float flash_timer, bool /*play_sound*/, CDemonCamera &camera) {
    lightning_countdown_ = actor_.getRandomFloatFromRange(kMinLightningDelay, kMaxLightningDelay);
    const float gap = actor_.getRandomFloatFromRange(kMinFlashInterval, max_flash_interval_);
    flash_timer_ = flash_timer;
    lightning_active_ = true;
    sub_flash_interval_ = gap;
    base_ambient_ = sceneLight(camera);
    if (!isFlashBarred()) {
        camera.setEffectIntensity(std::min(base_ambient_ + kStrikeFlash, kFullIntensity));
    }
}

// deferred: the thunder heard, with CSound::playSound
// nocedit 0x005ef140
// bw1 0x005ae840
// bw2 0x0058acf0
// bw3 0x0057c840
void CWeather::createThunder() {
    lightning_countdown_ = actor_.getRandomFloatFromRange(kMinLightningDelay, kMaxLightningDelay);
    sub_flash_interval_ = 0.0F;
    max_flash_interval_ = kThunderFlashInterval;
}

bool CWeather::isFlashBarred() const {
    return actor_.getEvents().evaluateCondition("noLightningFlash");
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
