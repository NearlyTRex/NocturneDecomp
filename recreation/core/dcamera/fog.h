#pragma once

#include "common/math/vector3f.h"
#include "core/color3i.h"

namespace nocturne::core {

// A set's or a camera's fog: its colour, how it drifts, where it thins out, how thick it is, and
// the temperature in Fahrenheit, below freezing showing characters' breath.
struct SFog {
    // What files that hold no temperature get.
    static constexpr float kDefaultTemperature = 50.0F;

    CColor3i color_index;
    common::CVector3f scroll;
    float height_threshold = 0.0F;
    float density_multiplier = 0.0F;
    float temperature = 0.0F;
};

} // namespace nocturne::core
