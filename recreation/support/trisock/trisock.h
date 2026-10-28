#pragma once

#include "common/net/ipv4.h"
#include "platform/udpsocket.h"

#include <cstdint>

namespace nocturne::support {

std::uint32_t *parseIPAddress(std::uint32_t *result_ptr, char *dotted_decimal_string);
void formatIPAddress(std::uint8_t *ip_bytes, char *output_buffer);
// The original also built a broadcast address that nothing read.
// deferred: the unspecified address 0.0.0.0, with CNetGame::initializeNetworkToHost and
//   CNetGame::initializeNetworkToJoin
// nocedit 0x005e16b0
[[nodiscard]] platform::SNetworkAddr createNetworkAddr(const common::Ipv4Octets &ip_address,
                                                       std::uint16_t port);

} // namespace nocturne::support
