#pragma once

#include <cstdint>

namespace nocturne::core {

// The INI's aimMode; the values are frozen.
enum class EAimMode : std::uint8_t {
    AIM_MODE_AUTO = 0,
    AIM_MODE_SEMI_AUTO = 1,
    AIM_MODE_MANUAL = 2,
};

} // namespace nocturne::core
