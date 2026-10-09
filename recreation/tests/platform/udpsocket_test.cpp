#include "platform/udpsocket.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IUdpSocket, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IUdpSocket>);
    static_assert(std::has_virtual_destructor_v<IUdpSocket>);
}

TEST(IUdpSocket, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IUdpSocket::bindSocket), bool (IUdpSocket::*)(std::uint16_t)>);
    static_assert(
        std::is_same_v<decltype(&IUdpSocket::setSocketBlocking), bool (IUdpSocket::*)(bool)>);
    static_assert(
        std::is_same_v<decltype(&IUdpSocket::getSocketName), bool (IUdpSocket::*)(SNetworkAddr &)>);
    static_assert(
        std::is_same_v<decltype(&IUdpSocket::sendSocketData),
                       int (IUdpSocket::*)(std::span<const std::byte>, const SNetworkAddr &)>);
    static_assert(std::is_same_v<decltype(&IUdpSocket::receiveSocketData),
                                 int (IUdpSocket::*)(std::span<std::byte>, SNetworkAddr *)>);
}

} // namespace
} // namespace nocturne::platform
