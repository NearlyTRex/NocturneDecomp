#pragma once

#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CNetGame {
public:
    CNetGame();
    ~CNetGame();

    void init();
    void shutdown();
    int initializeNetworkToJoin(std::uint32_t *server_ip);
    void disconnect(int perform_handshake);
    int syncPlayers(int sync_stage);
    int runLobby();
    void processServerFrame();
    void processClientFrame();
    SPlayerInput *getMyControls();
};

} // namespace nocturne::core
