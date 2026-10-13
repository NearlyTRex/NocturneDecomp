#include "core/netgame/netgame.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/platform/mockenvironment.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::NiceMock;
using ::testing::Return;

TEST(CNetGame, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CNetGame>);
    static_assert(!std::is_move_constructible_v<CNetGame>);
    static_assert(std::is_constructible_v<CNetGame, platform::IFileSystem &,
                                          platform::IEnvironment &, engine::IGameClock &>);
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

class CNetGameTest : public ::testing::Test {
protected:
    NiceMock<platform::MockFileSystem> file_system_;
    NiceMock<platform::MockEnvironment> environment_;
    NiceMock<engine::MockGameClock> clock_;
    CNetGame net_game_{file_system_, environment_, clock_};
};

TEST_F(CNetGameTest, StartsWithNoSessionAsMyComputer) {
    EXPECT_EQ(net_game_.getConnectionType(), EConnectionType::CONNECTION_NONE);
    EXPECT_EQ(net_game_.getNetworkMode(), ENetworkMode::NET_MODE_DISCONNECTED);
    EXPECT_EQ(net_game_.getLocalPlayerIndex(), -1);
    EXPECT_EQ(net_game_.getPlayerName(), "MyComputer");
}

TEST_F(CNetGameTest, InitDeletesTheOldLogAndStartsTheClock) {
    EXPECT_CALL(file_system_, removeFile(std::string_view("netlog.txt")));
    net_game_.init();
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U);
    EXPECT_EQ(net_game_.getConnectionType(), EConnectionType::CONNECTION_NONE);
    EXPECT_EQ(net_game_.getNetworkMode(), ENetworkMode::NET_MODE_DISCONNECTED);
}

TEST_F(CNetGameTest, ThePlayerIsNamedAfterTheUser) {
    ON_CALL(environment_, getVariable(std::string_view("USERNAME")))
        .WillByDefault(Return(std::optional<std::string>("raven")));
    ON_CALL(environment_, getVariable(std::string_view("COMPUTERNAME")))
        .WillByDefault(Return(std::optional<std::string>("crypt")));
    net_game_.init();
    EXPECT_EQ(net_game_.getPlayerName(), "raven");
}

TEST_F(CNetGameTest, WithoutAUserThePlayerIsNamedAfterTheComputer) {
    ON_CALL(environment_, getVariable(std::string_view("COMPUTERNAME")))
        .WillByDefault(Return(std::optional<std::string>("crypt")));
    net_game_.init();
    EXPECT_EQ(net_game_.getPlayerName(), "crypt");
}

TEST_F(CNetGameTest, WithNeitherThePlayerKeepsTheDefaultName) {
    net_game_.init();
    EXPECT_EQ(net_game_.getPlayerName(), "MyComputer");
}

TEST_F(CNetGameTest, ANameLongerThanTheOriginalsTwentyBytesIsKeptWhole) {
    const std::string long_name(40, 'n');
    ON_CALL(environment_, getVariable(std::string_view("USERNAME")))
        .WillByDefault(Return(std::optional<std::string>(long_name)));
    net_game_.init();
    EXPECT_EQ(net_game_.getPlayerName(), long_name);
}

} // namespace
} // namespace nocturne::core
