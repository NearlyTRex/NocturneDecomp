#include "common/net/ipv4.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>

namespace nocturne::common {
namespace {

template <std::size_t N>
std::array<std::byte, N> bytes(const std::array<int, N> &values) {
    std::array<std::byte, N> out{};
    for (std::size_t i = 0; i < N; ++i) {
        out.at(i) = static_cast<std::byte>(values.at(i));
    }
    return out;
}

TEST(Ipv4, FormatsDottedDecimal) {
    EXPECT_EQ(formatIpv4({192, 168, 0, 1}), "192.168.0.1");
    EXPECT_EQ(formatIpv4({0, 0, 0, 0}), "0.0.0.0");
    EXPECT_EQ(formatIpv4({255, 255, 255, 255}), "255.255.255.255");
}

TEST(Ipv4, ReadsFourBytesInNetworkOrder) {
    const auto raw = bytes<4>({10, 0, 0, 2});
    EXPECT_EQ(ipv4FromBytes(raw), (Ipv4Octets{10, 0, 0, 2}));
}

TEST(Ipv4, ReadsIpv4MappedIpv6) {
    const auto raw = bytes<16>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 0xff, 127, 0, 0, 1});
    EXPECT_EQ(ipv4FromBytes(raw), (Ipv4Octets{127, 0, 0, 1}));
}

TEST(Ipv4, RejectsPlainIpv6) {
    const auto raw = bytes<16>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}); // ::1
    EXPECT_FALSE(ipv4FromBytes(raw).has_value());
}

TEST(Ipv4, RejectsOtherSizes) {
    const auto raw = bytes<5>({1, 2, 3, 4, 5});
    EXPECT_FALSE(ipv4FromBytes(raw).has_value());
    EXPECT_FALSE(ipv4FromBytes({}).has_value());
}

} // namespace
} // namespace nocturne::common
