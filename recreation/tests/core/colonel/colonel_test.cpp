#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/colonel/colonel.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CColonel, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CColonel>);
}

TEST(CColonel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CColonel>);
}

TEST(CColonel, IsConcrete) {
    static_assert(!std::is_abstract_v<CColonel>);
}

TEST(CColonel, Constructors) {
    static_assert(std::is_constructible_v<CColonel>);
}

TEST(CColonel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CColonel::setup), void (CColonel::*)()>);
    static_assert(std::is_same_v<decltype(&CColonel::process), void (CColonel::*)(float)>);
    static_assert(std::is_same_v<decltype(&CColonel::renderOpaque), int (CColonel::*)()>);
    static_assert(std::is_same_v<decltype(&CColonel::getActorType),
                                 const CDemonActorType &(CColonel::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CColonel::archive), void (CColonel::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CColonel::processDamage), void (CColonel::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CColonel::drawWeapon), void (CColonel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CColonel::isWeaponDrawn), int (CColonel::*)()>);
}

TEST(CColonel, ItsRecordIsAVersionOneHeroThatMissionsCanCreate) {
    EXPECT_EQ(CColonel::kType.class_name, "CColonel");
    EXPECT_EQ(CColonel::kType.parent_type, &CHero::kType);
    EXPECT_EQ(CColonel::kType.latest_version, 1);
    EXPECT_EQ(CColonel::kType.name_hash, hashClassName("CColonel"));
    ASSERT_NE(CColonel::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CColonel::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CColonel::kType);
}

TEST(CColonel, TheFunctionsNotPortedYetQuit) {
    CColonel hero;
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
    expectEachQuitsNotPorted("CColonel", calls);
}

} // namespace
} // namespace nocturne::core
