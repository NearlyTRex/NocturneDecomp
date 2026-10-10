#include "support/trisock/trisock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(SupportTrisockFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&parseIPAddress), std::uint32_t *(*)(std::uint32_t *, char *)>);
    static_assert(std::is_same_v<decltype(&formatIPAddress), void (*)(std::uint8_t *, char *)>);
    static_assert(
        std::is_same_v<decltype(&createNetworkAddr),
                       void (*)(platform::SNetworkAddr *, std::uint32_t *, std::uint16_t)>);
}

} // namespace
} // namespace nocturne::support
