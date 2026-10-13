#pragma once

#include "common/net/ipv4.h"
#include "platform/udpsocket.h"

#include <cstdint>

namespace nocturne::support {

void staticInit();
std::uint32_t *parseIPAddress(std::uint32_t *result_ptr, char *dotted_decimal_string);
void formatIPAddress(std::uint8_t *ip_bytes, char *output_buffer);
[[nodiscard]] platform::SNetworkAddr createNetworkAddr(const common::Ipv4Octets &ip_address,
                                                       std::uint16_t port);

} // namespace nocturne::support
