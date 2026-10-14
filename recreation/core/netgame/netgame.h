#pragma once

#include "core/fwd.h"
#include "core/netgame/connectiontype.h"
#include "core/netgame/networkmode.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstdint>
#include <string>

namespace nocturne::core {

// A two-player network game over UDP, kept in lockstep: the host hands out each frame's seed,
// time step and every player's input.
class CNetGame {
public:
    CNetGame(platform::IFileSystem &file_system, platform::IEnvironment &environment,
             engine::IGameClock &clock);
    ~CNetGame();
    CNetGame(const CNetGame &) = delete;
    CNetGame &operator=(const CNetGame &) = delete;
    CNetGame(CNetGame &&) = delete;
    CNetGame &operator=(CNetGame &&) = delete;

    // Starts the network clock with no session open. The player is named after USERNAME, else
    // COMPUTERNAME, else "MyComputer".
    void init();
    void shutdown();
    int initializeNetworkToJoin(std::uint32_t *server_ip);
    void disconnect(int perform_handshake);
    int syncPlayers(int sync_stage);
    int runLobby();
    void processServerFrame();
    void processClientFrame();
    SPlayerInput *getMyControls();

    [[nodiscard]] EConnectionType getConnectionType() const;
    [[nodiscard]] ENetworkMode getNetworkMode() const;
    [[nodiscard]] const std::string &getPlayerName() const;
    // -1 with no session.
    [[nodiscard]] int getLocalPlayerIndex() const;
    // The network clock, in 16.16 seconds.
    [[nodiscard]] std::uint32_t getCurrentGameTime() const;

private:
    void resetSession();

    platform::IFileSystem &file_system_;
    platform::IEnvironment &environment_;
    engine::IGameClock &clock_;
    EConnectionType connection_type_ = EConnectionType::CONNECTION_NONE;
    ENetworkMode network_mode_ = ENetworkMode::NET_MODE_DISCONNECTED;
    std::string player_name_;
    int local_player_index_ = -1;
    std::uint32_t current_game_time_ = 0;
    // The clock's last reading, in 16.16 seconds.
    int last_ping_time_ = 0;
};

} // namespace nocturne::core
