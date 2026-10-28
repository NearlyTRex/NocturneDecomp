#include "common/error/fatalerror.h"
#include "core/actor/demonactortype.h"
#include "core/event/eventlist.h"
#include "core/lever/lever.h"
#include "tests/mocks/core/scriptfixture.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr CDemonActorType kLeverType = makeActorType("CTestLever", &CLever::kType, nullptr, 1);

// A hero Gabriel, a character Mob and a lever Lever1, with no game hero for "$" unless the test
// adds one.
class CEventListCommandTest : public CScriptFixture {
protected:
    CEventListCommandTest() {
        addActor("Gabriel", kScriptHeroType);
        addActor("Mob", kScriptCharacterType);
        addActor("Lever1", kLeverType);
    }

    // A set with a spotlight Beam of two filters, a light omni that isn't one, and a camera cam1.
    void givenLightsAndCamera() {
        givenSet({.lights = "2\n" + lightText("omni", 1) + lightText("Beam", 0),
                  .cameras = "1\n" + cameraText("cam1"),
                  .pvs = "0\n"});
    }

    void expectValid(std::string_view commands) {
        EXPECT_TRUE(events_.validateCommands(commands).has_value()) << commands;
    }

    void expectError(std::string_view commands, std::string_view message) {
        const CEventList::CheckResult result = events_.validateCommands(commands);
        ASSERT_FALSE(result.has_value()) << commands;
        EXPECT_EQ(result.error(), message) << commands;
    }

    void expectNotPorted(std::string_view commands, const std::string &message) {
        EXPECT_THAT([&] { return events_.validateCommands(commands); },
                    ThrowsMessage<common::CFatalError>(StrEq(message)))
            << commands;
    }

    static std::string wrongClass(const std::string &name, const std::string &type,
                                  const std::string &needed) {
        return std::format("Actor \"{}\" is of type {}, this command requires an actor of type {}.",
                           name, type, needed);
    }
};

TEST_F(CEventListCommandTest, NothingOrNoneIsValid) {
    expectValid("");
    expectValid("NONE");
    expectValid(std::string_view("\0garbage", 8));
}

TEST_F(CEventListCommandTest, CommandsAreSeparatedBySemicolonsAndEmptyOnesPassedOver) {
    expectValid(" .flagOn(a) ; ; flagOff(b) ;");
    expectError("flagOn(a); bogus(1)", "Unknown meta-function starting at bogus(1)");
}

TEST_F(CEventListCommandTest, ACommandWithoutParenthesesRaisesAnEvent) {
    expectValid("door_open-2");
    expectValid(std::string(31, 'e'));
    expectError(std::string(32, 'e'),
                std::format("Event name {} is too long", std::string(32, 'e')));
    expectError("bad name", "Event name bad name is not valid");
}

// The name must be followed by something other than a letter or digit.
TEST_F(CEventListCommandTest, AFunctionIsKnownByItsWholeName) {
    expectError("flagOnce(a)", "Unknown meta-function starting at flagOnce(a)");
    expectError("flagOn_x(a)", "No opening parenthesis");
}

TEST_F(CEventListCommandTest, NothingMayFollowTheArguments) {
    expectValid("flagOn(a)  ");
    expectError("flagOn(a) junk", "Extra characters found");
}

// The parentheses must hold fewer than 32 characters, spaces included. Without a '(' anywhere the
// command is an event's name.
TEST_F(CEventListCommandTest, AFlagsNameIsShorterThan32Characters) {
    for (const char *command : {"flagOn", "flagOff", "gameFlagOn", "gameFlagOff"}) {
        expectValid(std::format("{} ({})", command, std::string(31, 'f')));
        expectError(std::format("{}({} )", command, std::string(31, 'f')), "Argument too long");
        expectError(std::format("{} f()", command), "No opening parenthesis");
        expectError(std::format("{} f", command),
                    std::format("Event name {} f is not valid", command));
    }
}

