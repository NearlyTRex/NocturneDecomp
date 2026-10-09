#pragma once

#include "platform/fwd.h"

#include <memory>

namespace nocturne::platform {

class INetwork {
public:
    virtual ~INetwork() = default;

    // Null when the OS refuses a socket.
    [[nodiscard]] virtual std::unique_ptr<IUdpSocket> createUDPSocket() = 0;
};

} // namespace nocturne::platform
