#include "core/actor/demonactortype.h"
#include "core/gabriela/gabriella.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testheroarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGabriella, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CGabriella>);
}

TEST(CGabriella, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGabriella>);
}

TEST(CGabriella, IsConcrete) {
    static_assert(!std::is_abstract_v<CGabriella>);
}

TEST(CGabriella, Constructors) {
    static_assert(std::is_constructible_v<CGabriella>);
}

TEST(CGabriella, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGabriella::setup), void (CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::process), void (CGabriella::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGabriella::renderOpaque), int (CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::renderTransparent), int (CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::getActorType),
                                 const CDemonActorType &(CGabriella::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGabriella::archive), void (CGabriella::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CGabriella::processDamage), void (CGabriella::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CGabriella::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CGabriella::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CGabriella::drawWeapon), void (CGabriella::*)(int)>);
    static_assert(std::is_same_v<decltype(&CGabriella::isWeaponDrawn), int (CGabriella::*)()>);
}

TEST(CGabriella, ItsRecordIsAVersionThreeHeroThatMissionsCanCreate) {
    EXPECT_EQ(CGabriella::kType.class_name, "CGabriella");
    EXPECT_EQ(CGabriella::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CGabriella::kType.latest_version, 3);
    EXPECT_EQ(CGabriella::kType.name_hash, hashClassName("CGabriella"));
    ASSERT_NE(CGabriella::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CGabriella::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CGabriella::kType);
}

// A Gabriella with the actors Box and Hook to name.
class CGabriellaArchiveTest : public ::testing::Test {
protected:
    CGabriellaArchiveTest() {
        box_.setActorName("Box");
        hook_.setActorName("Hook");
    }

    void read(CTestHeroArchive &archive) {
        archive.addActor(box_);
        archive.addActor(hook_);
        hero_.archive(archive.get());
        EXPECT_EQ(hero_.getLocation().area_id, CTestHeroArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CGabriella hero_;
    CTestActor box_{kTestBaseType};
    CTestActor hook_{kTestBaseType};
};

// Before CHero held them, version 2 and 3 files gave what Gabriella was on the way to.
TEST_F(CGabriellaArchiveTest, AVersionThreeGabriellaHasWhatTheHeroWasOnTheWayTo) {
    CTestHeroArchive archive(hero_, CGabriella::kType, 3,
                             "\"Box\" // objectToPickUp\n\"(none)\"\n\"Hook\"\n\"Box\"\n");
    read(archive);
    EXPECT_EQ(hero_.getObjectToPickUp(), &box_);
    EXPECT_EQ(hero_.getDoorToOpen(), nullptr);
    EXPECT_EQ(hero_.getLeverToPull(), &hook_);
    EXPECT_EQ(hero_.getLadderToClimb(), &box_);
    EXPECT_FALSE(hero_.isCarryingAnything());
}

TEST_F(CGabriellaArchiveTest, AVersionTwoGabriellaAlsoHasWhatEachHandCarries) {
    CTestHeroArchive archive(hero_, CGabriella::kType, 2,
                             "\"(none)\"\n\"(none)\"\n\"(none)\"\n\"Hook\"\n"
                             "\"Box\" // lhCarryObject\n\"Hook\" // rhCarryObject\n");
    read(archive);
    EXPECT_EQ(hero_.getLadderToClimb(), &hook_);
    EXPECT_EQ(hero_.getCarriedActor(0), &box_);
    EXPECT_EQ(hero_.getCarriedActor(1), &hook_);
}

TEST_F(CGabriellaArchiveTest, AVersionOneGabriellaHasOnlyAHerosFields) {
    CTestHeroArchive archive(hero_, CGabriella::kType, 1, "");
    read(archive);
    EXPECT_EQ(hero_.getLadderToClimb(), nullptr);
}

TEST(CGabriella, TheFunctionsNotPortedYetQuit) {
    CGabriella hero;
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(hero.renderTransparent()); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(hero.getCarryObjToBodyXForm(0, nullptr)); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 8U);
    expectEachQuitsNotPorted("CGabriella", calls);
}

} // namespace
} // namespace nocturne::core
