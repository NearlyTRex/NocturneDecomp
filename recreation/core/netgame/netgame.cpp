#include "core/netgame/netgame.h"

#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "engine/2d/2d.h"
#include "engine/gameclock.h"
#include "platform/environment.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <cstdint>
#include <optional>

namespace nocturne::core {
namespace {

constexpr std::string_view kDefaultPlayerName = "MyComputer";
// Game-clock ticks in a 16.16 second.
constexpr int kTicksPerNetworkUnit = engine::IGameClock::kTicksPerSecond / 65536;
// Two seconds, in 16.16.
constexpr int kMaxGameTimeStep = 0x20000;

} // namespace

// deferred: constructing the two SNetPlayer slots and the CSocket, with CNetGame::addPlayer and
//   CNetGame::initializeNetworkToHost
// deferred: player_count 0, server_player_index -1 and has_pending_sim_frame 0, with
//   CNetGame::addPlayer, CNetGame::processClientFrame and CNetGame::runLobby
// nocedit 0x0053f6d0
CNetGame::CNetGame(const SNetGameOwners &owners)
    : owners_(owners), player_name_(kDefaultPlayerName) {}

// deferred: destroying the CSocket, which closes it, with CNetGame::initializeNetworkToHost
// nocedit 0x0053f760
CNetGame::~CNetGame() = default;

// The original copied the name into 20 bytes without a bound.
// deferred: zeroing g_ChatHistoryCount and g_ChatOutCount, with CNetGame::addChatHistory and
//   CNetGame::processChatOut
// deferred: disconnect(0)'s other resets: server_player_index -1, mission_name emptied,
//   player_count 0, has_pending_sim_frame 0, g_RemoteSyncStage 0 and the game-settings version
//   INT_02f7c8c4 0, with CNetGame::disconnect
// nocedit 0x0053f780
void CNetGame::init() {
    owners_.file_system.removeFile("netlog.txt");
    current_game_time_ = 1;
    last_ping_time_ = owners_.clock.getTime() / kTicksPerNetworkUnit;
    player_name_ = owners_.environment.getVariable("USERNAME")
                       .or_else([this] { return owners_.environment.getVariable("COMPUTERNAME"); })
                       .value_or(std::string(kDefaultPlayerName));
    resetSession();
}

// The original also quit on a connection type other than the three, which the enum can't hold.
// deferred: the host's wait for every player to report the stage, listing who it waits on and
//   asking them again every tenth of a second, given up with Escape, with
//   CNetGame::initializeNetworkToHost
// deferred: the client's wait for the host's code for the stage, up to stage 3, given up with
//   Escape, with CNetGame::initializeNetworkToJoin
// nocedit 0x005401e0
int CNetGame::syncPlayers(int sync_stage) {
    owners_.two_d.clearInputAndWait();
    if (sync_stage < 1) {
        common::displayErrorAndQuit("CNetGame::syncPlayers - don't use 0!");
    }
    return 1;
}

// deferred: the host's frame: pinging and hearing from the players, dropping one who stopped
//   answering, trimming the sim history to the slowest player, recording this frame's seed, time
//   step and inputs, and sending each client up to five frames it lacks, with
//   CNetGame::initializeNetworkToHost
// deferred: keeping the seed for the sim frame to start from, with CGame::process
// nocedit 0x00543150
void CNetGame::processServerFrame() {
    advanceGameTime();
    owners_.actor.setRandomSeed(static_cast<std::uint32_t>(owners_.crt_random.rand()));
}

void CNetGame::advanceGameTime() {
    const int now = owners_.clock.getTime() / kTicksPerNetworkUnit;
    const int step =
        std::clamp(common::wrappingSubtract(now, last_ping_time_), 0, kMaxGameTimeStep);
    last_ping_time_ = now;
    current_game_time_ += static_cast<std::uint32_t>(step);
}

// What disconnect clears whether or not it says goodbye first.
void CNetGame::resetSession() {
    network_mode_ = ENetworkMode::NET_MODE_DISCONNECTED;
    local_player_index_ = -1;
    connection_type_ = EConnectionType::CONNECTION_NONE;
}

EConnectionType CNetGame::getConnectionType() const {
    return connection_type_;
}

ENetworkMode CNetGame::getNetworkMode() const {
    return network_mode_;
}

const std::string &CNetGame::getPlayerName() const {
    return player_name_;
}

int CNetGame::getLocalPlayerIndex() const {
    return local_player_index_;
}

std::uint32_t CNetGame::getCurrentGameTime() const {
    return current_game_time_;
}

} // namespace nocturne::core