TEST_F(CEventListCommandTest, AdvanceLightFilterTakesASpotlight) {
    givenLightsAndCamera();
    expectValid("advanceLightFilter( beam )");
    expectError("advanceLightFilter(omni)", "SpotLight omni doesn't exist.");
    expectError("advanceLightFilter beam()", "No opening parenthesis");
}

TEST_F(CEventListCommandTest, CreateExplosionTakesARadiusAPlaceAndADamage) {
    expectValid("createExplosion( 5 , 1 , 2 , 3 ) ; createExplosion(5, Mob) ; "
                "createExplosion(5, Mob , 10 ) ; createExplosion(5, $)");
    expectError("createExplosion(5, Nobody)", "Actor \"Nobody\" does not exist.");
    expectError("createExplosion(big, Mob)", "Error parsing createExplosion() parms");
    expectError("createExplosion(5, )", "Error parsing createExplosion() parms");
    expectError("createExplosion(5, Mob, much)", "Error parsing createExplosion() parms");
    expectError("createExplosion(5, Mob",
                "Error parsing createExplosion() parms, expected matching ')'");
}

TEST_F(CEventListCommandTest, DeleteActorTakesAnyActor) {
    expectValid("deleteActor( Lever1 ) ; deleteActor($)");
    expectError("deleteActor(Nobody)", "Actor \"Nobody\" does not exist.");
    expectError("deleteActor Mob()", "No opening parenthesis");
}

TEST_F(CEventListCommandTest, DisplayBitmapTakesABitmapOfItsSize) {
    givenFile("art\\pic.raw", std::string(8, 'x'));
    expectValid("displayBitmap( pic.raw, 4, 2 )");
    expectError("displayBitmap(pic.raw, 3, 3)",
                "Bitmap file size does not match specified dimensions");
    expectError("displayBitmap(none.raw, 1, 1)", "Bitmap doesn't exist");
    expectError("displayBitmap(pic.raw)", "Error parsing displayBitmap() parms");
}

TEST_F(CEventListCommandTest, TheFadesTakeTheirNumbers) {
    expectValid("fadeAmbientSound(0.5, 2) ; fadeSfx( bell , 0.5, 2 )");
    expectError("fadeAmbientSound(0.5)", "Error parsing fadeAmbientSound parms");
    expectError("fadeSfx(bell, 0.5)", "Error parsing fadeSfx parms");
}

// The original's message for hurtCharacter names killHero.
TEST_F(CEventListCommandTest, HurtCharacterTakesACharacterADamageTypeAndAnAmount) {
    expectValid("hurtCharacter( Mob , fire ,10) ; hurtCharacter($, electrocute, 1)");
    expectError("hurtCharacter(Mob, laser, 10)",
                "Unknown damage type \"laser\" in hurtCharacter command.");
    expectError("hurtCharacter(Lever1, Fire, 1)", wrongClass("Lever1", "CTestLever", "CCharacter"));
    expectError("hurtCharacter(Mob)", "Syntax error in killHero() parms");
}

// The original's scan had to take five characters, so a two-letter counter needs a space.
TEST_F(CEventListCommandTest, IncCounterTakesACounter) {
    expectValid("incCounter(count) ; incCounter( ab )");
    expectError("incCounter(ab)", "Error parsing incCounter arguments");
    expectError("incCounter()", "Error parsing incCounter arguments");
}

TEST_F(CEventListCommandTest, KillCharacterTakesADeathTypeAndADirection) {
    expectValid("killCharacter(Mob, FALL) ; killCharacter(Mob, fall, 1, 2, 3) ; "
                "killCharacter( Mob , fall , 1 , 2 , 3 , 90) ; killCharacter(Mob, gas)");
    expectError("killCharacter(Mob, melt)",
                "Unknown death type \"melt\" in killCharacter command.");
    expectError("killCharacter(Nobody, fall)", "Actor \"Nobody\" does not exist.");
    expectError("killCharacter(Mob)", "Syntax error in killCharacter() parms");
}

