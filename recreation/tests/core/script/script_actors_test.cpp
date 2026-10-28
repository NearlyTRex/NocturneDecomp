#include "tests/mocks/core/scriptfixture.h"

#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {
namespace {

// A hero Gabriel, a character Mob, an enemy Vamp, a door, a platform Lift and a trigger Trip,
// with no game hero for "$" unless the test adds one.
class CScriptActorsTest : public CScriptFixture {
protected:
    CScriptActorsTest() {
        addActor("Gabriel", kScriptHeroType);
        addActor("Mob", kScriptCharacterType);
        addActor("Vamp", kScriptEnemyType);
        addActor("Door1", kScriptDoorType);
        addActor("Lift", kScriptPlatformType);
        addActor("Trip", kScriptTriggerType);
    }

    // The message for an actor of the wrong class.
    static std::string wrongClass(const std::string &name, const std::string &type,
                                  const std::string &needed) {
        return std::format("Actor \"{}\" is of type {}, this command requires an actor of type {}.",
                           name, type, needed);
    }
};

// Without a hero, "$" names nothing, as a variable can, and the rest of the line goes unchecked.
TEST_F(CScriptActorsTest, AnActorMissingThroughAVariablePassesTheRestOver) {
    expectPasses("walkTo(Mob, $) junk\n"
                 "lookAt($, Nobody\n"
                 "lookAt(Mob, $\n"
                 "movePlatform($, 2, 0)\n"
                 "enableHealthBar($, sometimes)\n"
                 "setHeroTask($, dance)\n"
                 "setFocusActor($) junk\n"
                 "setSpeaker($) junk\n"
                 "cancelWalkTo($) junk\n");
}

// An actor variable is unset as the script loads, so it names no one, as "$" without a hero.
TEST_F(CScriptActorsTest, AnUnsetActorVariableNamesNoOne) {
    expectPasses("walkTo(@who, Mob) junk\nholsterWeapon(@hero, bad(\nsay(@who, a.wav, Hi)\n");
    expectSyntaxError("walkTo(@a-b, Mob)\n", 1, "Actor variable name \"@a-b\" is not valid");
}

TEST_F(CScriptActorsTest, WithAHeroTheDollarSignIsChecked) {
    addHero();
    expectPasses("setHeroTask($, guard)\n");
    expectSyntaxError("openDoor($, Mob)\n", 1, wrongClass("Mob", "CTestCharacter", "CDoor"));
}

TEST_F(CScriptActorsTest, AddItemToInventoryTakesAHeroThenAnyActor) {
    expectPasses("addItemToInventory ( Gabriel , Door1 )\n");
    expectSyntaxError("addItemToInventory(Gabriel)\n", 1,
                      "Error parsing addItemToInventory command parms");
    expectSyntaxError("addItemToInventory(Mob, Door1)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("addItemToInventory(Gabriel, Nothing)\n", 1,
                      "Actor \"Nothing\" does not exist.");
}

TEST_F(CScriptActorsTest, AttachActorToPlatformLooksThePlatformUpFirst) {
    expectPasses("attachActorToPlatform(Door1, Lift)\n");
    expectSyntaxError("attachActorToPlatform(Nobody, Mob)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CPlatform"));
    expectSyntaxError("attachActorToPlatform(Nobody, Lift)\n", 1,
                      "Actor \"Nobody\" does not exist.");
    expectSyntaxError("attachActorToPlatform Door1\n", 1,
                      "Error parsing attachActorToPlatform command parms");
}

