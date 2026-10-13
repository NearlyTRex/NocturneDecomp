#include "support/trisock/socket.h"

#include "platform/network.h"
#include "platform/udpsocket.h"

namespace nocturne::support {
namespace {

constexpr int kSocketError = -1;

} // namespace

// nocedit 0x005e1ae0
CSocket::CSocket(platform::INetwork &network) : network_(network) {}

// nocedit 0x005e1af0
CSocket::~CSocket() = default;

// nocedit 0x005e1b40
bool CSocket::createUDPSocket() {
    socket_.reset();
    socket_ = network_.createUDPSocket();
    return socket_ != nullptr;
}

// nocedit 0x005e1b70
bool CSocket::isSocketValid() const {
    return socket_ != nullptr;
}

// nocedit 0x005e1c20
int CSocket::receiveSocketData(std::span<std::byte> buffer, platform::SNetworkAddr *source_addr) {
    if (socket_ == nullptr) {
        return kSocketError;
    }
    return socket_->receiveSocketData(buffer, source_addr);
}

// nocedit 0x005e1ca0
int CSocket::sendSocketData(std::span<const std::byte> data,
                            const platform::SNetworkAddr *dest_addr) {
    if (socket_ == nullptr || dest_addr == nullptr) {
        return kSocketError;
    }
    return socket_->sendSocketData(data, *dest_addr);
}

} // namespace nocturne::support
