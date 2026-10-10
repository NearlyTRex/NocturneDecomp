#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>

namespace nocturne::common {

// In dotted order: 192.168.0.1 is {192, 168, 0, 1}.
using Ipv4Octets = std::array<std::uint8_t, 4>;

[[nodiscard]] std::string formatIpv4(const Ipv4Octets &octets);
// Raw address bytes in network order: four for IPv4, or sixteen holding an IPv4-mapped IPv6
// address. Empty for any other address.
[[nodiscard]] std::optional<Ipv4Octets> ipv4FromBytes(std::span<const std::byte> bytes);

} // namespace nocturne::common
