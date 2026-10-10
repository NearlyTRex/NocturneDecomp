#include "support/trisock/socket.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(CSocket, IsConcrete) {
    static_assert(!std::is_abstract_v<CSocket>);
}

TEST(CSocket, Constructors) {
    static_assert(std::is_constructible_v<CSocket>);
}

TEST(CSocket, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSocket::createUDPSocket), int (CSocket::*)()>);
    static_assert(std::is_same_v<decltype(&CSocket::isSocketValid), int (CSocket::*)()>);
    static_assert(std::is_same_v<decltype(&CSocket::bindSocket), int (CSocket::*)(std::uint16_t)>);
    static_assert(std::is_same_v<decltype(&CSocket::receiveSocketData),
                                 int (CSocket::*)(char *, int, platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::sendSocketData),
                                 int (CSocket::*)(char *, int, platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::closeSocket), int (CSocket::*)()>);
    static_assert(std::is_same_v<decltype(&CSocket::getSocketName),
                                 int (CSocket::*)(platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::setSocketBlocking), int (CSocket::*)(int)>);
}

} // namespace
} // namespace nocturne::support
