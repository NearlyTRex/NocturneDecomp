#include "tests/mocks/core/scriptfixture.h"

#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {
namespace {

using CScriptCommandsTest = CScriptFixture;

TEST_F(CScriptCommandsTest, CommandsThatTakeNothingPassAlone) {
    for (const char *command : {"beginFadeIn", "beginFadeOut", "breakPoint", "cancelCameraHold",
                                "end", "fadeIn", "fadeOut", "idle", "return"}) {
        expectPasses(command);
    }
    expectSyntaxError("fadeIn()\n", 1, "Extra characters \"()\" on line 1");
}

TEST_F(CScriptCommandsTest, AnArgumentNeedsItsParentheses) {
    expectPasses("debug( Line (with parentheses) )\ngtfo(Bye)\nsetAmbientSound(rain.wav)\n");
    expectSyntaxError("debug Hello\n", 1, "No opening parenthesis");
    expectSyntaxError("gtfo(Bye\n", 1, "Can't find closing parenthesis");
}

// Each argument must be shorter than the original's buffer for it.
TEST_F(CScriptCommandsTest, EachCommandLimitsItsArgument) {
    expectPasses(std::format("chainToMission({})\n", std::string(199, 'm')));
    expectSyntaxError(std::format("chainToMission({})\n", std::string(200, 'm')), 1,
                      "Argument too long");
    expectPasses(std::format("debug({})\n", std::string(299, 'x')));
    expectSyntaxError(std::format("gtfo({})\n", std::string(300, 'x')), 1, "Argument too long");
    expectSyntaxError(std::format("setAmbientSound({})\n", std::string(100, 'x')), 1,
                      "Argument too long");
}

TEST_F(CScriptCommandsTest, ClearActorVariableTakesAVariableName) {
    expectPasses("clearActorVariable(@door_1)\n");
    expectSyntaxError("clearActorVariable(door)\n", 1, "Actor variable name must begin with '@'");
    expectSyntaxError("clearActorVariable(@door\n", 1, "Can't find closing parenthesis");
}

TEST_F(CScriptCommandsTest, DisplaySaysWhatWentWrongWithItsMessage) {
    expectPasses(std::format("display({})\n", std::string(0x3ff, 'x')));
    expectSyntaxError("display Hello\n", 1,
                      "Error parsing message text on display statament: No opening parenthesis");
}

TEST_F(CScriptCommandsTest, FinishedActAndRollCreditsTakeEmptyParentheses) {
    expectPasses("finishedAct()\nrollCredits ( )\n");
    expectSyntaxError("finishedAct(1)\n", 1, "Error parsing finishedAct command");
    expectSyntaxError("rollCredits\n", 1, "Error parsing rollCredits command");
}

TEST_F(CScriptCommandsTest, GetIniIntTakesAKeyAndACounter) {
    expectPasses("getIniInt(Gore, gore_level )\n");
    expectSyntaxError("getIniInt(Gore)\n", 1, "Error parsing getIniInt command parms");
}

TEST_F(CScriptCommandsTest, SetIniIntTakesAKeyAndANumber) {
    expectPasses("setIniInt(Gore, 2 )\n");
    expectSyntaxError("setIniInt(Gore, high)\n", 1, "Error parsing setIniInt command parms");
}

TEST_F(CScriptCommandsTest, LetterboxTakesFalseTrueOrBottom) {
    expectPasses("letterbox(false)\nletterbox(TRUE)\nletterbox( Bottom )\n");
    expectSyntaxError("letterbox(top)\n", 1, "Invalid letterBox mode: top");
    expectSyntaxError("letterbox\n", 1, "No opening parenthesis");
}

TEST_F(CScriptCommandsTest, RemoveKeysTakesAKeyNumber) {
    expectPasses("removeKeys (3 )\n");
    expectSyntaxError("removeKeys(red)\n", 1, "Error parsing removeKeys() command parms");
}

TEST_F(CScriptCommandsTest, SetSayTimeOverrideTakesSecondsOrNothing) {
    expectPasses("setSayTimeOverride()\nsetSayTimeOverride ( 2.5 )\n");
    expectSyntaxError("setSayTimeOverride 2.5\n", 1,
                      "Error parsing setSayTimeOverride parameters.");
    expectSyntaxError("setSayTimeOverride(long)\n", 1,
                      "Error parsing setSayTimeOverride parameters.");
}

TEST_F(CScriptCommandsTest, SetTimeFactorIsAboveZeroAndAtMostFour) {
    expectPasses("setTimeFactor(0.5)\nsetTimeFactor(4)\n");
    expectSyntaxError("setTimeFactor(0)\n", 1, "Invalid time factor 0");
    expectSyntaxError("setTimeFactor(4.5)\n", 1, "Invalid time factor 4.5");
    expectSyntaxError("setTimeFactor(fast)\n", 1, "Invalid time factor fast");
    expectSyntaxError("setTimeFactor 2\n", 1, "No opening parenthesis");
}

TEST_F(CScriptCommandsTest, TimedDisplayStartsWithItsSeconds) {
    expectPasses("timedDisplay(3, Hello, there)\n");
    expectSyntaxError("timedDisplay(Hello)\n", 1, "Error parsing time value");
    expectSyntaxError("timedDisplay 3\n", 1, "No opening parenthesis");
}

TEST_F(CScriptCommandsTest, WaitTakesSeconds) {
    expectPasses("wait(0.25)\n");
    expectSyntaxError("wait(soon)\n", 1, "Error parsing time value on wait statament");
}

TEST_F(CScriptCommandsTest, TheCommandsOfAConditionCheckIt) {
    for (const char *command : {"allowEnemyAttack", "allowHeroControls", "allowHeroDamage", "if",
                                "lockFocusActor", "waitFor"}) {
        expectPasses(std::format("{}( flag && cmp(count > 2) )\n", command));
        expectSyntaxError(std::format("{}(flag &)\n", command), 1, "Unexpected end of string");
        expectSyntaxError(std::format("{} flag\n", command), 1, "No opening parenthesis");
    }
}

// The original's buffer for a condition is 100 characters.
TEST_F(CScriptCommandsTest, AConditionIsShorterThan100Characters) {
    expectPasses(std::format("if({})\n", std::string(99, 'f')));
    expectSyntaxError(std::format("if({})\n", std::string(100, 'f')), 1, "Argument too long");
}

// The events check the whole line, more commands after a ';' included.
TEST_F(CScriptCommandsTest, AnEventCommandsLineIsCheckedAsEventCommands) {
    expectPasses("flagOn(a); flagOff(b)\nincCounter(count)\n");
    expectSyntaxError("flagOn(a); bogus(1)\n", 1, "Unknown meta-function starting at bogus(1)");
    expectSyntaxError("flagOn(a) junk\n", 1, "Extra characters found");
}

TEST_F(CScriptCommandsTest, RaiseTakesEventCommands) {
    expectPasses("raise( door_open; flagOn(a) )\n");
    expectSyntaxError("raise(bad name)\n", 1, "Event name bad name is not valid");
    expectSyntaxError("raise door_open\n", 1,
                      "Error parsing event expression on raise statament: No opening parenthesis");
}

// A set with a spotlight Beam, a light omni that isn't one, and a camera cam1.
class CScriptSetCommandsTest : public CScriptFixture {
protected:
    CScriptSetCommandsTest() {
        givenSet({.lights = "2\n" + lightText("omni", 1) + lightText("Beam", 0),
                  .cameras = "1\n" + cameraText("cam1"),
                  .pvs = "0\n"});
    }
};

// The light's name is taken untrimmed.
TEST_F(CScriptSetCommandsTest, AddLightFilterTakesASpotlightAndAFilterInArt) {
    givenFile("art\\glow.raw", "xx");
    givenFile("art\\empty.raw", "");
    expectPasses("addLightFilter( Beam, glow.raw, 2 )\n");
    expectSyntaxError("addLightFilter(Beam , glow.raw, 2)\n", 1, "Light \"Beam \" does not exist");
    expectSyntaxError("addLightFilter(omni, glow.raw, 2)\n", 1, "Light \"omni\" does not exist");
    expectSyntaxError("addLightFilter(Beam, empty.raw, 2)\n", 1, "Can't open filter \"empty.raw\"");
    expectSyntaxError("addLightFilter(Beam, glow.raw)\n", 1,
                      "Error parsing addLightFilter command parms");
}

TEST_F(CScriptSetCommandsTest, EnableCameraTakesACameraAndACondition) {
    expectPasses("enableCamera( CAM1 , !flag )\n");
    expectSyntaxError("enableCamera(cam9, flag)\n", 1, "Camera \"cam9\" does not exist.");
    expectSyntaxError("enableCamera(cam1, flag &)\n", 1, "Unexpected end of string");
    expectSyntaxError("enableCamera(cam1)\n", 1, "Error parsing enableCamera parms");
}

TEST_F(CScriptSetCommandsTest, SetCameraGroupTakesACameraAndAGroup) {
    expectPasses("setCameraGroup( cam1 , 2)\n");
    expectSyntaxError("setCameraGroup(cam9, 2)\n", 1, "Camera \"cam9\" does not exist.");
    expectSyntaxError("setCameraGroup(cam1, two)\n", 1, "Error parsing setCameragroup parms");
}

// Without seconds after a comma the hold is longer than any allowed.
TEST_F(CScriptSetCommandsTest, SwitchCameraTakesACameraAndAHoldTime) {
    expectPasses("switchCamera( cam1 )\nswitchCamera(cam1, 0)\nswitchCamera(cam1, 99999)\n");
    expectSyntaxError("switchCamera(cam9)\n", 1, "Camera \"cam9\" doesn't exist.");
    expectSyntaxError("switchCamera(cam1, 100000)\n", 1, "Invalid hold time value");
    expectSyntaxError("switchCamera(cam1, -1)\n", 1, "Invalid hold time value");
    expectSyntaxError("switchCamera(cam1,)\n", 1, "Invalid hold time value");
    expectSyntaxError("switchCamera(, 5)\n", 1, "Error parsing out camera name");
    expectSyntaxError("switchCamera()\n", 1, "Error parsing out camera name");
    expectSyntaxError("switchCamera cam1\n", 1, "No opening parenthesis");
}

TEST_F(CScriptCommandsTest, EnableCameraGroupTakesAGroupAndACondition) {
    expectPasses("enableCameraGroup(2 , !flag )\n");
    expectSyntaxError("enableCameraGroup(2, flag flag)\n", 1, "Syntax error");
    expectSyntaxError("enableCameraGroup(first, flag)\n", 1,
                      "Error parsing enableCameraGroup parms");
}

TEST_F(CScriptCommandsTest, GotoAndGosubTakeTheRestOfTheLineAsALabel) {
    expectPasses("goto end_part\ngosub End_Part\n:end_part\n");
    expectSyntaxError(":top\ngoto bottom\n", 2,
                      "Undefined label bottom used in goto statement on line 2");
    expectSyntaxError("gosub bottom\n", 1,
                      "Undefined label bottom used in gosub statement on line 1");
}

TEST_F(CScriptCommandsTest, SetSkipLabelTakesALabel) {
    expectPasses("setSkipLabel( skip )\n:skip\n");
    expectSyntaxError("setSkipLabel(skip)\n", 1, "Undefined label 'skip'");
    expectSyntaxError("setSkipLabel skip\n", 1, "No opening parenthesis");
}

} // namespace
} // namespace nocturne::core
