#include "support/trisock/trisock.h"

namespace nocturne::support {

// nocedit 0x005e1940
platform::SNetworkAddr createNetworkAddr(const common::Ipv4Octets &ip_address, std::uint16_t port) {
    return {.ip_address = ip_address, .port = port};
}

} // namespace nocturne::support
