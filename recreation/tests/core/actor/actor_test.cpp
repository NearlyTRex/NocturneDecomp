#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/game/game.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <cstdint>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CActor>);
}

TEST(CActor, Constructors) {
    static_assert(std::is_constructible_v<CActor, const CGame &, common::CWatcomRandom &>);
}

TEST(CActor, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CActor::setRandomSeed), void (CActor::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CActor::getRandomFloatFromRange),
                                 float (CActor::*)(float, float)>);
    static_assert(std::is_same_v<decltype(&CActor::getRandomInt), int (CActor::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CActor::randomChance), int (CActor::*)(float)>);
}

// Expected values are nocedit's own, from its machine code run with the same seeds.
class CActorTest : public ::testing::Test {
protected:
    // Inside a sim frame, on the sim stream from the given seed.
    void inSimFrame(std::uint32_t seed) {
        game_.is_processing = 1;
        actor_.setRandomSeed(seed);
    }

    ::testing::StrictMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor actor_{game_, crt_};
};

TEST_F(CActorTest, OutsideASimFrameDrawsFromTheCrtStream) {
    EXPECT_EQ(actor_.getRandomFloatFromRange(0.0F, 10.0F), 5.13870668F);
    common::CWatcomRandom fresh;
    fresh.rand();
    EXPECT_EQ(crt_.rand(), fresh.rand());
}

TEST_F(CActorTest, InsideASimFrameDrawsFromTheSimStream) {
    inSimFrame(1);
    EXPECT_EQ(actor_.getRandomFloatFromRange(-1.0F, 1.0F), -0.625465631F);
    common::CWatcomRandom untouched;
    EXPECT_EQ(crt_.rand(), untouched.rand());
}

TEST_F(CActorTest, TheSimStreamReplaysFromItsSeed) {
    inSimFrame(77);
    const float first = actor_.getRandomFloatFromRange(0.0F, 1.0F);
    const float second = actor_.getRandomFloatFromRange(0.0F, 1.0F);
    actor_.setRandomSeed(77);
    EXPECT_EQ(actor_.getRandomFloatFromRange(0.0F, 1.0F), first);
    EXPECT_EQ(actor_.getRandomFloatFromRange(0.0F, 1.0F), second);
    EXPECT_NE(first, second);
}

TEST_F(CActorTest, AReversedRangeDrawsFromTheMaximumDown) {
    EXPECT_EQ(actor_.getRandomFloatFromRange(5.0F, -5.0F), -0.138706565F);
}

TEST_F(CActorTest, GetRandomIntDrawsWholeValuesInTheRange) {
    EXPECT_EQ(actor_.getRandomInt(1, 6), 4);
    inSimFrame(1);
    EXPECT_EQ(actor_.getRandomInt(1, 6), 2);
}

TEST_F(CActorTest, GetRandomIntReachesTheTopValue) {
    // The next CRT draw is 0x7fff.
    crt_.srand(0x1112a683U);
    EXPECT_EQ(actor_.getRandomInt(0, 3), 3);
}

TEST_F(CActorTest, GetRandomIntClampsADrawBelowTheMinimum) {
    EXPECT_EQ(actor_.getRandomInt(10, -10), 10);
    crt_.srand(1);
    // The span wraps, and the sum overflows to the x87's integer indefinite.
    EXPECT_EQ(actor_.getRandomInt(2147483000, -2147483000), 2147483000);
}

TEST_F(CActorTest, GetRandomIntClampsADrawAboveTheMaximum) {
    // The next CRT draw is 0, landing on the minimum, which is above the maximum.
    crt_.srand(0);
    EXPECT_EQ(actor_.getRandomInt(10, -10), -10);
}

// The first CRT draw is 16838, just over a half.
TEST_F(CActorTest, RandomChanceHitsWhenTheDrawIsBelowTheThreshold) {
    EXPECT_EQ(actor_.randomChance(0.6F), 1);
    crt_.srand(1);
    EXPECT_EQ(actor_.randomChance(0.5F), 0);
    crt_.srand(1);
    EXPECT_EQ(actor_.randomChance(0.0F), 0);
}

TEST_F(CActorTest, RandomChanceUsesTheSimStreamInASimFrame) {
    inSimFrame(1);
    EXPECT_EQ(actor_.randomChance(0.01F), 0);
    inSimFrame(0);
    EXPECT_EQ(actor_.randomChance(0.0000001F), 1);
}

TEST_F(CActorTest, RandomChanceCountsANanThresholdAsAHit) {
    EXPECT_EQ(actor_.randomChance(std::nanf("")), 1);
}

} // namespace
} // namespace nocturne::core
