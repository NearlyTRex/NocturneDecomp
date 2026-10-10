#pragma once

#include "platform/udpsocket.h"

#include <map>
#include <memory>

struct NET_Address;
struct NET_DatagramSocket;

namespace nocturne::platform::sdl {

// Blocking until told otherwise, as a Winsock socket starts. IPv4 only, as the game's
// addresses are.
class CSdlUdpSocket final : public IUdpSocket {
public:
    [[nodiscard]] bool bindSocket(const SNetworkAddr &local_address) override;
    [[nodiscard]] bool setSocketBlocking(bool blocking) override;
    // The address it was bound to, as getsockname reports it.
    [[nodiscard]] bool getSocketName(SNetworkAddr &out_address) override;
    int sendSocketData(std::span<const std::byte> data, const SNetworkAddr &dest_addr) override;
    int receiveSocketData(std::span<std::byte> buffer, SNetworkAddr *source_addr) override;

private:
    struct SSocketDeleter {
        void operator()(NET_DatagramSocket *socket) const;
    };
    struct SAddressDeleter {
        void operator()(NET_Address *address) const;
    };
    using Address = std::unique_ptr<NET_Address, SAddressDeleter>;

    // Null when the address does not resolve. Resolved once, then kept.
    [[nodiscard]] NET_Address *resolve(const common::Ipv4Octets &octets);

    std::unique_ptr<NET_DatagramSocket, SSocketDeleter> socket_;
    SNetworkAddr bound_address_;
    bool blocking_ = true;
    std::map<common::Ipv4Octets, Address> addresses_;
};

} // namespace nocturne::platform::sdl
