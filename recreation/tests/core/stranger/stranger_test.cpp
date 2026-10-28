#include "core/actor/demonactortype.h"
#include "core/stranger/stranger.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testheroarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CStranger, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CStranger>);
}

TEST(CStranger, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CStranger>);
}

TEST(CStranger, IsConcrete) {
    static_assert(!std::is_abstract_v<CStranger>);
}

TEST(CStranger, Constructors) {
    static_assert(std::is_constructible_v<CStranger>);
}

TEST(CStranger, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CStranger::setup), void (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::process), void (CStranger::*)(float)>);
    static_assert(std::is_same_v<decltype(&CStranger::renderOpaque), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::renderTransparent), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::setPositionAndOrientation),
                                 void (CStranger::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::drop),
                                 void (CStranger::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::getActorType),
                                 const CDemonActorType &(CStranger::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CStranger::archive), void (CStranger::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::getGrabbed), int (CStranger::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::processDamage), void (CStranger::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::getDeathState), EDeathState (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::dropCarriedObject),
                                 void (CStranger::*)(int, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CStranger::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::drawWeapon), void (CStranger::*)(int)>);
    static_assert(std::is_same_v<decltype(&CStranger::isWeaponDrawn), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::reset), void (CStranger::*)()>);
}

TEST(CStranger, ItsRecordIsAVersionNineHeroThatMissionsCanCreate) {
    EXPECT_EQ(CStranger::kType.class_name, "CStranger");
    EXPECT_EQ(CStranger::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CStranger::kType.latest_version, 9);
    EXPECT_EQ(CStranger::kType.name_hash, hashClassName("CStranger"));
    ASSERT_NE(CStranger::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CStranger::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CStranger::kType);
}

TEST(CStranger, TheStrangerHasNothingInHandAndNothingPendingUntilToldOtherwise) {
    const CStranger hero;
    EXPECT_EQ(hero.getLadderToDescend(), nullptr);
    EXPECT_FALSE(hero.areGunsDrawn());
    EXPECT_EQ(hero.getWeapon(), nullptr);
    EXPECT_EQ(hero.getActionPending(), 0);
    EXPECT_EQ(hero.getLayerActionIndex(), 0);
    EXPECT_EQ(hero.getLayerActionT(), 0.0F);
}

// A Stranger with the actors Ladder and Gun to name.
class CStrangerArchiveTest : public ::testing::Test {
protected:
    CStrangerArchiveTest() {
        ladder_.setActorName("Ladder");
        gun_.setActorName("Gun");
    }

    void read(CTestHeroArchive &archive) {
        archive.addActor(ladder_);
        archive.addActor(gun_);
        hero_.archive(archive.get());
        EXPECT_EQ(hero_.getLocation().area_id, CTestHeroArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CStranger hero_;
    CTestActor ladder_{kTestBaseType};
    CTestActor gun_{kTestBaseType};
};

TEST_F(CStrangerArchiveTest, TheStrangerIsReadWithAllItsFields) {
    CTestHeroArchive archive(hero_, CStranger::kType, 9,
                             "\"Ladder\" // ladderToDescend\n1 // gunsDrawn\n\"Gun\" // weapon\n"
                             "5 // actionPending\n2 // layerActionIndex\n0.5 // layerActionT\n");
    read(archive);
    EXPECT_EQ(hero_.getLadderToDescend(), &ladder_);
    EXPECT_TRUE(hero_.areGunsDrawn());
    EXPECT_EQ(hero_.getWeapon(), &gun_);
    EXPECT_EQ(hero_.getActionPending(), 5);
    EXPECT_EQ(hero_.getLayerActionIndex(), 2);
    EXPECT_EQ(hero_.getLayerActionT(), 0.5F);
    EXPECT_EQ(hero_.getLadderToClimb(), nullptr);
}

// Version 5 is the first to leave what the hero was on the way to to CHero.
TEST_F(CStrangerArchiveTest, AVersionFiveStrangerHasOnlyTheLadderToDescend) {
    CTestHeroArchive archive(hero_, CStranger::kType, 5, "\"Ladder\"\n");
    read(archive);
    EXPECT_EQ(hero_.getLadderToDescend(), &ladder_);
    EXPECT_FALSE(hero_.areGunsDrawn());
    EXPECT_EQ(hero_.getWeapon(), nullptr);
}

// Versions 2 to 4 gave what the hero was on the way to before CHero held it, and version 2 what
// each hand carries.
TEST_F(CStrangerArchiveTest, AnOlderStrangerHasWhatTheHeroWasOnTheWayTo) {
    CTestHeroArchive version_four(hero_, CStranger::kType, 4,
                                  "\"(none)\"\n\"(none)\"\n\"Gun\"\n\"Ladder\"\n\"Ladder\"\n");
    read(version_four);
    EXPECT_EQ(hero_.getLeverToPull(), &gun_);
    EXPECT_EQ(hero_.getLadderToClimb(), &ladder_);
    EXPECT_EQ(hero_.getLadderToDescend(), &ladder_);
    EXPECT_FALSE(hero_.isCarryingAnything());
    CTestHeroArchive version_two(hero_, CStranger::kType, 2,
                                 "\"Gun\"\n\"(none)\"\n\"(none)\"\n\"(none)\"\n"
                                 "\"(none)\" // lhCarryObject\n\"Gun\" // rhCarryObject\n");
    read(version_two);
    EXPECT_EQ(hero_.getObjectToPickUp(), &gun_);
    EXPECT_EQ(hero_.getLadderToClimb(), nullptr);
    EXPECT_EQ(hero_.getCarriedActor(0), nullptr);
    EXPECT_EQ(hero_.getCarriedActor(1), &gun_);
}

TEST_F(CStrangerArchiveTest, AVersionOneStrangerHasOnlyAHerosFields) {
    CTestHeroArchive archive(hero_, CStranger::kType, 1, "");
    read(archive);
    EXPECT_EQ(hero_.getLadderToDescend(), nullptr);
}

TEST(CStranger, TheFunctionsNotPortedYetQuit) {
    CStranger hero;
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(hero.renderTransparent()); }},
        {"setPositionAndOrientation", [&] { hero.setPositionAndOrientation(nullptr, nullptr); }},
        {"drop", [&] { hero.drop(nullptr, nullptr); }},
        {"getGrabbed", [&] { static_cast<void>(hero.getGrabbed(nullptr, 0)); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"getDeathState", [&] { static_cast<void>(hero.getDeathState()); }},
        {"dropCarriedObject", [&] { hero.dropCarriedObject(0, nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(hero.getCarryObjToBodyXForm(0, nullptr)); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
        {"reset", [&] { hero.reset(); }},
    };
    EXPECT_EQ(calls.size(), 14U);
    expectEachQuitsNotPorted("CStranger", calls);
}

} // namespace
} // namespace nocturne::core
