#include "core/actor/demonactortype.h"
#include "core/scat/scat.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testheroarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CScat, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CScat>);
}

TEST(CScat, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CScat>);
}

TEST(CScat, IsConcrete) {
    static_assert(!std::is_abstract_v<CScat>);
}

TEST(CScat, Constructors) {
    static_assert(std::is_constructible_v<CScat>);
}

TEST(CScat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CScat::setup), void (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::process), void (CScat::*)(float)>);
    static_assert(std::is_same_v<decltype(&CScat::renderOpaque), int (CScat::*)()>);
    static_assert(
        std::is_same_v<decltype(&CScat::getActorType), const CDemonActorType &(CScat::*)() const>);
    static_assert(std::is_same_v<decltype(&CScat::archive), void (CScat::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CScat::processDamage), void (CScat::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CScat::createDefaultWeapon), void (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::drawWeapon), void (CScat::*)(int)>);
    static_assert(std::is_same_v<decltype(&CScat::isWeaponDrawn), int (CScat::*)()>);
}

TEST(CScat, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CScat::kType.class_name, "CScat");
    EXPECT_EQ(CScat::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CScat::kType.latest_version, 1);
    EXPECT_EQ(CScat::kType.name_hash, hashClassName("CScat"));
    ASSERT_NE(CScat::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CScat::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CScat::kType);
}

TEST(CScat, ItsFieldsAreAHerosFields) {
    CScat hero;
    CTestHeroArchive archive(hero, CScat::kType, 1, "");
    hero.archive(archive.get());
    EXPECT_EQ(hero.getLocation().area_id, CTestHeroArchive::kArea);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CScat, TheFunctionsNotPortedYetQuit) {
    CScat hero;
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"createDefaultWeapon", [&] { hero.createDefaultWeapon(); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 7U);
    expectEachQuitsNotPorted("CScat", calls);
}

} // namespace
} // namespace nocturne::core
