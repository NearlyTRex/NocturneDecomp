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

// A microsecond is 1.18 ticks: each call keeps the whole tick and drops the rest.
TEST_F(CWinRunTest, GetTimeTruncatesEachStep) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + 1))
        .WillOnce(Return(kStart + 2))
        .WillOnce(Return(kStart + 3));
    EXPECT_EQ(winrun_.getTime(), 1);
    EXPECT_EQ(winrun_.getTime(), 2);
    EXPECT_EQ(winrun_.getTime(), 3);
}

// About half an hour in, the count passes what an int holds and goes negative, as it did.
TEST_F(CWinRunTest, GetTimeWrapsLikeTheOriginalsInt) {
    EXPECT_CALL(clock_, getCounter)
        .WillOnce(Return(kStart + (1'820 * kFrequency)))
        .WillOnce(Return(kStart + (1'821 * kFrequency)));
    EXPECT_EQ(winrun_.getTime(), 2'146'959'360);
    EXPECT_EQ(winrun_.getTime(), -2'146'828'288);
}

} // namespace
} // namespace nocturne::wincore