// The death type isn't trimmed, so a space after it makes it unknown.
TEST_F(CEventListCommandTest, KillHeroTakesADeathType) {
    expectValid("killHero(fall) ; killHero( gas)");
    expectError("killHero( fall )", "Unknown death type \"fall \" in killHero command.");
    expectError("killHero()", "Syntax error in killHero() parms");
}

// The original's scans had to take three characters.
TEST_F(CEventListCommandTest, KillSfxTakesAHandleAndAFade) {
    expectValid("killSfx( bell ) ; killSfx(bell, 2.5 ) ; killSfx(bell, 1)");
    expectError("killSfx(b)", "Error parsing killSfx parms");
    expectError("killSfx()", "Error parsing killSfx parms");
    expectError("killSfx(bell, soon)", "Error parsing killSfx parms");
    expectError("killSfx(bell,1)", "Error parsing killSfx parms");
    expectError("killSfx(bell", "Can't find matching ) in killSfx command");
}

TEST_F(CEventListCommandTest, LightningTakesNothing) {
    expectValid("lightning( )");
    expectError("lightning(1)", "Error parsing lightning command");
}

// The original's scans had to take three characters, as killSfx's did.
TEST_F(CEventListCommandTest, PlaySfxTakesASoundAndAHandle) {
    expectValid("playSfx(bell.wav) ; playSfx( bell.wav , handle ) ");
    expectValid(std::format("playSfx(bell.wav, {})", std::string(19, 'h')));
    expectError(std::format("playSfx(bell.wav, {})", std::string(20, 'h')),
                std::format("handle name {} is too long, max 19 chars", std::string(20, 'h')));
    expectError("playSfx(b)", "Error parsing playSfx parms");
    expectError("playSfx()", "Error parsing playSfx parms");
    expectError("playSfx(bell.wav,)", "Error parsing playSfx parms");
    expectError("playSfx(bell.wav,h)", "Error parsing playSfx parms");
    expectError("playSfx(bell.wav", "Can't find matching ) in playSfx command");
}

TEST_F(CEventListCommandTest, TheAmbientCommandsTakeAPercentage) {
    givenLightsAndCamera();
    expectValid("setCameraAmbient( CAM1 , 50) ; setGroupAmbient(2, 100)");
    expectError("setCameraAmbient(cam9, 50)", "Camera \"cam9\" does not exist.");
    expectError("setCameraAmbient(cam1, 150)", "Ambient value 150 is out of range (1..100)");
    expectError("setGroupAmbient(2, -0.5)", "Ambient value -0.5 is out of range (1..100)");
    expectError("setCameraAmbient(cam1)", "Error parsing setCameraAmbient parms");
    expectError("setGroupAmbient(two, 5)", "Error parsing setGroupAmbient parms");
}

// The original's scan of "( counter" had to take five characters.
TEST_F(CEventListCommandTest, SetCounterTakesACounterAndAValue) {
    expectValid("setCounter(count) ; setCounter( count ,5 )");
    expectError("setCounter(abc)", "Error parsing setCounter arguments");
    expectError("setCounter()", "Error parsing setCounter arguments");
    expectError("setCounter(count, many)", "Error parsing setCounter value argument");
    expectError("setCounter(count", "Error parsing setCounter arguments");
}

TEST_F(CEventListCommandTest, SetLightFilterFrameTakesOneOfTheSpotlightsFilters) {
    givenLightsAndCamera();
    expectValid("setLightFilterFrame( Beam , 1 )");
    expectError("setLightFilterFrame(Beam, 2)", "Invalid filter frame, Beam has 2 filters");
    expectError("setLightFilterFrame(Beam, -1)", "Invalid filter frame, Beam has 2 filters");
    expectError("setLightFilterFrame(omni, 0)", "SpotLight omni doesn't exist.");
    expectError("setLightFilterFrame(Beam)", "Error parsing setLightFilterFrame parms");
}

