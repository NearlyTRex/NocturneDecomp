#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

// The set's rain or snow, and the lightning a storm flashes.
class CWeather {
public:
    // Draws from the actor random streams as the weather is set to none.
    // deferred: the 200 particle positions, with update and renderParticles
    // nocedit 0x005eeaa0
    explicit CWeather(CActor &actor);

    // A frame of the storm: a flash dims back to the scene's light, a lightning strike or thunder
    // comes when its countdown runs out, and between them sub-flashes light the scene through the
    // camera, further apart as the storm goes on, unless the events say noLightningFlash.
    void update(CDemonCamera &camera);
    // A flash for flash_timer seconds over the scene's light, and the next lightning 10 to 20
    // seconds away.
    void createLightningStrike(float flash_timer, bool play_sound, CDemonCamera &camera);
    void renderParticles();
    // Rain falls at 40 units a second, anything else at 5; the next lightning is 10 to 20 seconds
    // away and its sub-flashes 2 to 10 apart.
    void setWeatherType(EWeatherType type);
    void setOriginAndRotation(common::CVector3f *direction, common::CVector3f *rotation);

    [[nodiscard]] EWeatherType getWeatherType() const;
    [[nodiscard]] float getParticleSpeed() const;
    [[nodiscard]] bool isLightningActive() const;
    // In seconds.
    [[nodiscard]] float getMaxFlashInterval() const;
    [[nodiscard]] float getFlashTimer() const;
    [[nodiscard]] float getLightningCountdown() const;
    [[nodiscard]] float getSubFlashInterval() const;

private:
    // The next lightning 10 to 20 seconds away, heard and not seen, the sub-flashes starting again
    // at once and a second apart at most.
    void createThunder();
    // Whether the events hold noLightningFlash.
    [[nodiscard]] bool isFlashBarred() const;

    CActor &actor_;
    // The scene's light a flash dims back to, as the camera's effect intensity was at its start.
    float base_ambient_ = 0.0F;
    EWeatherType weather_type_{};
    float particle_speed_ = 0.0F;
    bool lightning_active_ = false;
    float max_flash_interval_ = 0.0F;
    float flash_timer_ = 0.0F;
    float lightning_countdown_ = 0.0F;
    float sub_flash_interval_ = 0.0F;
};

} // namespace nocturne::core
