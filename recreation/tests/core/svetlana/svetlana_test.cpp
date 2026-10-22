#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/svetlana/svetlana.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSvetlana, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CSvetlana>);
}

TEST(CSvetlana, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSvetlana>);
}

TEST(CSvetlana, IsConcrete) {
    static_assert(!std::is_abstract_v<CSvetlana>);
}

TEST(CSvetlana, Constructors) {
    static_assert(std::is_constructible_v<CSvetlana>);
}

TEST(CSvetlana, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSvetlana::setup), void (CSvetlana::*)()>);
    static_assert(std::is_same_v<decltype(&CSvetlana::process), void (CSvetlana::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::renderOpaque), int (CSvetlana::*)()>);
    static_assert(std::is_same_v<decltype(&CSvetlana::getActorType),
                                 const CDemonActorType &(CSvetlana::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::archive), void (CSvetlana::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::getGrabbed), int (CSvetlana::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::processDamage), void (CSvetlana::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::drawWeapon), void (CSvetlana::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::isWeaponDrawn), int (CSvetlana::*)()>);
}

TEST(CSvetlana, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CSvetlana::kType.class_name, "CSvetlana");
    EXPECT_EQ(CSvetlana::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CSvetlana::kType.latest_version, 1);
    EXPECT_EQ(CSvetlana::kType.name_hash, hashClassName("CSvetlana"));
    ASSERT_NE(CSvetlana::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CSvetlana::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CSvetlana::kType);
}

TEST(CSvetlana, TheFunctionsNotPortedYetQuit) {
    CSvetlana hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"archive", [&] { hero.archive(archive); }},
        {"getGrabbed", [&] { static_cast<void>(hero.getGrabbed(nullptr, 0)); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 8U);
    expectEachQuitsNotPorted("CSvetlana", calls);
}

} // namespace
} // namespace nocturne::core
