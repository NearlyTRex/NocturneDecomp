#include "support/trisock/trisock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(SupportTrisockFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&parseIPAddress), std::uint32_t *(*)(std::uint32_t *, char *)>);
    static_assert(std::is_same_v<decltype(&formatIPAddress), void (*)(std::uint8_t *, char *)>);
    static_assert(
        std::is_same_v<decltype(&createNetworkAddr),
                       platform::SNetworkAddr (*)(const common::Ipv4Octets &, std::uint16_t)>);
}

TEST(SupportTrisockFunctions, ANetworkAddressIsTheIpAndPort) {
    EXPECT_EQ(createNetworkAddr({192, 168, 0, 7}, 9001),
              (platform::SNetworkAddr{.ip_address = {192, 168, 0, 7}, .port = 9001}));
}

} // namespace
} // namespace nocturne::support
