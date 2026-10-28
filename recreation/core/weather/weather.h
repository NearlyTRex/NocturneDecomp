#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CWeather {
public:
    // deferred: the game's weather and its 200 particle positions, with this constructor
    // nocedit 0x005eeaa0
    CWeather();

    void update();
    void createLightningStrike(float flash_timer, int play_sound);
    void renderParticles();
    void setWeatherType(EWeatherType type);
    void setOriginAndRotation(common::CVector3f *direction, common::CVector3f *rotation);
};

} // namespace nocturne::core
