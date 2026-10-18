#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/game.h"
#include "core/hero/heroplaceholder.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

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
    static_assert(std::is_same_v<decltype(&CActor::registerActorClass),
                                 void (CActor::*)(const CDemonActorType &)>);
    static_assert(std::is_same_v<decltype(&CActor::getActorClassByName),
                                 const CDemonActorType *(CActor::*)(std::string_view) const>);
    static_assert(std::is_same_v<decltype(&CActor::createActorByName),
                                 std::unique_ptr<CDemonActor> (CActor::*)(std::string_view) const>);
}

class CActorRegistryTest : public ::testing::Test {
protected:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor actor_{game_, crt_};
};

TEST_F(CActorRegistryTest, ThePortedClassesAreRegistered) {
    EXPECT_EQ(actor_.getActorClassByName("CDemonActor"), &CDemonActor::kType);
    EXPECT_EQ(actor_.getActorClassByName("CHeroPlaceholder"), &CHeroPlaceholder::kType);
}

// Only the letters and digits count, in either case.
TEST_F(CActorRegistryTest, AClassIsFoundByItsNamesHash) {
    EXPECT_EQ(actor_.getActorClassByName("cheroplaceholder"), &CHeroPlaceholder::kType);
    EXPECT_EQ(actor_.getActorClassByName("C_Hero Placeholder"), &CHeroPlaceholder::kType);
    EXPECT_EQ(actor_.getActorClassByName("CTestLeaf"), nullptr);
    actor_.registerActorClass(kTestLeafType);
    EXPECT_EQ(actor_.getActorClassByName("CTestLeaf"), &kTestLeafType);
}

TEST_F(CActorRegistryTest, AnActorIsCreatedByItsClassName) {
    const std::unique_ptr<CDemonActor> actor = actor_.createActorByName("cheroplaceholder");
    EXPECT_EQ(&actor->getActorType(), &CHeroPlaceholder::kType);
}

TEST_F(CActorRegistryTest, CreatingAnUnknownOrAbstractClassIsFatal) {
    EXPECT_THAT([this] { static_cast<void>(actor_.createActorByName("CNothing")); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't create actor of unknown class type: CNothing")));
    EXPECT_THAT([this] { static_cast<void>(actor_.createActorByName("CDemonActor")); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't create instance of abstract type CDemonActor")));
}

TEST_F(CActorRegistryTest, MoreThanTwoHundredClassesIsFatal) {
    for (std::size_t i = 2; i < CActor::kMaxActorTypes; ++i) {
        actor_.registerActorClass(kTestLeafType);
    }
    EXPECT_THAT([this] { actor_.registerActorClass(kTestLeafType); },
                ThrowsMessage<common::CFatalError>(StrEq("Too many actor types!")));
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
