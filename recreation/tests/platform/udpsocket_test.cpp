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
    static_assert(std::is_same_v<decltype(&IUdpSocket::bindSocket),
                                 bool (IUdpSocket::*)(const SNetworkAddr &)>);
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

TEST(SNetworkAddr, DefaultsToTheUnspecifiedAddress) {
    const SNetworkAddr address;
    EXPECT_EQ(address.ip_address, (common::Ipv4Octets{0, 0, 0, 0}));
    EXPECT_EQ(address.port, 0);
}

TEST(SNetworkAddr, ComparesAddressAndPort) {
    const SNetworkAddr address{.ip_address = {10, 0, 0, 1}, .port = 4000};
    EXPECT_EQ(address, (SNetworkAddr{.ip_address = {10, 0, 0, 1}, .port = 4000}));
    EXPECT_NE(address, (SNetworkAddr{.ip_address = {10, 0, 0, 2}, .port = 4000}));
    EXPECT_NE(address, (SNetworkAddr{.ip_address = {10, 0, 0, 1}, .port = 4001}));
}

} // namespace
} // namespace nocturne::platform
