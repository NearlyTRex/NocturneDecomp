#include "core/script/script.h"
#include "tests/mocks/core/scriptfixture.h"

#include <gtest/gtest.h>

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

} // namespace
} // namespace nocturne::core
