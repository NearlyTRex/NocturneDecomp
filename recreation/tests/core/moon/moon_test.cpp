#include "core/moon/moon.h"
#include "tests/mocks/core/moonfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::AnyNumber;
using ::testing::Truly;

auto endsWith(std::string_view suffix) {
    return Truly([suffix](std::string_view path) { return path.ends_with(suffix); });
}

class CMoonTest : public CMoonFixture {
protected:
    // Counts the opens of one file and lets every other through.
    void expectOpens(std::string_view suffix, int times) {
        EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
        EXPECT_CALL(file_system_, openFile(endsWith(suffix), _)).Times(times);
    }
};

TEST_F(CMoonTest, InitLoadsWhatItDrawsOnlyTheFirstTime) {
    expectOpens("models\\moon.kfm", 1);
    moon_.init();
    moon_.init();
}

TEST_F(CMoonTest, FreeLetsTheNextInitLoadAgain) {
    expectOpens("data\\menu2.pth", 2);
    moon_.init();
    moon_.free();
    moon_.init();
}

TEST_F(CMoonTest, TheHeadOfHorrorCheatLoadsTheHeadInsteadOfTheMoonOnce) {
    game_.head_of_horror_cheat = 666;
    EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
    EXPECT_CALL(file_system_, openFile(endsWith("models\\moon.kfm"), _)).Times(0);
    EXPECT_CALL(file_system_, openFile(endsWith("taylor_head.kfm"), _)).Times(1);
    moon_.init();
    EXPECT_EQ(game_.head_of_horror_cheat, 0);
}

TEST_F(CMoonTest, TheTitleAnimationsFirstHalfLastsTwoAndAHalfSeconds) {
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
    moon_.update(2.4F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
    moon_.update(0.1F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 0);
}

TEST_F(CMoonTest, TheTitleAnimationWrapsAfterFiveSeconds) {
    moon_.update(4.9F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 0);
    moon_.update(0.1F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
}

TEST_F(CMoonTest, ANaNTimerCountsAsTheFirstHalf) {
    moon_.update(std::nanf(""));
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
}

TEST(CMoon, IsConcrete) {
    static_assert(!std::is_abstract_v<CMoon>);
}

TEST(CMoon, Constructors) {
    static_assert(std::is_constructible_v<CMoon, const SMoonOwners &>);
    static_assert(!std::is_copy_constructible_v<CMoon>);
}

TEST(CMoon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMoon::init), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::free), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::update), void (CMoon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMoon::render), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::renderJoystickCalibration), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::isAnimationFirstHalf), int (CMoon::*)() const>);
}

} // namespace
} // namespace nocturne::core
