#include "support/trisock/trisock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(SupportTrisockFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&parseIPAddress), std::uint32_t *(*)(std::uint32_t *, char *)>);
    static_assert(std::is_same_v<decltype(&formatIPAddress), void (*)(char *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&createNetworkAddr),
                                 void (*)(SNetworkAddr *, std::uint32_t *, std::uint16_t)>);
    static_assert(std::is_same_v<decltype(&startupWinsock), int (*)()>);
    static_assert(std::is_same_v<decltype(&cleanupWinsock), int (*)()>);
}

} // namespace
} // namespace nocturne::support
