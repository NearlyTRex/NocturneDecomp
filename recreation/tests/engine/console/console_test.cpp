#include "engine/console/console.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>

namespace nocturne::engine {
namespace {

using ::testing::Return;

constexpr std::string_view kLog = "console.txt";

class CConsoleTest : public ::testing::Test {
protected:
    CConsoleTest() {
        EXPECT_CALL(file_system_, removeFile(kLog)).WillRepeatedly(Return(true));
    }

    ::testing::NiceMock<platform::MockFileSystem> file_system_;
    CConsole console_{file_system_, 40, 32, 1, 1};
};

TEST(CConsole, ConstructingRemovesTheLastLog) {
    platform::MockFileSystem file_system;
    EXPECT_CALL(file_system, removeFile(kLog)).WillOnce(Return(false));
    const CConsole console(file_system, 40, 32, 1, 1);
    EXPECT_EQ(console.getConsoleWidth(), 40);
    EXPECT_EQ(console.getConsoleHeight(), 32);
    EXPECT_EQ(console.file_logging_enabled, 0);
}

TEST_F(CConsoleTest, PrintfWritesAtTheCursor) {
    console_.printf("Loading set");
    EXPECT_EQ(console_.getRow(0), "Loading set");
    EXPECT_EQ(console_.getCurrentRow(), 0);
    EXPECT_EQ(console_.getCurrentColumn(), 11);
}

// Each printf ends the row's text at the cursor, so the next one carries on from there.
TEST_F(CConsoleTest, ConsecutivePrintfsJoinOnOneRow) {
    console_.printf("abc");
    console_.printf("d");
    EXPECT_EQ(console_.getRow(0), "abcd");
}

TEST_F(CConsoleTest, ANewlineStartsTheNextRow) {
    console_.printf("one\ntwo");
    EXPECT_EQ(console_.getRow(0), "one");
    EXPECT_EQ(console_.getRow(1), "two");
    EXPECT_EQ(console_.getCurrentRow(), 1);
    EXPECT_EQ(console_.getCurrentColumn(), 3);
}

TEST_F(CConsoleTest, TextWrapsAtTheConsoleWidth) {
    console_.printf(std::string(41, 'x'));
    EXPECT_EQ(console_.getRow(0), std::string(40, 'x'));
    EXPECT_EQ(console_.getRow(1), "x");
}

// The shipped console scrolled at its 32nd row and lost the line; this one keeps it.
TEST_F(CConsoleTest, LinesPastTheScreenStayAsScrollback) {
    for (int line = 0; line < 40; ++line) {
        console_.printf(std::to_string(line) + "\n");
    }
    EXPECT_EQ(console_.getRow(0), "0");
    EXPECT_EQ(console_.getRow(39), "39");
    EXPECT_EQ(console_.getCurrentRow(), 40);
}

TEST_F(CConsoleTest, AFullGridScrollsAndHoldsTheCursorOnTheLastRow) {
    for (int line = 0; line < CConsole::kMaxRows; ++line) {
        console_.printf(std::to_string(line) + "\n");
    }
    EXPECT_EQ(console_.getRow(0), "1");
    EXPECT_EQ(console_.getRow(CConsole::kMaxRows - 2), "199");
    EXPECT_EQ(console_.getRow(CConsole::kMaxRows - 1), "");
    EXPECT_EQ(console_.getCurrentRow(), CConsole::kMaxRows - 1);
    EXPECT_EQ(console_.getCurrentColumn(), 0);
}

TEST_F(CConsoleTest, WrappingOnTheLastRowScrollsToo) {
    for (int line = 0; line < CConsole::kMaxRows - 1; ++line) {
        console_.printf("\n");
    }
    console_.printf(std::string(40, 'y'));
    EXPECT_EQ(console_.getRow(CConsole::kMaxRows - 2), std::string(40, 'y'));
    EXPECT_EQ(console_.getCurrentRow(), CConsole::kMaxRows - 1);
}

TEST_F(CConsoleTest, ScrollUpMovesEveryRowUpAndBlanksTheLast) {
    console_.printf("top\nnext");
    console_.scrollUp();
    EXPECT_EQ(console_.getRow(0), "next");
    EXPECT_EQ(console_.getRow(1), "");
}

TEST_F(CConsoleTest, ResetClearsTheGridAndCursorAndRemovesTheLog) {
    console_.printf("one\ntwo");
    EXPECT_CALL(file_system_, removeFile(kLog)).WillOnce(Return(true));
    console_.reset();
    EXPECT_EQ(console_.getRow(0), "");
    EXPECT_EQ(console_.getRow(1), "");
    EXPECT_EQ(console_.getCurrentRow(), 0);
    EXPECT_EQ(console_.getCurrentColumn(), 0);
}

TEST_F(CConsoleTest, PrintfAppendsToTheLogOnlyWhenLoggingIsOn) {
    EXPECT_CALL(file_system_, appendFile).Times(0);
    console_.printf("quiet\n");
    console_.file_logging_enabled = 1;
    EXPECT_CALL(file_system_, appendFile(kLog, std::string_view("logged\n")))
        .WillOnce(Return(true));
    console_.printf("logged\n");
}

TEST_F(CConsoleTest, AtSixFortyByFourEightyTheConsoleFillsTheScreenAtOneX) {
    console_.fitToScreen(640, 480);
    EXPECT_EQ(console_.getScale(), 1);
    EXPECT_EQ(console_.getConsoleWidth(), 91);
    EXPECT_EQ(console_.getConsoleHeight(), 43);
}

// 3x would leave 32 rows, under the 40 that make it worth reading, so it stays at 2x.
TEST_F(CConsoleTest, AtTenEightyTheGlyphsDoubleWhileFortyRowsStillFit) {
    console_.fitToScreen(1920, 1080);
    EXPECT_EQ(console_.getScale(), 2);
    EXPECT_EQ(console_.getConsoleWidth(), 137);
    EXPECT_EQ(console_.getConsoleHeight(), 48);
}

TEST_F(CConsoleTest, ScalingStopsAtEightAndTheGridAtItsLimits) {
    console_.fitToScreen(20000, 20000);
    EXPECT_EQ(console_.getScale(), 8);
    EXPECT_EQ(console_.getConsoleWidth(), CConsole::kMaxColumns);
    EXPECT_EQ(console_.getConsoleHeight(), CConsole::kMaxRows);
}

TEST_F(CConsoleTest, ATinyScreenStillGetsOneCell) {
    console_.fitToScreen(4, 4);
    EXPECT_EQ(console_.getScale(), 1);
    EXPECT_EQ(console_.getConsoleWidth(), 1);
    EXPECT_EQ(console_.getConsoleHeight(), 1);
}

// The corner is kept at least one pixel in, so a console placed at 0,0 lays out as one at 1,1.
TEST(CConsole, AConsoleAtTheOriginLaysOutFromOneOne) {
    ::testing::NiceMock<platform::MockFileSystem> file_system;
    CConsole console(file_system, 40, 32, 0, -5);
    console.fitToScreen(640, 480);
    EXPECT_EQ(console.getConsoleWidth(), 91);
    EXPECT_EQ(console.getConsoleHeight(), 43);
}

} // namespace
} // namespace nocturne::engine
