#pragma once

#include "support/fwd.h"

#include <cstdint>

namespace nocturne::support {

void staticInit();
std::uint32_t *parseIPAddress(std::uint32_t *result_ptr, char *dotted_decimal_string);
void formatIPAddress(char *output_buffer, std::uint8_t *ip_bytes);
void createNetworkAddr(SNetworkAddr *dest_addr, std::uint32_t *ip_address_ptr, std::uint16_t port);
int startupWinsock();
int cleanupWinsock();

} // namespace nocturne::support
