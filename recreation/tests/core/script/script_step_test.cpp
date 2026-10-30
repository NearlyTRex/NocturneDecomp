#include "common/error/fatalerror.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "tests/mocks/core/scriptfixture.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <string>

namespace nocturne::core {
namespace {

using CScriptStepTest = CScriptFixture;

TEST_F(CScriptStepTest, AScriptOfKnownCommandsPasses) {
    expectPasses("wait(1)\n{\n}\n:top\ngoto top\n");
}

TEST_F(CScriptStepTest, ASkippedCheckLoadsAnyLines) {
    givenFile("world\\m1.scr", "fly(2)\n");
    EXPECT_TRUE(script_.loadScript("m1.scr", true));
    EXPECT_EQ(script_.getParsedLines().size(), 1U);
}

TEST_F(CScriptStepTest, BracesPassWhateverFollowsThem) {
    expectPasses("{ anything\n} at all\n");
}

TEST_F(CScriptStepTest, CommandsMatchIgnoringCase) {
    expectPasses("WAIT(1)\nGoTo top\n:top\n");
}

TEST_F(CScriptStepTest, AnUnknownCommandIsAnErrorNamingTheFileLine) {
    expectSyntaxError("wait(1)\n\n// fly\nfly(2)\n", 4, "Unknown command on line 4: fly(2)");
}

TEST_F(CScriptStepTest, ANameEndsAtTheFirstCharacterThatIsNoLetterOrDigit) {
    expectSyntaxError("waitx(1)\n", 1, "Unknown command on line 1: waitx(1)");
    expectSyntaxError("wait_x(1)\n", 1, "Error parsing time value on wait statament");
}

TEST_F(CScriptStepTest, WhatACommandLeavesIsAnError) {
    expectSyntaxError("end now\n", 1, "Extra characters \"now\" on line 1");
}

TEST_F(CScriptStepTest, ALabelIsLettersDigitsAndUnderscores) {
    expectPasses(":a_1\n:\n");
    expectSyntaxError(": a-b\n", 1, "Invalid label \"a-b\" on line 1");
}

TEST_F(CScriptStepTest, ADuplicateLabelNamesBothLines) {
    expectSyntaxError(":top\nwait(1)\n: TOP\n", 3, "Duplicate label TOP on lines 3 and 1");
}

TEST_F(CScriptStepTest, SyntaxCheckOffPassesOverCommandsUntilSyntaxCheckOn) {
    expectPasses("syntaxCheckOff\nfly(1)\nsyntaxCheckOn trailing\nwait(1)\n");
    expectSyntaxError("syntaxCheckOff\nfly(1)\nsyntaxCheckOn\nfly(2)\n", 4,
                      "Unknown command on line 4: fly(2)");
}

TEST_F(CScriptStepTest, LabelsAreCheckedWhileTheCheckIsOff) {
    expectSyntaxError("syntaxCheckOff\n:a b\n", 2, "Invalid label \"a b\" on line 2");
}

TEST_F(CScriptStepTest, EachLoadStartsWithTheCheckOn) {
    expectPasses("syntaxCheckOff\n");
    expectSyntaxError("fly(1)\n", 1, "Unknown command on line 1: fly(1)");
}

// else checks that a statement follows it to skip.
TEST_F(CScriptStepTest, ElseNeedsAStatementAfterIt) {
    expectPasses("else\nwait(1)\n");
    expectSyntaxError("wait(1)\nelse\n", 2,
                      "Can't skip next command after else statement on line 2");
}

TEST_F(CScriptStepTest, ElseSkipsABlockWithSomethingAfterIt) {
    expectPasses("else\n{\nwait(1)\n{\n}\n}\nend\n");
    expectSyntaxError("else\n{\nwait(1)\n}\n", 1,
                      "Can't skip next command after else statement on line 1");
}

TEST_F(CScriptStepTest, ElseBeforeAClosingBraceSkipsNothing) {
    expectPasses("{\nelse\n}\n");
}

TEST_F(CScriptStepTest, ASkippedBlockMayEndAtAnUnmatchedClosingBrace) {
    expectPasses("else\n{\n}\n}\n");
}

TEST_F(CScriptStepTest, AnInnerSkipThatRunsOffTheEndFails) {
    expectSyntaxError("else\nelse\n{\nwait(1)\n", 1,
                      "Can't skip next command after else statement on line 1");
}

TEST_F(CScriptStepTest, ElseSkipsAnotherElseWithItsStatement) {
    expectPasses("else\nelse\nwait(1)\nend\n");
    expectSyntaxError("else\nelse\nwait(1)\n", 1,
                      "Can't skip next command after else statement on line 1");
}

TEST_F(CScriptStepTest, ElseSkipsAnIfWithItsStatementInsideABlock) {
    expectPasses("else\n{\nif(a)\nif(b)\nwait(1)\n}\nend\n");
}

TEST_F(CScriptStepTest, AnIfAfterTheSkippedStatementIsNotTakenIn) {
    expectPasses("else\n{\n}\nif(a)\n");
}

// A set with the cameras near and far, both in group 0 and enabled as a set loads them, and a
// script loaded unchecked, as a saved game's is, so it can hold what the check would refuse.
class CScriptInitSectionTest : public CScriptFixture {
protected:
    CScriptInitSectionTest() {
        givenSet({.cameras = "2\n" + cameraText("near") + cameraText("far"), .pvs = "0\n0\n"});
    }

