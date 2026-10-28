#include "core/actor/demonactortype.h"
#include "core/icepick/icepick.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testheroarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CIcePick, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CIcePick>);
}

TEST(CIcePick, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CIcePick>);
}

TEST(CIcePick, IsConcrete) {
    static_assert(!std::is_abstract_v<CIcePick>);
}

TEST(CIcePick, Constructors) {
    static_assert(std::is_constructible_v<CIcePick>);
}

TEST(CIcePick, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CIcePick::setup), void (CIcePick::*)()>);
    static_assert(std::is_same_v<decltype(&CIcePick::process), void (CIcePick::*)(float)>);
    static_assert(std::is_same_v<decltype(&CIcePick::renderOpaque), int (CIcePick::*)()>);
    static_assert(std::is_same_v<decltype(&CIcePick::getActorType),
                                 const CDemonActorType &(CIcePick::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CIcePick::archive), void (CIcePick::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CIcePick::processDamage), void (CIcePick::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CIcePick::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CIcePick::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CIcePick::drawWeapon), void (CIcePick::*)(int)>);
    static_assert(std::is_same_v<decltype(&CIcePick::isWeaponDrawn), int (CIcePick::*)()>);
}

TEST(CIcePick, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CIcePick::kType.class_name, "CIcePick");
    EXPECT_EQ(CIcePick::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CIcePick::kType.latest_version, 1);
    EXPECT_EQ(CIcePick::kType.name_hash, hashClassName("CIcePick"));
    ASSERT_NE(CIcePick::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CIcePick::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CIcePick::kType);
}

TEST(CIcePick, ItsFieldsAreAHerosFields) {
    CIcePick hero;
    CTestHeroArchive archive(hero, CIcePick::kType, 1, "");
    hero.archive(archive.get());
    EXPECT_EQ(hero.getLocation().area_id, CTestHeroArchive::kArea);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CIcePick, TheFunctionsNotPortedYetQuit) {
    CIcePick hero;
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(hero.getCarryObjToBodyXForm(0, nullptr)); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 7U);
    expectEachQuitsNotPorted("CIcePick", calls);
}

} // namespace
} // namespace nocturne::core
