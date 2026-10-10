#pragma once

#include "common/net/ipv4.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::platform {

struct SNetworkAddr {
    common::Ipv4Octets ip_address{};
    // Host byte order.
    std::uint16_t port = 0;

    bool operator==(const SNetworkAddr &) const = default;
};

// Closed on destruction.
class IUdpSocket {
public:
    virtual ~IUdpSocket() = default;

    // The unspecified address 0.0.0.0 binds every local one, as INADDR_ANY does.
    [[nodiscard]] virtual bool bindSocket(const SNetworkAddr &local_address) = 0;
    [[nodiscard]] virtual bool setSocketBlocking(bool blocking) = 0;
    [[nodiscard]] virtual bool getSocketName(SNetworkAddr &out_address) = 0;
    // Bytes sent, or -1.
    virtual int sendSocketData(std::span<const std::byte> data, const SNetworkAddr &dest_addr) = 0;
    // Bytes received; 0 or -1 when nothing is waiting on a non-blocking socket.
    virtual int receiveSocketData(std::span<std::byte> buffer, SNetworkAddr *source_addr) = 0;
};

} // namespace nocturne::platform
