#pragma once

#include "platform/fwd.h"
#include "support/fwd.h"

#include <cstdint>

namespace nocturne::support {

class CSocket {
public:
    CSocket();
    ~CSocket();

    int createUDPSocket();
    int isSocketValid();
    int bindSocket(std::uint16_t port);
    int receiveSocketData(char *buffer, int length, platform::SNetworkAddr *source_addr);
    int sendSocketData(char *buffer, int length, platform::SNetworkAddr *dest_addr);
    int closeSocket();
    int getSocketName(platform::SNetworkAddr *out_address);
    int setSocketBlocking(int blocking_mode);
};

} // namespace nocturne::support
