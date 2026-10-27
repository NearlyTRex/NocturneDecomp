#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/character.h"
#include "core/charactr/healthbarmode.h"
#include "core/game/game.h"
#include "core/hero/gasmaskstate.h"
#include "core/hero/hero.h"
#include "core/hero/herocontroltype.h"
#include "core/hero/herotask.h"
#include "core/inv/inventory.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHero, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CHero>);
}

TEST(CHero, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHero>);
}

TEST(CHero, IsAbstract) {
    static_assert(std::is_abstract_v<CHero>);
}

TEST(CHero, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHero::setup), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::canLookAt), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::testCylinderCollision),
                                 int (CHero::*)(SCollisionReturnInfo *, float)>);
    static_assert(std::is_same_v<decltype(&CHero::testLineIntersection),
                                 int (CHero::*)(common::CVector3f *, common::CVector3f *,
                                                common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CHero::getPathMap), CPathMap *(CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::archive), void (CHero::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CHero::kill), void (CHero::*)(int, common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CHero::isInvulnerable), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::isGrabbable), int (CHero::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHero::canBeGrabbed), int (CHero::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CHero::getGrabbed), int (CHero::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CHero::releaseFromGrab), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::createDefaultWeapon), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::drawWeapon), void (CHero::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHero::isWeaponDrawn), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::reset), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryInteract), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryTalkToNearbyCharacter), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryOpenNearbyDoor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryOpenDoor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryPullLever), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::executeLeverPull), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryPushNearbyBox), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::stopPushingBox), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryApproachNearbyActor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::stopNearbyInteraction), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryUseSelectedItem), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::executeObjectPickup), void (CHero::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CHero::addCarriedItemToInventory), void (CHero::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CHero::removeMatchingKeys), void (CHero::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CHero::setAiTask), void (CHero::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHero::closestEnemy), CEnemy *(CHero::*)(float *)>);
}

// A hero of no class but its own, so its calls reach CHero's.
class CTestHero : public CHero {
public:
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }

    void drawWeapon(int /*drawn*/) override {}

    int isWeaponDrawn() override {
        return 0;
    }
};

TEST(CHero, ItsRecordIsAVersionTwelveCharacterThatMissionsCantCreate) {
    EXPECT_EQ(CHero::kType.class_name, "CHero");
    EXPECT_EQ(CHero::kType.parent_type, &CCharacter::kType);
    EXPECT_EQ(CHero::kType.factory_func, nullptr);
    EXPECT_EQ(CHero::kType.latest_version, 12);
    EXPECT_EQ(CHero::kType.name_hash, hashClassName("CHero"));
}

TEST(CHero, AHeroIsSteeredByTheGameToKillUntilToldOtherwise) {
    const CTestHero hero;
    EXPECT_EQ(hero.getControlType(), EHeroControlType::kAi);
    EXPECT_EQ(hero.getAiTask(), EHeroTask::kKill);
    EXPECT_EQ(hero.getGasMaskState(), EGasMaskState::kAway);
    EXPECT_EQ(hero.getHealthBarMode(), EHealthBarMode::kWhenHurt);
    EXPECT_EQ(hero.getObjectToPickUp(), nullptr);
    EXPECT_EQ(hero.getPushedObject(), nullptr);
}

// A hero Gabriel, whose actor fields name the actors Box and Hook, read with CCharacter's
// fields as version 1, only its hit points.
class CHeroArchiveTest : public ::testing::Test {
protected:
    // CDemonActor's fields, and a motion state and parts as the archive reads them.
    static constexpr std::string_view kDemonFields = "0,0,0,0\n0,0,0\n0\n";
    static constexpr std::string_view kMotion = "{\n5,2.5\n}\n";
    static constexpr std::string_view kParts = "{\n2\n0 1\n3 4\n}\n";

    CHeroArchiveTest() {
        hero_.setActorName("Gabriel");
        box_.setActorName("Box");
        hook_.setActorName("Hook");
        classes_.setSavedVersion(CCharacter::kType, 1);
        ON_CALL(actors_, loadActor)
            .WillByDefault([this](common::CTextScanner &scanner, const CDemonActor &,
                                  std::string_view) -> CDemonActor * {
                const std::string_view line = scanner.readLine();
                if (line.starts_with("\"Box\"")) {
                    return &box_;
                }
                return line.starts_with("\"Hook\"") ? &hook_ : nullptr;
            });
    }

    void readAs(int saved_version, std::string_view fields) {
        classes_.setSavedVersion(CHero::kType, saved_version);
        const std::string text =
            std::format("{{ CHero \"Gabriel\"\n{}{}}} CHero \"Gabriel\"\n", kDemonFields, fields);
        common::CTextScanner scanner(text);
        hero_.load(scanner, {.actor_classes = classes_, .actors = actors_, .crt_random = crt_});
    }

    // From version 6 the fields end with an inventory, here holding nothing.
    void readWithInventory(int saved_version, const std::string &fields) {
        readAs(saved_version,
               fields + "{ // Inventory\n// fileVersion\n2\n// itemCount\n0\n// currentWeapon\n-1\n"
                        "// battery strength\n40\n// actor name list\n// actor data list\n}\n");
    }

