#include "core/game/game.h"
#include "core/game/letterbox.h"
#include "core/script/script.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/scriptfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Return;

// A script loaded unchecked, as a saved game's is, run a frame of a quarter second at a time.
// letterbox shows what ran, and an error or message box waits for a key the test gives it.
class CScriptProcessTest : public CScriptFixture {
protected:
    static constexpr float kQuarterSecond = 0.25F;

    CScriptProcessTest() {
        game_.slamDT(kQuarterSecond);
    }

    void load(const std::string &text) {
        givenFile("world\\m1.scr", text);
        ASSERT_TRUE(script_.loadScript("m1.scr", true));
        script_.initRuntime();
    }

    // A frame, with that many boxes shown.
    void frame(int boxes = 0) {
        EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(boxes).WillRepeatedly(Return('x'));
        script_.process();
        ::testing::Mock::VerifyAndClearExpectations(&raw_input_);
    }

    [[nodiscard]] bool letterboxed() const {
        return game_.letterbox_mode == ELetterbox::On;
    }
};

TEST_F(CScriptProcessTest, AScriptWithoutLinesRunsNothing) {
    load("");
    frame();
    EXPECT_FALSE(letterboxed());
}

TEST_F(CScriptProcessTest, AFrameWithoutTimeRunsNothing) {
    load("letterbox(true)\nidle\n");
    game_.slamDT(0.0F);
    frame();
    EXPECT_FALSE(letterboxed());
}

// idle ends the frame's run past it, so the next frame starts after it.
TEST_F(CScriptProcessTest, AFrameRunsUntilACommandYields) {
    load("letterbox(true)\nidle\nletterbox(false)\nidle\n");
    frame();
    EXPECT_TRUE(letterboxed());
    frame();
    EXPECT_FALSE(letterboxed());
}

// A running script that steps past its last line has run off it.
TEST_F(CScriptProcessTest, RunningOffTheEndIsAnErrorThatStopsTheScript) {
    load("letterbox(true)\n");
    frame(1);
    EXPECT_TRUE(letterboxed());
    frame();
}

TEST_F(CScriptProcessTest, GotoJumpsToItsLabel) {
    load("goto skip\nletterbox(true)\n:skip\nidle\n");
    frame();
    EXPECT_FALSE(letterboxed());
}

TEST_F(CScriptProcessTest, GosubReturnsToTheLineAfterIt) {
    load("gosub sub\nidle\nletterbox(false)\nidle\n:sub\nletterbox(true)\nreturn\n");
    frame();
    EXPECT_TRUE(letterboxed());
    frame();
    EXPECT_FALSE(letterboxed());
}

// Eight gosubs deep is as far as a script goes; the ninth is an error, which stops it.
TEST_F(CScriptProcessTest, ANinthGosubOverflowsTheCallStack) {
    load(":top\ngosub top\n");
    frame(1);
    frame();
}

TEST_F(CScriptProcessTest, ReturnWithoutGosubIsAnError) {
    load("return\nletterbox(true)\nidle\n");
    frame(1);
    EXPECT_FALSE(letterboxed());
}

TEST_F(CScriptProcessTest, ElseSkipsTheStatementAfterIt) {
    load("else\nletterbox(true)\nidle\n");
    frame();
    EXPECT_FALSE(letterboxed());
}

// end holds the script on it, and the script runs no more.
TEST_F(CScriptProcessTest, EndEndsTheMission) {
    load("letterbox(true)\nend\nletterbox(false)\n");
    frame();
    EXPECT_TRUE(letterboxed());
    frame();
    EXPECT_TRUE(letterboxed());
}

// gtfo shows its message as an error once, ending the mission.
TEST_F(CScriptProcessTest, GtfoShowsItsMessageAndEndsTheMission) {
    load("gtfo(Leave)\n");
    frame(1);
    frame();
}

TEST_F(CScriptProcessTest, DebugShowsItsMessageAndRunsOn) {
    load("debug(Here)\nletterbox(true)\nidle\n");
    frame(1);
    EXPECT_TRUE(letterboxed());
}

TEST_F(CScriptProcessTest, ABreakPointStopsTheScript) {
    load("breakPoint\nletterbox(true)\nidle\n");
    frame();
    EXPECT_FALSE(letterboxed());
    frame();
    EXPECT_FALSE(letterboxed());
}

// A frame's run of 201 steps without a command ending it is a loop, warned of once.
TEST_F(CScriptProcessTest, ARunOutOfStepsWarnsOfALoopOnce) {
    load(":top\ngoto top\n");
    frame(1);
    frame();
}

// The game's steps a frame: three run, then the warning.
TEST_F(CScriptProcessTest, TheGameSetsTheStepsAFrame) {
    game_parts_.getContent().script = engine::SScriptRun{.steps_per_frame = 3};
    load("letterbox(true)\nletterbox(false)\nletterbox(true)\nletterbox(false)\nidle\n");
    frame(1);
    EXPECT_TRUE(letterboxed());
}

// An error on the last step a frame allows still leaves the run out of steps.
TEST_F(CScriptProcessTest, AnErrorOnTheLastStepAlsoWarnsOfALoop) {
    game_parts_.getContent().script = engine::SScriptRun{.steps_per_frame = 1};
    load("return\n");
    frame(2);
}

// The script's start clears its end, its stop, its calls and its warning.
TEST_F(CScriptProcessTest, StartingTheScriptRunsItAgain) {
    load("gtfo(Leave)\n");
    frame(1);
    script_.initRuntime();
    frame(1);
    load("return\n");
    frame(1);
    script_.initRuntime();
    frame(1);
    load(":top\ngoto top\n");
    frame(1);
    script_.initRuntime();
    frame(1);
    load("gosub sub\nidle\n:sub\nidle\nreturn\n");
    frame();
    script_.initRuntime();
    frame();
    frame();
    frame();
    frame(1);
}

} // namespace
} // namespace nocturne::core
