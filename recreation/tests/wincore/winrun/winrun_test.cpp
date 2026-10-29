#include "common/error/fatalerror.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockwindow.h"
#include "wincore/winrun/winrun.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string_view>
#include <type_traits>

namespace nocturne::wincore {
namespace {

using ::testing::Return;

TEST(CWinRun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWinRun::getTime), int (CWinRun::*)()>);
    static_assert(std::is_same_v<decltype(&CWinRun::clearKeypresses), void (CWinRun::*)()>);
    static_assert(std::is_same_v<decltype(&CWinRun::getNextKeypress),
                                 int (CWinRun::*)(engine::IScreenDevice &)>);
    static_assert(std::is_same_v<decltype(&CWinRun::wasKeyPressed), int (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::enqueueInput), void (CWinRun::*)(int)>);
    static_assert(std::is_same_v<decltype(&CWinRun::clearMouseClicks), void (CWinRun::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWinRun::setCursorPosition), void (CWinRun::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CWinRun::processWindowMessages), void (CWinRun::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWinRun::getKeyName), char *(CWinRun::*)(engine::EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CWinRun::getInputDisabled), bool (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::getFocusRegained), bool (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::setFocusRegained), void (CWinRun::*)(bool)>);
    static_assert(std::is_base_of_v<engine::IRawInput, CWinRun>);
}

class CWinRunTest : public ::testing::Test {
protected:
    static constexpr std::uint64_t kFrequency = 1'000'000;
    static constexpr std::uint64_t kStart = 5'000'000'000;

    // The construction reads the clock before the fixture's body runs.
    static platform::MockClock &prime(platform::MockClock &clock) {
        EXPECT_CALL(clock, getCounterFrequency).WillOnce(Return(kFrequency));
        EXPECT_CALL(clock, getCounter).WillOnce(Return(kStart));
        return clock;
    }

    platform::MockWindow window_;
    platform::MockClock clock_;
    CWinRun winrun_{window_, prime(clock_)};
};

TEST_F(CWinRunTest, TheMessageBoxNamesTheFileAndLine) {
    EXPECT_CALL(window_,
                showMessageBox(std::string_view("Out of memory\n\nFile: pod.cpp\nLine: 88"),
                               std::string_view("Nocturne")));
    winrun_.displayMessageBoxAndQuit(common::CFatalError("Out of memory", "pod.cpp", 88, 0));
}

TEST_F(CWinRunTest, GetTimeCountsTicksFromTheCounterReadAtConstruction) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + kFrequency))
        .WillOnce(Return(kStart + kFrequency));
    EXPECT_EQ(winrun_.getTime(), 65536 * 18);
    EXPECT_EQ(winrun_.getTime(), 65536 * 18);
}

// A microsecond is 1.18 ticks: each call counts the whole ticks and carries the rest on.
TEST_F(CWinRunTest, GetTimeCountsWholeTicksAndCarriesTheFraction) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + 1))
        .WillOnce(Return(kStart + 2))
        .WillOnce(Return(kStart + 3))
        .WillOnce(Return(kStart + 6));
    EXPECT_EQ(winrun_.getTime(), 1);
    EXPECT_EQ(winrun_.getTime(), 2);
    EXPECT_EQ(winrun_.getTime(), 3);
    EXPECT_EQ(winrun_.getTime(), 7);
}

// The original dropped each call's fraction, so a loop reading the clock every microsecond saw
// it run at 1 tick a microsecond instead of 1.18; over a hundred reads it lost 17 ticks.
TEST_F(CWinRunTest, ATightLoopLosesNoTime) {
    std::uint64_t counter = kStart;
    EXPECT_CALL(clock_, getCounter).WillRepeatedly([&] { return ++counter; });
    int time = 0;
    for (int read = 0; read < 100; ++read) {
        time = winrun_.getTime();
    }
    EXPECT_EQ(time, 117);
}

// About half an hour in, the count passes what an int holds and goes negative, as it did.
TEST_F(CWinRunTest, GetTimeWrapsLikeTheOriginalsInt) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + (1'820 * kFrequency)))
        .WillOnce(Return(kStart + (1'821 * kFrequency)));
    EXPECT_EQ(winrun_.getTime(), 2'146'959'360);
    EXPECT_EQ(winrun_.getTime(), -2'146'828'288);
}

// A single step of more than about half an hour is too long for an int; FISTP stores the
// integer indefinite, which the count then adds.
TEST_F(CWinRunTest, GetTimeAddsTheIntegerIndefiniteForAnOverlongStep) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + kFrequency))
        .WillOnce(Return(kStart + (1'822 * kFrequency)));
    EXPECT_EQ(winrun_.getTime(), 65536 * 18);
    EXPECT_EQ(winrun_.getTime(), (65536 * 18) - 0x7fffffff - 1);
}

} // namespace
} // namespace nocturne::wincore
