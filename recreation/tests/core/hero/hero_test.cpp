#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/hero/hero.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

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

TEST(CHero, TheFunctionsNotPortedYetQuit) {
    CTestHero hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"canLookAt", [&] { static_cast<void>(hero.canLookAt()); }},
        {"testCylinderCollision",
         [&] { static_cast<void>(hero.testCylinderCollision(nullptr, 0.0F)); }},
        {"testLineIntersection",
         [&] { static_cast<void>(hero.testLineIntersection(nullptr, nullptr, nullptr)); }},
        {"getPathMap", [&] { static_cast<void>(hero.getPathMap()); }},
        {"archive", [&] { hero.archive(archive); }},
        {"kill", [&] { hero.kill(0, nullptr, 0.0F); }},
        {"isInvulnerable", [&] { static_cast<void>(hero.isInvulnerable()); }},
        {"isGrabbable", [&] { static_cast<void>(hero.isGrabbable(nullptr)); }},
        {"canBeGrabbed", [&] { static_cast<void>(hero.canBeGrabbed(nullptr, 0)); }},
        {"getGrabbed", [&] { static_cast<void>(hero.getGrabbed(nullptr, 0)); }},
        {"releaseFromGrab", [&] { hero.releaseFromGrab(); }},
        {"createDefaultWeapon", [&] { hero.createDefaultWeapon(); }},
        {"reset", [&] { hero.reset(); }},
    };
    EXPECT_EQ(calls.size(), 14U);
    expectEachQuitsNotPorted("CHero", calls);
}

} // namespace
} // namespace nocturne::core
