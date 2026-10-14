#pragma once

#include <cstdint>

namespace nocturne::core {

// Which end of a network game this machine is.
enum class EConnectionType : std::uint8_t {
    CONNECTION_NONE = 0,
    CONNECTION_HOST = 1,
    CONNECTION_CLIENT = 2,
};

} // namespace nocturne::core
