#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CWeather {
public:
    CWeather();
    ~CWeather();

    void update();
    void createLightningStrike(float flash_timer, int play_sound);
    void renderParticles();
    void setWeatherType(EWeatherType type);
    void setOriginAndRotation(CVector3f *direction, CVector3f *rotation);
};

} // namespace nocturne::core
