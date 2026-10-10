#include "common/net/ipv4.h"

#include <algorithm>

namespace nocturne::common {
namespace {

constexpr std::size_t kIpv4Size = 4;
constexpr std::size_t kIpv6Size = 16;
// ::ffff:0:0/96
constexpr std::array<std::byte, 12> kIpv4MappedPrefix = {
    std::byte{0}, std::byte{0}, std::byte{0}, std::byte{0}, std::byte{0},    std::byte{0},
    std::byte{0}, std::byte{0}, std::byte{0}, std::byte{0}, std::byte{0xff}, std::byte{0xff},
};

Ipv4Octets toOctets(std::span<const std::byte, kIpv4Size> bytes) {
    Ipv4Octets octets{};
    std::ranges::transform(bytes, octets.begin(),
                           [](std::byte b) { return std::to_integer<std::uint8_t>(b); });
    return octets;
}

} // namespace

std::string formatIpv4(const Ipv4Octets &octets) {
    std::string out;
    for (const std::uint8_t octet : octets) {
        if (!out.empty()) {
            out.push_back('.');
        }
        out += std::to_string(octet);
    }
    return out;
}

std::optional<Ipv4Octets> ipv4FromBytes(std::span<const std::byte> bytes) {
    if (bytes.size() == kIpv4Size) {
        return toOctets(bytes.first<kIpv4Size>());
    }
    if (bytes.size() == kIpv6Size && std::ranges::equal(bytes.first<12>(), kIpv4MappedPrefix)) {
        return toOctets(bytes.last<kIpv4Size>());
    }
    return std::nullopt;
}

} // namespace nocturne::common
