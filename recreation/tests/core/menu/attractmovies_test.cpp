#include "core/menu/attractmovies.h"
#include "tests/mocks/platform/mockclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <chrono>
#include <cstdint>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::Return;

TEST(CAttractMovies, IsBuiltOnAClock) {
    static_assert(std::is_constructible_v<CAttractMovies, platform::IClock &>);
}

// Time in milliseconds, moved on by each test.
class CAttractMoviesTest : public ::testing::Test {
protected:
    CAttractMoviesTest() {
        ON_CALL(clock_, getCounterFrequency()).WillByDefault(Return(1000U));
        ON_CALL(clock_, getCounter()).WillByDefault([this] { return now_; });
        movies_.setOpeningPlayed(true);
    }

    // Ticks a menu frame every 100ms through the milliseconds given; whether any fired.
    bool runMenuFor(std::uint64_t milliseconds) {
        bool fired = false;
        for (const std::uint64_t end = now_ + milliseconds; now_ < end;) {
            now_ += 100;
            fired = movies_.tick() || fired;
        }
        return fired;
    }

    std::uint64_t now_ = 1000;
    ::testing::NiceMock<platform::MockClock> clock_;
    CAttractMovies movies_{clock_};
};

TEST_F(CAttractMoviesTest, FiresAQuarterSecondBeforeThePassEnds) {
    movies_.setMusicDuration(10.0F);
    EXPECT_FALSE(runMenuFor(9700));
    EXPECT_TRUE(runMenuFor(100));
}

TEST_F(CAttractMoviesTest, FiresOnceUntilTheMusicStartsAgain) {
    movies_.setMusicDuration(1.0F);
    EXPECT_TRUE(runMenuFor(1000));
    EXPECT_FALSE(runMenuFor(5000));
    movies_.setMusicDuration(1.0F);
    EXPECT_TRUE(runMenuFor(1000));
}

TEST_F(CAttractMoviesTest, WaitsForTheOpeningToHavePlayed) {
    movies_.setOpeningPlayed(false);
    movies_.setMusicDuration(1.0F);
    EXPECT_FALSE(runMenuFor(5000));
}

TEST_F(CAttractMoviesTest, NoMusicStopsTheWait) {
    movies_.setMusicDuration(1.0F);
    movies_.setMusicDuration(0.0F);
    EXPECT_FALSE(runMenuFor(5000));
    movies_.setMusicDuration(-1.0F);
    EXPECT_FALSE(runMenuFor(5000));
}

TEST_F(CAttractMoviesTest, MusicShorterThanTheLeadFiresOnTheNextFrame) {
    movies_.setMusicDuration(0.1F);
    EXPECT_TRUE(movies_.tick());
}

// Another screen held the menu over the pass's end, so the next pass's end is the one.
TEST_F(CAttractMoviesTest, APassEndingAwayFromTheMenuIsLetGo) {
    movies_.setMusicDuration(10.0F);
    now_ += 25000;
    EXPECT_FALSE(movies_.tick());
    EXPECT_FALSE(runMenuFor(4700));
    EXPECT_TRUE(runMenuFor(100));
}

// Half a second between frames is still the menu.
TEST_F(CAttractMoviesTest, AFrameHalfASecondLateIsStillTheMenu) {
    movies_.setMusicDuration(1.0F);
    now_ += 500;
    EXPECT_FALSE(movies_.tick());
    now_ += 500;
    EXPECT_TRUE(movies_.tick());
}

TEST_F(CAttractMoviesTest, ThePauseIsSilenceOfFourTenthsOfASecond) {
    EXPECT_CALL(clock_, sleep(std::chrono::duration<double>(0.4)));
    movies_.pauseBeforeMovie();
}

} // namespace
} // namespace nocturne::core
