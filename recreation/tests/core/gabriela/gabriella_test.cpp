#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/gabriela/gabriella.h"
#include "tests/mocks/core/notportedcalls.h"

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

TEST(CGabriella, TheFunctionsNotPortedYetQuit) {
    CGabriella hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(hero.renderTransparent()); }},
        {"archive", [&] { hero.archive(archive); }},
        {"processDamage", [&] { hero.processDamage(nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(hero.getCarryObjToBodyXForm(0, nullptr)); }},
        {"drawWeapon", [&] { hero.drawWeapon(0); }},
        {"isWeaponDrawn", [&] { static_cast<void>(hero.isWeaponDrawn()); }},
    };
    EXPECT_EQ(calls.size(), 9U);
    expectEachQuitsNotPorted("CGabriella", calls);
}

} // namespace
} // namespace nocturne::core
