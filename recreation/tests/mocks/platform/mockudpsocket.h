#pragma once

#include "platform/udpsocket.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockUdpSocket : public IUdpSocket {
public:
    MOCK_METHOD(bool, bindSocket, (const SNetworkAddr &local_address), (override));
    MOCK_METHOD(bool, setSocketBlocking, (bool blocking), (override));
    MOCK_METHOD(bool, getSocketName, (SNetworkAddr & out_address), (override));
    MOCK_METHOD(int, sendSocketData,
                (std::span<const std::byte> data, const SNetworkAddr &dest_addr), (override));
    MOCK_METHOD(int, receiveSocketData, (std::span<std::byte> buffer, SNetworkAddr *source_addr),
                (override));
};

} // namespace nocturne::platform
