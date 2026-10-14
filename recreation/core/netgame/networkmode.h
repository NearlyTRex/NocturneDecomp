#pragma once

#include <cstdint>

namespace nocturne::core {

// How far a network game has got.
enum class ENetworkMode : std::uint8_t {
    NET_MODE_DISCONNECTED = 0,
    NET_MODE_LOBBY = 1,
    NET_MODE_SYNCING = 2,
    NET_MODE_PLAYING = 3,
};

} // namespace nocturne::core
