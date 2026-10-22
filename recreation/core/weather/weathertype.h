#pragma once

#include <cstdint>

namespace nocturne::core {

// A set file's weather; the values are frozen.
enum class EWeatherType : std::uint8_t {
    WEATHER_TYPE_NONE = 0,
    WEATHER_TYPE_RAIN = 1,
    WEATHER_TYPE_SNOW = 2,
};

} // namespace nocturne::core
