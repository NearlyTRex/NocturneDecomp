#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/haystack/haystack.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHaystack, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CHaystack>);
}

TEST(CHaystack, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHaystack>);
}

TEST(CHaystack, IsConcrete) {
    static_assert(!std::is_abstract_v<CHaystack>);
}

TEST(CHaystack, Constructors) {
    static_assert(std::is_constructible_v<CHaystack>);
}

TEST(CHaystack, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHaystack::setup), void (CHaystack::*)()>);
    static_assert(std::is_same_v<decltype(&CHaystack::process), void (CHaystack::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHaystack::renderOpaque), int (CHaystack::*)()>);
    static_assert(std::is_same_v<decltype(&CHaystack::getActorType),
                                 const CDemonActorType &(CHaystack::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CHaystack::archive), void (CHaystack::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CHaystack::processDamage), void (CHaystack::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CHaystack::drawWeapon), void (CHaystack::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHaystack::isWeaponDrawn), int (CHaystack::*)()>);
}

TEST(CHaystack, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CHaystack::kType.class_name, "CHaystack");
    EXPECT_EQ(CHaystack::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CHaystack::kType.latest_version, 1);
    EXPECT_EQ(CHaystack::kType.name_hash, hashClassName("CHaystack"));
    ASSERT_NE(CHaystack::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CHaystack::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CHaystack::kType);
}

TEST(CHaystack, TheFunctionsNotPortedYetQuit) {
    CHaystack hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"archive", [&] { hero.archive(archive); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 7U);
    expectEachQuitsNotPorted("CHaystack", calls);
}

} // namespace
} // namespace nocturne::core
