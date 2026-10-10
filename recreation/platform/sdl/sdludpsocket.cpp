#include "platform/sdl/sdludpsocket.h"

#include <SDL3/SDL.h>
#include <SDL3_net/SDL_net.h>
#include <algorithm>

namespace nocturne::platform::sdl {
namespace {

struct SDatagramDeleter {
    void operator()(NET_Datagram *datagram) const {
        NET_DestroyDatagram(datagram);
    }
};

std::span<const std::byte> addressBytes(NET_Address *address) {
    int size = 0;
    const void *bytes = NET_GetAddressBytes(address, &size);
    return {static_cast<const std::byte *>(bytes), static_cast<std::size_t>(std::max(size, 0))};
}

} // namespace

void CSdlUdpSocket::SSocketDeleter::operator()(NET_DatagramSocket *socket) const {
    NET_DestroyDatagramSocket(socket);
}

void CSdlUdpSocket::SAddressDeleter::operator()(NET_Address *address) const {
    NET_UnrefAddress(address);
}

bool CSdlUdpSocket::bindSocket(const SNetworkAddr &local_address) {
    // SDL_net binds every local address for a null one.
    NET_Address *address = nullptr;
    if (local_address.ip_address != common::Ipv4Octets{}) {
        address = resolve(local_address.ip_address);
        if (address == nullptr) {
            return false;
        }
    }
    // SDL_net reuses addresses by default; Winsock refuses a port already bound, and so do we.
    const SDL_PropertiesID properties = SDL_CreateProperties();
    SDL_SetBooleanProperty(properties, NET_PROP_DATAGRAM_SOCKET_REUSEADDR_BOOLEAN, false);
    socket_.reset(NET_CreateDatagramSocket(address, local_address.port, properties));
    SDL_DestroyProperties(properties);
    bound_address_ = local_address;
    return socket_ != nullptr;
}

bool CSdlUdpSocket::setSocketBlocking(bool blocking) {
    blocking_ = blocking;
    return true;
}

bool CSdlUdpSocket::getSocketName(SNetworkAddr &out_address) {
    if (!socket_) {
        return false;
    }
    out_address = bound_address_;
    return true;
}

int CSdlUdpSocket::sendSocketData(std::span<const std::byte> data, const SNetworkAddr &dest_addr) {
    if (!socket_) {
        return -1;
    }
    NET_Address *const address = resolve(dest_addr.ip_address);
    if (address == nullptr) {
        return -1;
    }
    const int size = static_cast<int>(data.size());
    return NET_SendDatagram(socket_.get(), address, dest_addr.port, data.data(), size) ? size : -1;
}

int CSdlUdpSocket::receiveSocketData(std::span<std::byte> buffer, SNetworkAddr *source_addr) {
    if (!socket_) {
        return -1;
    }
    if (blocking_) {
        void *socket = socket_.get();
        NET_WaitUntilInputAvailable(&socket, 1, -1);
    }
    NET_Datagram *received = nullptr;
    if (!NET_ReceiveDatagram(socket_.get(), &received)) {
        return -1;
    }
    const std::unique_ptr<NET_Datagram, SDatagramDeleter> datagram(received);
    if (!datagram) {
        return 0;
    }
    // A datagram from an IPv6 peer has no address the game can hold; it is dropped.
    const std::optional<common::Ipv4Octets> source =
        common::ipv4FromBytes(addressBytes(datagram->addr));
    const auto size = static_cast<std::size_t>(datagram->buflen);
    if (!source) {
        return 0;
    }
    const std::size_t copied = std::min(size, buffer.size());
    std::ranges::copy(std::as_bytes(std::span(datagram->buf, copied)), buffer.begin());
    if (source_addr != nullptr) {
        *source_addr = {.ip_address = *source, .port = datagram->port};
    }
    // Winsock fills what fits and then fails the receive with WSAEMSGSIZE.
    return copied < size ? -1 : static_cast<int>(size);
}

NET_Address *CSdlUdpSocket::resolve(const common::Ipv4Octets &octets) {
    if (const auto found = addresses_.find(octets); found != addresses_.end()) {
        return found->second.get();
    }
    Address address(NET_ResolveHostname(common::formatIpv4(octets).c_str()));
    if (!address || NET_WaitUntilResolved(address.get(), -1) != NET_SUCCESS) {
        return nullptr;
    }
    return addresses_.emplace(octets, std::move(address)).first->second.get();
}

} // namespace nocturne::platform::sdl