TEST_F(CScriptActorsTest, CancelWalkToTakesACharacterOrAll) {
    expectPasses("cancelWalkTo(all)\ncancelWalkTo(ALL)\ncancelWalkTo(Mob)\n");
    expectSyntaxError("cancelWalkTo(Door1)\n", 1, wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("cancelWalkTo all\n", 1, "No opening parenthesis");
}

TEST_F(CScriptActorsTest, EnableHealthBarTakesACharacterAndAMode) {
    expectPasses("enableHealthBar(Mob, always)\nenableHealthBar(Vamp, FALSE)\n");
    expectSyntaxError("enableHealthBar(Mob, sometimes)\n", 1,
                      "Invalid health bar mode 'sometimes'");
    expectSyntaxError("enableHealthBar(Door1, true)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("enableHealthBar(Mob)\n", 1, "Error parsing enableHealthBar parms");
}

TEST_F(CScriptActorsTest, PressAndReleaseButtonTakeAHeroAndAButton) {
    expectPasses("pressButton( Gabriel , FIRE )\nreleaseButton(Gabriel, useItem)\n"
                 "pressButton($, nothing)\n");
    expectSyntaxError("pressButton(Gabriel, dance)\n", 1, "Invalid button name: dance");
    expectSyntaxError("releaseButton(Mob, fire)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("pressButton(Gabriel)\n", 1, "Error parsing pressButton() command parms");
    expectSyntaxError("releaseButton(Gabriel)\n", 1, "Error parsing releaseButton() command parms");
}

// A character missing through a variable passes before its model is needed.
TEST_F(CScriptActorsTest, GestureAndDismemberNeedTheModelWhichIsNotPortedYet) {
    expectPasses("gesture($, wave)\ndismember($, arm)\n");
    expectQuit("gesture(Mob, wave)\n", "CMotionList::findMotionIndex is not ported yet");
    expectQuit("dismember( Mob , arm leg)\n", "CDeformableModel::findPartByName is not ported yet");
    expectSyntaxError("gesture(Door1, wave)\n", 1, wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("dismember(Door1, arm)\n", 1, wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("gesture(Mob)\n", 1, "Error parsing gesture command parms");
}

// The original's scan had to take five characters.
TEST_F(CScriptActorsTest, DismembersScanFailsOnOneLetterNamesWithoutASpace) {
    expectSyntaxError("dismember(a,b)\n", 1, "Error parsing dismember command parms");
    expectSyntaxError("dismember(Mob)\n", 1, "Error parsing dismember command parms");
}

// The condition is all but the last character after the comma.
TEST_F(CScriptActorsTest, HolsterWeaponTakesAHeroAndACondition) {
    expectPasses("holsterWeapon(Gabriel)\nholsterWeapon( Gabriel , isDead(Mob))\n"
                 "holsterWeapon($, junk\n");
    expectSyntaxError("holsterWeapon(Mob)\n", 1, wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("holsterWeapon(Gabriel, unknown(1))\n", 1, "Invalid meta-function");
    expectSyntaxError("holsterWeapon(Gabriel, flag]\n", 1,
                      "Missing closing ')' in holsterWeapon command");
    expectSyntaxError("holsterWeapon(Gabriel\n", 1, "Missing closing ')' in holsterWeapon command");
    expectSyntaxError("holsterWeapon(Gabriel,)\n", 1, "Error parsing holsterWeapon command parms");
    expectSyntaxError("holsterWeapon Gabriel\n", 1, "Error parsing holsterWeapon command parms");
}

TEST_F(CScriptActorsTest, GetTriggerActorTakesAVariableAndATrigger) {
    expectPasses("getTriggerActor(@who, Trip)\n");
    expectSyntaxError("getTriggerActor(who, Trip)\n", 1, "Actor variable name must begin with '@'");
    expectSyntaxError("getTriggerActor(@who, Door1)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CTrigger"));
    expectSyntaxError("getTriggerActor(@who)\n", 1, "Error parsing getTriggerActor command parms");
}

TEST_F(CScriptActorsTest, LookAtTakesACharacterAndMaybeATarget) {
    expectPasses("lookAt(Mob)\nlookAt( Mob , Door1 )\n");
    expectSyntaxError("lookAt(Mob\n", 1, "Missing closing ')' in lookAt command");
    expectSyntaxError("lookAt Mob\n", 1, "Error parsing lookAt command parms");
    expectSyntaxError("lookAt(Mob,)\n", 1, "Error parsing lookAt command parms");
    expectSyntaxError("lookAt(Nobody)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("lookAt(Mob, Nobody)\n", 1, "Actor \"Nobody\" does not exist.");
}

TEST_F(CScriptActorsTest, MovePlatformTakesAPositionAlongItsPathAndARate) {
    expectPasses(
        "movePlatform(Lift, 0.5, 2)\nmovePlatform(Lift, 0, 0.1)\nmovePlatform(Lift, 1, 9)\n");
    expectSyntaxError("movePlatform(Lift, 1.5, 2)\n", 1, "Paramater must be in range 0.0 .. 1.0");
    expectSyntaxError("movePlatform(Lift, -0.1, 2)\n", 1, "Paramater must be in range 0.0 .. 1.0");
    expectSyntaxError("movePlatform(Lift, 0.5, 0)\n", 1, "Invalid movement rate 0.000000");
    expectSyntaxError("movePlatform(Lift)\n", 1, "Error parsing movePlatform command parms");
    expectSyntaxError("movePlatform(Door1, 0.5, 1)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CPlatform"));
}

TEST_F(CScriptActorsTest, OpenDoorLooksTheDoorUpFirst) {
    expectPasses("openDoor(Mob, Door1)\n");
    expectSyntaxError("openDoor(Door1, Mob)\n", 1, wrongClass("Mob", "CTestCharacter", "CDoor"));
    expectSyntaxError("openDoor(Door1)\n", 1, "Error parsing openDoor command parms");
}

TEST_F(CScriptActorsTest, RemovingItemsTakesAHero) {
    expectPasses(
        "removeAllItemsFromInventory ( Gabriel )\nremoveItemFromInventory(Gabriel, key)\n");
    expectSyntaxError("removeAllItemsFromInventory(Mob)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("removeAllItemsFromInventory\n", 1,
                      "Error parsing removeAllItemsFromInventory command parms");
    expectSyntaxError("removeItemFromInventory(Mob, key)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("removeItemFromInventory(Gabriel)\n", 1,
                      "Error parsing removeItemFromInventory command parms");
}

TEST_F(CScriptActorsTest, SelectWeaponTakesAHeroAndAClass) {
    expectPasses("selectWeapon (Gabriel, CTommyGun)\n");
    expectSyntaxError("selectWeapon(Mob, CTommyGun)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("selectWeapon(Gabriel)\n", 1, "Error parsing selectWeapon parameters.");
}

// An actor missing through a variable passes, but the rest of the line is still checked.
TEST_F(CScriptActorsTest, SetActorVariableTakesAVariableAndAnActor) {
    expectPasses("setActorVariable(@door, Door1)\nsetActorVariable(@hero, $)\n");
    expectSyntaxError("setActorVariable(@hero, $) junk\n", 1,
                      "Extra characters \" junk\" on line 1");
    expectSyntaxError("setActorVariable(@door, Nobody)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("setActorVariable(door, Door1)\n", 1,
                      "Actor variable name must begin with '@'");
    expectSyntaxError("setActorVariable(@door)\n", 1,
                      "Error parsing setActorVariable command parms");
}

TEST_F(CScriptActorsTest, SetCharacterHealthTakesACharacterAndAShare) {
    expectPasses("setCharacterHealth(Mob, 0.5)\n");
    expectSyntaxError("setCharacterHealth(Door1, 1)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("setCharacterHealth(Mob)\n", 1, "Error parsing setCharacterHealth parms");
}

TEST_F(CScriptActorsTest, SetFocusActorTakesAnyActor) {
    expectPasses("setFocusActor(Door1)\n");
    expectSyntaxError("setFocusActor(Nobody)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("setFocusActor Door1\n", 1, "No opening parenthesis");
}

TEST_F(CScriptActorsTest, SetHeroTaskTakesAHeroAndATask) {
    expectPasses("setHeroTask (Gabriel, STAND)\nsetHeroTask(Gabriel, suspend)\n");
    expectSyntaxError("setHeroTask(Gabriel, dance)\n", 1, "Invalid Task: dance");
    expectSyntaxError("setHeroTask(Mob, follow)\n", 1,
                      wrongClass("Mob", "CTestCharacter", "CHero"));
    expectSyntaxError("setHeroTask(Gabriel)\n", 1, "Error parsing setHeroTask parameters.");
}

TEST_F(CScriptActorsTest, SetSpeakerTakesACharacterOrNoOne) {
    expectPasses("setSpeaker()\nsetSpeaker(Mob)\n");
    expectSyntaxError("setSpeaker(Door1)\n", 1, wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("setSpeaker Mob\n", 1, "No opening parenthesis");
}

TEST_F(CScriptActorsTest, SetVictimTakesAnEnemyAndMaybeACharacterOrDisable) {
    expectPasses("setVictim(Vamp)\nsetVictim(Vamp, Mob)\nsetVictim(Vamp, DISABLE)\n");
    expectSyntaxError("setVictim(Mob)\n", 1, wrongClass("Mob", "CTestCharacter", "CEnemy"));
    expectSyntaxError("setVictim(Vamp, Door1)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("setVictim(Vamp, Mob\n", 1, "Missing closing ')' in setVictim command");
}

TEST_F(CScriptActorsTest, SnapToFaceTakesTwoActors) {
    expectPasses("snapToFace(Door1, Mob)\n");
    expectSyntaxError("snapToFace(Door1)\n", 1, "Error snaping turnToFace command parms");
    expectSyntaxError("snapToFace(Nobody, Mob)\n", 1, "Actor \"Nobody\" does not exist.");
    expectSyntaxError("snapToFace(Door1, Nobody)\n", 1, "Actor \"Nobody\" does not exist.");
}

TEST_F(CScriptActorsTest, TurnToFaceTakesACharacterAndATarget) {
    expectPasses("turnToFace(Mob, Door1)\n");
    expectSyntaxError("turnToFace(Door1, Mob)\n", 1,
                      wrongClass("Door1", "CTestDoor", "CCharacter"));
    expectSyntaxError("turnToFace(Mob)\n", 1, "Error parsing turnToFace command parms");
}

TEST_F(CScriptActorsTest, WalkToTakesACharacterATargetAndUpToTwoNumbers) {
    expectPasses("walkTo(Mob, Door1)\nwalkTo(Mob, Door1, 2)\nwalkTo(Mob, Door1 , 2 , 3 )\n");
    expectSyntaxError("walkTo(Mob, Door1, near)\n", 1, "Error parsing walkTo command parms");
    expectSyntaxError("walkTo(Mob, Door1, 2, 3, 4)\n", 1,
                      "Missing closing parenthesis on walkTo parms");
    expectSyntaxError("walkTo(Mob)\n", 1, "Error parsing walkTo command parms");
    expectSyntaxError("walkTo(Door1, Mob)\n", 1, wrongClass("Door1", "CTestDoor", "CCharacter"));
}

} // namespace
} // namespace nocturne::core
