#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/netgame/connectiontype.h"
#include "core/netgame/networkmode.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstdint>
#include <string>

namespace nocturne::core {

// What a network game names its player after, times itself by, clears the input with while the
// players sync, and seeds the game's sim stream from.
struct SNetGameOwners {
    platform::IFileSystem &file_system;
    platform::IEnvironment &environment;
    engine::IGameClock &clock;
    engine::C2d &two_d;
    common::CWatcomRandom &crt_random;
    CActor &actor;
};

// A two-player network game over UDP, kept in lockstep: the host hands out each frame's seed,
// time step and every player's input.
class CNetGame {
public:
    explicit CNetGame(const SNetGameOwners &owners);
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
    // 1 once every player has reached sync_stage, which starts at 1.
    int syncPlayers(int sync_stage);
    int runLobby();
    // Advances the network clock and seeds the coming frame's sim stream.
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
    // By the clock's time since the last reading, at most two seconds.
    void advanceGameTime();

    SNetGameOwners owners_;
    EConnectionType connection_type_ = EConnectionType::CONNECTION_NONE;
    ENetworkMode network_mode_ = ENetworkMode::NET_MODE_DISCONNECTED;
    std::string player_name_;
    int local_player_index_ = -1;
    std::uint32_t current_game_time_ = 0;
    // The clock's last reading, in 16.16 seconds.
    int last_ping_time_ = 0;
};

} // namespace nocturne::core
