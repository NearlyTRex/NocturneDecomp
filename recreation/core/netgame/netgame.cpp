#include "core/netgame/netgame.h"

#include "engine/gameclock.h"
#include "platform/environment.h"
#include "platform/filesystem.h"

#include <optional>

namespace nocturne::core {
namespace {

constexpr std::string_view kDefaultPlayerName = "MyComputer";
// Game-clock ticks in a 16.16 second.
constexpr int kTicksPerNetworkUnit = engine::IGameClock::kTicksPerSecond / 65536;

} // namespace

// nocedit 0x0053f6d0
CNetGame::CNetGame(platform::IFileSystem &file_system, platform::IEnvironment &environment,
                   engine::IGameClock &clock)
    : file_system_(file_system), environment_(environment), clock_(clock),
      player_name_(kDefaultPlayerName) {}

// nocedit 0x0053f760
CNetGame::~CNetGame() = default;

// The original copied the name into 20 bytes without a bound.
// nocedit 0x0053f780
void CNetGame::init() {
    file_system_.removeFile("netlog.txt");
    current_game_time_ = 1;
    last_ping_time_ = clock_.getTime() / kTicksPerNetworkUnit;
    std::optional<std::string> name = environment_.getVariable("USERNAME");
    if (!name) {
        name = environment_.getVariable("COMPUTERNAME");
    }
    player_name_ = name.value_or(std::string(kDefaultPlayerName));
    resetSession();
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
