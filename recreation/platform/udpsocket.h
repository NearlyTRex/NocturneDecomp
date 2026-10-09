#pragma once

#include "platform/fwd.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::platform {

// Closed on destruction.
class IUdpSocket {
public:
    virtual ~IUdpSocket() = default;

    // Binds to every local address.
    [[nodiscard]] virtual bool bindSocket(std::uint16_t port) = 0;
    [[nodiscard]] virtual bool setSocketBlocking(bool blocking) = 0;
    [[nodiscard]] virtual bool getSocketName(SNetworkAddr &out_address) = 0;
    // Bytes sent, or -1.
    virtual int sendSocketData(std::span<const std::byte> data, const SNetworkAddr &dest_addr) = 0;
    // Bytes received; 0 or -1 when nothing is waiting on a non-blocking socket.
    virtual int receiveSocketData(std::span<std::byte> buffer, SNetworkAddr *source_addr) = 0;
};

} // namespace nocturne::platform