    void expectMotionAndParts() {
        const CDeformableModelInstance &model = hero_.getModel();
        EXPECT_EQ(model.getCurrentMotionIndex(), 5);
        EXPECT_EQ(model.getCurrentFrameNumber(), 2.5F);
        EXPECT_EQ(model.getPartVisibility(0), EPartVisibility::kHidden);
        EXPECT_EQ(model.getPartVisibility(1), EPartVisibility::kShown);
        EXPECT_EQ(model.getPartTextureSet(1), 4);
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CTestHero hero_;
    CTestActor box_{kTestBaseType};
    CTestActor hook_{kTestBaseType};
};

TEST_F(CHeroArchiveTest, AHeroIsReadWithAllItsFields) {
    readWithInventory(12, "60\n" + std::string(kMotion) + std::string(kParts) +
                              "0 // controlType\n\"Box\" // objectToPickUp\n\"(none)\"\n"
                              "\"(none)\"\n\"Hook\"\n\"Box\"\n3 // AITask\n"
                              "2 // isWearingGasMask\n");
    EXPECT_EQ(hero_.getHitPoints(), 60.0F);
    EXPECT_EQ(hero_.getInventory().getBatteryCharge(), 40.0F);
    expectMotionAndParts();
    EXPECT_EQ(hero_.getControlType(), EHeroControlType::kPlayer);
    EXPECT_EQ(hero_.getObjectToPickUp(), &box_);
    EXPECT_EQ(hero_.getDoorToOpen(), nullptr);
    EXPECT_EQ(hero_.getLeverToPull(), nullptr);
    EXPECT_EQ(hero_.getLadderToClimb(), &hook_);
    EXPECT_EQ(hero_.getPushedObject(), &box_);
    EXPECT_EQ(hero_.getAiTask(), EHeroTask::kGuard);
    EXPECT_EQ(hero_.getGasMaskState(), EGasMaskState::kOnFace);
}

// Version 10 held the keys as a count, and 8 to 10 the names of 32 keys, which are passed over.
TEST_F(CHeroArchiveTest, TheKeysAreReadAndDropped) {
    std::string key_names;
    for (int i = 0; i < 32; ++i) {
        key_names += "\"\"\n";
    }
    readWithInventory(10, "60\n" + std::string(kMotion) + std::string(kParts) +
                              "2\n\"(none)\"\n\"(none)\"\n\"(none)\"\n\"(none)\"\n"
                              "\"(none)\"\n7 // keys\n" +
                              key_names + "4 // AITask\n");
    EXPECT_EQ(hero_.getAiTask(), EHeroTask::kSuspend);
    readWithInventory(8, "60\n" + std::string(kMotion) + std::string(kParts) +
                             "2\n\"(none)\"\n\"(none)\"\n\"(none)\"\n\"(none)\"\n"
                             "\"(none)\"\n" +
                             key_names);
    EXPECT_EQ(hero_.getAiTask(), EHeroTask::kSuspend);
}

// Until version 8 a second grabber came after the parts, which leaves the ordinary grab, and a
// hero before 6 had no inventory.
TEST_F(CHeroArchiveTest, AnOlderHeroHasASecondGrabberAndNoInventory) {
    readAs(5, "60\n" + std::string(kMotion) + std::string(kParts) + "\"Hook\" // grabbedBy\n2\n");
    expectMotionAndParts();
    EXPECT_EQ(hero_.getGrabber(), &hook_);
    EXPECT_EQ(hero_.getGrabbedType(), CCharacter::kOrdinaryGrab);
    EXPECT_EQ(hero_.getControlType(), EHeroControlType::kAi);
    readAs(4, "50\n" + std::string(kMotion) + std::string(kParts) + "\"(none)\"\n");
    EXPECT_EQ(hero_.getHitPoints(), 50.0F);
    EXPECT_EQ(hero_.getGrabber(), nullptr);
}

// Before version 4 a hero held none of CCharacter's fields but its grabber and hit points, which
// came after the parts from version 3; version 2 had only a motion state.
TEST_F(CHeroArchiveTest, AVeryOldHeroHasFewerFields) {
    readAs(3, std::string(kMotion) + std::string(kParts) + "\"Hook\"\n40\n");
    expectMotionAndParts();
    EXPECT_EQ(hero_.getGrabber(), &hook_);
    EXPECT_EQ(hero_.getHitPoints(), 40.0F);
    readAs(2, "{\n\"walk\" , 1\n}\n");
    EXPECT_EQ(hero_.getModel().getCurrentMotionName(), "walk");
    readAs(1, "");
    EXPECT_EQ(hero_.getHitPoints(), 40.0F);
}

TEST(CHero, TheFunctionsNotPortedYetQuit) {
    CTestHero hero;
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"canLookAt", [&] { static_cast<void>(hero.canLookAt()); }},
        {"testCylinderCollision",
         [&] { static_cast<void>(hero.testCylinderCollision(nullptr, 0.0F)); }},
        {"testLineIntersection",
         [&] { static_cast<void>(hero.testLineIntersection(nullptr, nullptr, nullptr)); }},
        {"getPathMap", [&] { static_cast<void>(hero.getPathMap()); }},
        {"kill", [&] { hero.kill(0, nullptr, 0.0F); }},
        {"isInvulnerable", [&] { static_cast<void>(hero.isInvulnerable()); }},
        {"isGrabbable", [&] { static_cast<void>(hero.isGrabbable(nullptr)); }},
        {"canBeGrabbed", [&] { static_cast<void>(hero.canBeGrabbed(nullptr, 0)); }},
        {"getGrabbed", [&] { static_cast<void>(hero.getGrabbed(nullptr, 0)); }},
        {"releaseFromGrab", [&] { hero.releaseFromGrab(); }},
        {"createDefaultWeapon", [&] { hero.createDefaultWeapon(); }},
        {"reset", [&] { hero.reset(); }},
    };
    EXPECT_EQ(calls.size(), 13U);
    expectEachQuitsNotPorted("CHero", calls);
}

} // namespace
} // namespace nocturne::core
