#pragma once

#include "platform/fwd.h"

#include <cstdint>

namespace nocturne::support {

void staticInit();
std::uint32_t *parseIPAddress(std::uint32_t *result_ptr, char *dotted_decimal_string);
void formatIPAddress(std::uint8_t *ip_bytes, char *output_buffer);
void createNetworkAddr(platform::SNetworkAddr *dest_addr, std::uint32_t *ip_address_ptr,
                       std::uint16_t port);

} // namespace nocturne::support