    void run(const std::string &text) {
        givenFile("world\\m1.scr", text);
        ASSERT_TRUE(script_.loadScript("m1.scr", true));
        script_.executeInitSection();
    }

    void expectRunQuits(const std::string &text, const std::string &message) {
        EXPECT_THAT([&] { run(text); },
                    ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(message)))
            << text;
    }

    [[nodiscard]] int group(std::size_t camera) const {
        return set_.getCameras()[camera].getCameraGroup();
    }

    [[nodiscard]] bool enabled(std::size_t camera) const {
        return set_.getCameras()[camera].getEnabled();
    }
};

// HQ-ACT1.SCR's initsection, cut down: its labels are written in lower case.
TEST_F(CScriptInitSectionTest, TheSectionsCommandsRunFromItsLabelToItsEnd) {
    run("setCameraGroup(near, 9)\n:initsection\nsetcameragroup(near, 1)\n"
        "setcameragroup(far, 10)\nenablecameragroup(1, false)\n:initsectionend\n"
        "setCameraGroup(far, 9)\n");
    EXPECT_EQ(group(0), 1);
    EXPECT_EQ(group(1), 10);
    EXPECT_FALSE(enabled(0));
    EXPECT_TRUE(enabled(1));
}

TEST_F(CScriptInitSectionTest, AConditionThatHoldsEnablesTheGroup) {
    run(":initSection\nenableCameraGroup(0, false)\nenableCameraGroup(0, !false)\n"
        ":initSectionEnd\n");
    EXPECT_TRUE(enabled(0));
    EXPECT_TRUE(enabled(1));
}

TEST_F(CScriptInitSectionTest, AScriptWithoutASectionRunsNothing) {
    run("setCameraGroup(near, 9)\n");
    EXPECT_EQ(group(0), 0);
    run("");
    EXPECT_EQ(group(0), 0);
}

TEST_F(CScriptInitSectionTest, ASectionWithoutItsEndIsFatal) {
    expectRunQuits(":initSection\nsetCameraGroup(near, 9)\n",
                   R"(Script has "initSection" label, but no "initSectionEnd" label.)");
}

// Run past its last line, the script has nowhere to go.
TEST_F(CScriptInitSectionTest, AnEndBeforeTheSectionRunsOffTheScript) {
    expectRunQuits(":initSectionEnd\n:initSection\n{\n",
                   "CScript::step - Invalid instruction pointer!\n(This is an internal script "
                   "processing error,\nand doesn't mean there's anything wrong with the\nscript "
                   "file.)");
}

// The label, then ten thousand opening braces, none of them its end.
TEST_F(CScriptInitSectionTest, TenThousandStepsWithoutTheEndAreFatal) {
    std::string text = ":initSection\n";
    for (int i = 0; i < 10000; ++i) {
        text += "{\n";
    }
    run(text + ":initSectionEnd\n");
    expectRunQuits(text + "{\n:initSectionEnd\n", "Infinite loop detected in initSection.\n");
}

TEST_F(CScriptInitSectionTest, ACommandThatFailsIsFatalNamingItsLine) {
    expectRunQuits("\n:initSection\nsetCameraGroup(gone, 1)\n:initSectionEnd\n",
                   "Error processing script.\nLine: 3\nText: setCameraGroup(gone, 1)\nWhat's "
                   "wrong: Camera \"gone\" does not exist.\n");
}

// The section takes the check's commands, once the check passed.
TEST_F(CScriptInitSectionTest, ACheckedScriptRunsItsSectionToo) {
    givenFile("world\\m1.scr", ":initSection\nsetCameraGroup(near, 4)\n:initSectionEnd\n");
    ASSERT_TRUE(script_.loadScript("m1.scr", false));
    script_.executeInitSection();
    EXPECT_EQ(group(0), 4);
}

TEST_F(CScriptInitSectionTest, RunningACommandNotPortedYetQuits) {
    expectRunQuits(":initSection\nsetAmbientSound(HQ.WAV @ .2)\n:initSectionEnd\n",
                   "CScript::step running setAmbientSound is not ported yet");
}

// A running script neither checks a label nor heeds syntaxCheckOff.
TEST_F(CScriptInitSectionTest, ARunningScriptPassesOverLabelsAndTheCheckSwitches) {
    run(":initSection\n:not a label!\nsyntaxCheckOff\nsetCameraGroup(near, 5)\nsyntaxCheckOn\n"
        ":initSectionEnd\n");
    EXPECT_EQ(group(0), 5);
}

} // namespace
} // namespace nocturne::core
