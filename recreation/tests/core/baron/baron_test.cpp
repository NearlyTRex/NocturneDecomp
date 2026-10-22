#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/baron/baron.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBaron, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CBaron>);
}

TEST(CBaron, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBaron>);
}

TEST(CBaron, IsConcrete) {
    static_assert(!std::is_abstract_v<CBaron>);
}

TEST(CBaron, Constructors) {
    static_assert(std::is_constructible_v<CBaron>);
}

TEST(CBaron, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBaron::setup), void (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::process), void (CBaron::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBaron::renderOpaque), int (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::renderTransparent), int (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::getCollisionType),
                                 ECollisionType (CBaron::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBaron::getActorType),
                                 const CDemonActorType &(CBaron::*)() const>);
    static_assert(std::is_same_v<decltype(&CBaron::archive), void (CBaron::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CBaron::isGrabbable), int (CBaron::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBaron::processDamage), void (CBaron::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBaron::drawWeapon), void (CBaron::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBaron::isWeaponDrawn), int (CBaron::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBaron::attachToOwner), void (CBaron::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBaron::detachFromOwner), void (CBaron::*)(CDemonActor *)>);
}

TEST(CBaron, ItsRecordIsAVersionTwoHeroThatMissionsCanCreate) {
    EXPECT_EQ(CBaron::kType.class_name, "CBaron");
    EXPECT_EQ(CBaron::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CBaron::kType.latest_version, 2);
    EXPECT_EQ(CBaron::kType.name_hash, hashClassName("CBaron"));
    ASSERT_NE(CBaron::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CBaron::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CBaron::kType);
}

TEST(CBaron, TheFunctionsNotPortedYetQuit) {
    CBaron hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(hero.renderTransparent()); }},
        {"getCollisionType", [&] { static_cast<void>(hero.getCollisionType(nullptr)); }},
        {"archive", [&] { hero.archive(archive); }},
        {"isGrabbable", [&] { static_cast<void>(hero.isGrabbable(nullptr)); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 10U);
    expectEachQuitsNotPorted("CBaron", calls);
}

} // namespace
} // namespace nocturne::core
