#pragma once

#include "platform/network.h"

namespace nocturne::platform::sdl {

// Holds SDL_net initialised; every socket it creates must be destroyed before it.
class CSdlNetwork final : public INetwork {
public:
    CSdlNetwork();
    ~CSdlNetwork() override;
    CSdlNetwork(const CSdlNetwork &) = delete;
    CSdlNetwork &operator=(const CSdlNetwork &) = delete;

    // Never null: the OS socket is opened by bindSocket.
    [[nodiscard]] std::unique_ptr<IUdpSocket> createUDPSocket() override;
};

} // namespace nocturne::platform::sdl
