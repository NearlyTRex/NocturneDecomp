#pragma once

#include <cstdint>

namespace nocturne::core {

// A trigger's volume; files save the number.
enum class ETriggerShape : std::uint8_t {
    kBox = 0,
    kCylinder = 1,
};

} // namespace nocturne::core
