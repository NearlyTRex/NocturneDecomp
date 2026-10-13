#include "platform/udpsocket.h"
#include "support/trisock/socket.h"
#include "tests/mocks/platform/mocknetwork.h"
#include "tests/mocks/platform/mockudpsocket.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <memory>
#include <span>
#include <type_traits>

namespace nocturne::support {
namespace {

using ::testing::_;
using ::testing::Return;

TEST(CSocket, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSocket>);
    static_assert(!std::is_move_constructible_v<CSocket>);
    static_assert(std::is_constructible_v<CSocket, platform::INetwork &>);
}

TEST(CSocket, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSocket::createUDPSocket), bool (CSocket::*)()>);
    static_assert(std::is_same_v<decltype(&CSocket::isSocketValid), bool (CSocket::*)() const>);
    static_assert(std::is_same_v<decltype(&CSocket::bindSocket), int (CSocket::*)(std::uint16_t)>);
    static_assert(std::is_same_v<decltype(&CSocket::receiveSocketData),
                                 int (CSocket::*)(std::span<std::byte>, platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::sendSocketData),
                                 int (CSocket::*)(std::span<const std::byte>,
                                                  const platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::closeSocket), int (CSocket::*)()>);
    static_assert(std::is_same_v<decltype(&CSocket::getSocketName),
                                 int (CSocket::*)(platform::SNetworkAddr *)>);
    static_assert(std::is_same_v<decltype(&CSocket::setSocketBlocking), int (CSocket::*)(int)>);
}

constexpr platform::SNetworkAddr kPeer{.ip_address = {10, 0, 0, 2}, .port = 3456};

class CSocketTest : public ::testing::Test {
protected:
    // A socket whose OS side is udp.
    platform::MockUdpSocket &open() {
        auto udp = std::make_unique<platform::MockUdpSocket>();
        platform::MockUdpSocket &ref = *udp;
        EXPECT_CALL(network_, createUDPSocket).WillOnce(Return(std::move(udp)));
        EXPECT_TRUE(socket_.createUDPSocket());
        return ref;
    }

    platform::MockNetwork network_;
    CSocket socket_{network_};
    std::array<std::byte, 8> buffer_{};
};

TEST_F(CSocketTest, StartsWithNoSocketAndFailsToSendOrReceive) {
    EXPECT_FALSE(socket_.isSocketValid());
    EXPECT_EQ(socket_.sendSocketData(buffer_, &kPeer), -1);
    EXPECT_EQ(socket_.receiveSocketData(buffer_, nullptr), -1);
}

TEST_F(CSocketTest, ARefusedSocketLeavesNoneOpen) {
    EXPECT_CALL(network_, createUDPSocket).WillOnce(Return(nullptr));
    EXPECT_FALSE(socket_.createUDPSocket());
    EXPECT_FALSE(socket_.isSocketValid());
}

TEST_F(CSocketTest, SendsToTheAddress) {
    platform::MockUdpSocket &udp = open();
    EXPECT_CALL(udp, sendSocketData(_, kPeer))
        .WillOnce([](std::span<const std::byte> data, const platform::SNetworkAddr &) {
            return static_cast<int>(data.size());
        });
    EXPECT_EQ(socket_.sendSocketData(buffer_, &kPeer), 8);
}

TEST_F(CSocketTest, SendingWithoutAnAddressFails) {
    const platform::MockUdpSocket &udp = open();
    EXPECT_CALL(udp, sendSocketData).Times(0);
    EXPECT_EQ(socket_.sendSocketData(buffer_, nullptr), -1);
}

TEST_F(CSocketTest, ReceivesWithTheSender) {
    platform::MockUdpSocket &udp = open();
    platform::SNetworkAddr from;
    EXPECT_CALL(udp, receiveSocketData(_, &from))
        .WillOnce([](std::span<std::byte> buffer, platform::SNetworkAddr *source) {
            buffer[0] = std::byte{0x2a};
            *source = kPeer;
            return 1;
        });
    EXPECT_EQ(socket_.receiveSocketData(buffer_, &from), 1);
    EXPECT_EQ(buffer_[0], std::byte{0x2a});
    EXPECT_EQ(from, kPeer);
}

TEST_F(CSocketTest, ANewSocketClosesTheOldOneFirst) {
    open();
    EXPECT_CALL(network_, createUDPSocket).WillOnce([this] {
        EXPECT_FALSE(socket_.isSocketValid());
        return std::unique_ptr<platform::IUdpSocket>();
    });
    EXPECT_FALSE(socket_.createUDPSocket());
}

} // namespace
} // namespace nocturne::support
