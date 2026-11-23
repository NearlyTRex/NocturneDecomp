#include "support/trisock/trisock.h"

namespace nocturne::support {

// nocedit 0x005e1940
// bw1 0x0059c740
// bw2 0x00578e60
// bw3 0x0056f730
platform::SNetworkAddr createNetworkAddr(const common::Ipv4Octets &ip_address, std::uint16_t port) {
    return {.ip_address = ip_address, .port = port};
}

} // namespace nocturne::support
