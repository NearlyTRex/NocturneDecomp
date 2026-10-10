#include "core/netgame/netgame.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CNetGame, IsConcrete) {
    static_assert(!std::is_abstract_v<CNetGame>);
}

TEST(CNetGame, Constructors) {
    static_assert(std::is_constructible_v<CNetGame>);
}

TEST(CNetGame, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CNetGame::init), void (CNetGame::*)()>);
    static_assert(std::is_same_v<decltype(&CNetGame::shutdown), void (CNetGame::*)()>);
    static_assert(std::is_same_v<decltype(&CNetGame::initializeNetworkToJoin),
                                 int (CNetGame::*)(std::uint32_t *)>);
    static_assert(std::is_same_v<decltype(&CNetGame::disconnect), void (CNetGame::*)(int)>);
    static_assert(std::is_same_v<decltype(&CNetGame::syncPlayers), int (CNetGame::*)(int)>);
    static_assert(std::is_same_v<decltype(&CNetGame::runLobby), int (CNetGame::*)()>);
    static_assert(std::is_same_v<decltype(&CNetGame::processServerFrame), void (CNetGame::*)()>);
    static_assert(std::is_same_v<decltype(&CNetGame::processClientFrame), void (CNetGame::*)()>);
    static_assert(
        std::is_same_v<decltype(&CNetGame::getMyControls), SPlayerInput *(CNetGame::*)()>);
}

} // namespace
} // namespace nocturne::core
