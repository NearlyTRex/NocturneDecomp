#include "tests/mocks/core/scriptfixture.h"

#include <gtest/gtest.h>

#include <format>
#include <string>

namespace nocturne::core {
namespace {

// A character Mob and a door Door1, and a dialogue database whose lines Mob, someone missing and
// the Stranger say. There is no game hero for "$" unless the test adds one.
class CScriptDialogTest : public CScriptFixture {
protected:
    CScriptDialogTest() {
        addActor("Mob", kScriptCharacterType);
        addActor("Door1", kScriptDoorType);
        givenFile("world\\m1.txt",
                  "hello, Mob, Hello.\nbye, Nobody, Bye.\nlater, stranger, Later.\n");
    }
};

TEST_F(CScriptDialogTest, SayTakesASpeakerASoundAndACaption) {
    expectPasses("say(Mob, hi.wav, Hello)\nstartSay( Mob , hi.wav , )\nsay($, hi.wav, Hi)\n");
    expectSyntaxError(
        "say(Door1, hi.wav, Hi)\n", 1,
        "Actor \"Door1\" is of type CTestDoor, this command requires an actor of type "
        "CCharacter.");
    expectSyntaxError("startSay(Nobody, hi.wav, Hi)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("say Mob\n", 1, "No opening parenthesis");
    expectSyntaxError(std::format("say(Mob, hi.wav, {})\n", std::string(500, 'x')), 1,
                      "Argument too long");
}

// The original's scan of "speaker, sound," had to take five characters.
TEST_F(CScriptDialogTest, SayNeedsItsSpeakerAndSound) {
    expectSyntaxError("say(Mob, hi.wav)\n", 1, "Error parsing speaker and wav arguments");
    expectSyntaxError("startSay(a,b,c)\n", 1, "Error parsing speaker and wav arguments");
    expectPasses("say(Mob, b,c)\n");
}

TEST_F(CScriptDialogTest, DbSayTakesALineOfTheDatabaseWhoseSpeakerMustExist) {
    expectPasses("dbSay(hello)\ndbStartSay( hello.wav )\ndbSay(later)\n");
    expectSyntaxError("dbSay(bye)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("dbSay()\n", 1, "Error parsing dbSay arguments");
    expectSyntaxError("dbStartSay()\n", 1, "Error parsing dbSay arguments");
}

// A line the database doesn't hold is the Stranger's: "$", which names no one until there is a
// hero.
TEST_F(CScriptDialogTest, AMissingLineIsTheStrangers) {
    expectPasses("dbSay(missing)\n");
    addHero();
    expectPasses("dbStartSay(missing)\n");
}

} // namespace
} // namespace nocturne::core