TEST_F(CEventListCommandTest, SetLeverStateTakesALeverAndACondition) {
    expectValid("setLeverState( Lever1 , !flag )");
    expectError("setLeverState(Lever1, flag &)", "Unexpected end of string");
    expectError("setLeverState(Mob, flag)", wrongClass("Mob", "CTestCharacter", "CLever"));
    expectError("setLeverState(Lever1)", "Error parsing setLeverState command parms");
}

TEST_F(CEventListCommandTest, TheModelCommandsNeedTheModelsMotionsWhichAreNotPortedYet) {
    expectValid("setModelState($, walk) ; slamModelToMotion($, run)");
    expectNotPorted("setModelState(Mob, walk)", "CMotionList::findStateIndex is not ported yet");
    expectNotPorted("slamModelToMotion(Mob, run)",
                    "CMotionList::findMotionIndex is not ported yet");
    expectError("setModelState(Nobody, walk)", "Actor \"Nobody\" does not exist.");
    expectError("setModelState(Mob)", "Error parsing setModelState command parms");
    expectError("slamModelToMotion(Mob)", "Error parsing slamModelToMotion command parms");
}

TEST_F(CEventListCommandTest, SetTimerTakesANameAndSeconds) {
    expectValid(std::format("setTimer( {} , 5)", std::string(31, 't')));
    expectError(std::format("setTimer({}, 5)", std::string(32, 't')),
                std::format("Timer name \"{}\" is too long, (max 31 chars)", std::string(32, 't')));
    expectError("setTimer(t1, -1)", "Invalid timer duration");
    expectError("setTimer(t1)", "Error parsing setTimer command parms");
}

TEST_F(CEventListCommandTest, SetWeatherTakesNoneRainOrSnow) {
    expectValid("setWeather( Rain ) ; setWeather(none) ; setWeather(SNOW)");
    expectError("setWeather(fog)", "Invalid weather type: fog");
    expectError("setWeather()", "Error parsing setWeather command parms");
}

TEST_F(CEventListCommandTest, ShakeScreenTakesFourNumbers) {
    expectValid("shakeScreen( 1, 2, 3, 4 )");
    expectError("shakeScreen(1, 2, 3)", "Error parsing shakeScreen command parms");
}

TEST_F(CEventListCommandTest, SwitchCameraTakesACameraAndSeconds) {
    givenLightsAndCamera();
    expectValid("switchCamera( cam1 ) ; switchCamera(cam1 ,2 )");
    expectError("switchCamera(cam9)", "Camera \"cam9\" doesn't exist");
    expectError("switchCamera()", "Syntax error in switchCamera() parms");
    expectError("switchCamera(cam1, soon)", "Syntax error in switchCamera() parms");
    expectError("switchCamera(cam1 junk", "Missing ')' in switchCamera() statement");
}

// The place is all of the second argument: three numbers, four or six, or an actor.
TEST_F(CEventListCommandTest, WarpToTakesAnActorAndAPlace) {
    expectValid("warpTo( Mob , 1,2,3 ) ; warpTo(Mob, 1,2,3,90) ; warpTo(Mob, 1,2,3,4,5,6) ; "
                "warpTo($, Gabriel)");
    expectError("warpTo(Mob, $)", "Error parsing warpTo command parms");
    expectError("warpTo(Mob, 1,2,3 4)", "Error parsing warpTo command parms");
    expectError("warpTo(Mob, Nobody)", "Actor \"Nobody\" does not exist.");
    expectError("warpTo(Nobody, 1,2,3)", "Actor \"Nobody\" does not exist.");
    expectError("warpTo(Mob)", "Error parsing warpTo command parms");
}

} // namespace
} // namespace nocturne::core
