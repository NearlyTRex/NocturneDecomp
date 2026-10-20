#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/stranger/stranger.h"
#include "tests/mocks/core/notportedcalls.h"

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

TEST(CStranger, TheFunctionsNotPortedYetQuit) {
    CStranger hero;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { hero.setup(); }},
        {"process", [&] { hero.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(hero.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(hero.renderTransparent()); }},
        {"setPositionAndOrientation", [&] { hero.setPositionAndOrientation(nullptr, nullptr); }},
        {"drop", [&] { hero.drop(nullptr, nullptr); }},
        {"archive", [&] { hero.archive(archive); }},
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
    EXPECT_EQ(calls.size(), 15U);
    expectEachQuitsNotPorted("CStranger", calls);
}

} // namespace
} // namespace nocturne::core
