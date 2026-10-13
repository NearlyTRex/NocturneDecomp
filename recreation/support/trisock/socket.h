#pragma once

#include "platform/fwd.h"
#include "support/fwd.h"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>

namespace nocturne::support {

// The game's UDP socket. Without one open, sends and receives fail as Winsock's do on an invalid
// handle.
class CSocket {
public:
    explicit CSocket(platform::INetwork &network);
    ~CSocket();
    CSocket(const CSocket &) = delete;
    CSocket &operator=(const CSocket &) = delete;
    CSocket(CSocket &&) = delete;
    CSocket &operator=(CSocket &&) = delete;

    // Closes any open socket first; false when the OS refuses a new one.
    bool createUDPSocket();
    [[nodiscard]] bool isSocketValid() const;
    int bindSocket(std::uint16_t port);
    // Bytes received into buffer, from where source_addr says when it isn't null; 0 or -1 when
    // nothing is waiting.
    int receiveSocketData(std::span<std::byte> buffer, platform::SNetworkAddr *source_addr);
    // Bytes sent, or -1. A UDP socket sends only to an address, so a null one fails.
    int sendSocketData(std::span<const std::byte> data, const platform::SNetworkAddr *dest_addr);
    int closeSocket();
    int getSocketName(platform::SNetworkAddr *out_address);
    int setSocketBlocking(int blocking_mode);

private:
    platform::INetwork &network_;
    std::unique_ptr<platform::IUdpSocket> socket_;
};

} // namespace nocturne::support
