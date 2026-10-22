#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/moloch/moloch.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMoloch, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CMoloch>);
}

TEST(CMoloch, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMoloch>);
}

TEST(CMoloch, IsConcrete) {
    static_assert(!std::is_abstract_v<CMoloch>);
}

TEST(CMoloch, Constructors) {
    static_assert(std::is_constructible_v<CMoloch>);
}

TEST(CMoloch, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMoloch::setup), void (CMoloch::*)()>);
    static_assert(std::is_same_v<decltype(&CMoloch::process), void (CMoloch::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMoloch::renderOpaque), int (CMoloch::*)()>);
    static_assert(std::is_same_v<decltype(&CMoloch::getActorType),
                                 const CDemonActorType &(CMoloch::*)() const>);
    static_assert(std::is_same_v<decltype(&CMoloch::archive), void (CMoloch::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CMoloch::drawWeapon), void (CMoloch::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMoloch::isWeaponDrawn), int (CMoloch::*)()>);
}

TEST(CMoloch, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CMoloch::kType.class_name, "CMoloch");
    EXPECT_EQ(CMoloch::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CMoloch::kType.latest_version, 1);
    EXPECT_EQ(CMoloch::kType.name_hash, hashClassName("CMoloch"));
    ASSERT_NE(CMoloch::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CMoloch::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CMoloch::kType);
}

TEST(CMoloch, TheFunctionsNotPortedYetQuit) {
    CMoloch hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"archive", [&] { hero.archive(archive); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 6U);
    expectEachQuitsNotPorted("CMoloch", calls);
}

} // namespace
} // namespace nocturne::core
