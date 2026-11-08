#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/netgame/netgame.h"
#include "core/playerinput.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/testhero.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The game clock's ticks in a 16.16 second.
constexpr int kTicksPerUnit = 18;

TEST(CNetGame, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CNetGame>);
    static_assert(!std::is_move_constructible_v<CNetGame>);
    static_assert(std::is_constructible_v<CNetGame, const SNetGameOwners &>);
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
        std::is_same_v<decltype(&CNetGame::getMyControls), SPlayerInput &(CNetGame::*)()>);
}

// The mission's network game, with no network game started.
class CNetGameTest : public CMissionFixture {
protected:
    // The network clock started with the game clock at the given 16.16 second.
    void startAt(int time) {
        time_ = time * kTicksPerUnit;
        net_game_.init();
    }

    void serveFrameAt(int time) {
        time_ = time * kTicksPerUnit;
        net_game_.processServerFrame();
    }
};

// Without a network game they are the local hero's own.
TEST_F(CNetGameTest, MyControlsAreTheLocalHeros) {
    auto placeholder = std::make_unique<CHeroPlaceholder>();
    placeholder->setLocation({.position = {}, .area_id = 0});
    mission_.addActorToList(std::move(placeholder));
    ASSERT_TRUE(mission_.createHeros(std::make_unique<CTestHero>(actor_)));
    EXPECT_EQ(&net_game_.getMyControls(), &mission_.getLocalHero()->getPlayerInput());
}

// With no network game every player is there already; the input is dropped all the same.
TEST_F(CNetGameTest, WithoutANetworkGameSyncingIsDoneAtOnce) {
    EXPECT_CALL(raw_input_, clearInput());
    EXPECT_EQ(net_game_.syncPlayers(3), 1);
}

TEST_F(CNetGameTest, SyncingToStageZeroIsFatal) {
    EXPECT_THAT([this] { static_cast<void>(net_game_.syncPlayers(0)); },
                ThrowsMessage<common::CFatalError>(StrEq("CNetGame::syncPlayers - don't use 0!")));
}

// The network clock moves by the game clock's time since the last reading.
TEST_F(CNetGameTest, AServerFrameAdvancesTheNetworkClock) {
    startAt(0x10000);
    serveFrameAt(0x18000);
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U + 0x8000U);
}

// A step is held to two seconds, and a clock that went back doesn't move it.
TEST_F(CNetGameTest, TheNetworkClockStepsAtMostTwoSecondsAndNeverBack) {
    startAt(0x10000);
    serveFrameAt(0x50000);
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U + 0x20000U);
    serveFrameAt(0x40000);
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U + 0x20000U);
    serveFrameAt(0x40100);
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U + 0x20100U);
}

// Without a network game the frame's seed is the CRT's next draw.
TEST_F(CNetGameTest, AServerFrameSeedsTheSimStreamFromTheCrt) {
    common::CWatcomRandom expected_crt;
    CActor expected{game_, expected_crt, models_, keyframed_models_, events_};
    expected.setRandomSeed(static_cast<std::uint32_t>(expected_crt.rand()));
    net_game_.processServerFrame();
    game_.is_processing = 1;
    EXPECT_EQ(actor_.getRandomInt(0, 1000000), expected.getRandomInt(0, 1000000));
    EXPECT_EQ(crt_random_.rand(), expected_crt.rand());
}

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
