#pragma once

#include "platform/network.h"
#include "platform/udpsocket.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockNetwork : public INetwork {
public:
    MOCK_METHOD(std::unique_ptr<IUdpSocket>, createUDPSocket, (), (override));
};

} // namespace nocturne::platform
