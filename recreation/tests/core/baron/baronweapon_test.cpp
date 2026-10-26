#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/baron/baronweapon.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBaronWeapon, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CBaronWeapon>);
}

TEST(CBaronWeapon, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBaronWeapon>);
}

TEST(CBaronWeapon, IsConcrete) {
    static_assert(!std::is_abstract_v<CBaronWeapon>);
}

TEST(CBaronWeapon, Constructors) {
    static_assert(std::is_constructible_v<CBaronWeapon>);
}

TEST(CBaronWeapon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBaronWeapon::setup), void (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::process), void (CBaronWeapon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::renderOpaque), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::getActorType),
                                 const CDemonActorType &(CBaronWeapon::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CBaronWeapon::setWeaponState), void (CBaronWeapon::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::fire), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::isReadyToFire), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::renderAimBeam), void (CBaronWeapon::*)()>);
}

TEST(CBaronWeapon, ItsRecordIsAVersion1WeaponThatMissionsCanCreate) {
    EXPECT_EQ(CBaronWeapon::kType.class_name, "CBaronWeapon");
    EXPECT_EQ(CBaronWeapon::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CBaronWeapon::kType.latest_version, 1);
    ASSERT_NE(CBaronWeapon::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> weapon = CBaronWeapon::kType.factory_func();
    EXPECT_EQ(&weapon->getActorType(), &CBaronWeapon::kType);
}

TEST(CBaronWeapon, TheFunctionsNotPortedYetQuit) {
    CBaronWeapon weapon;
    const NotPortedCalls calls = {
        {"setup", [&] { weapon.setup(); }},
        {"process", [&] { weapon.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(weapon.renderOpaque()); }},
        {"setWeaponState", [&] { weapon.setWeaponState(0); }},
        {"fire", [&] { static_cast<void>(weapon.fire()); }},
        {"isReadyToFire", [&] { static_cast<void>(weapon.isReadyToFire()); }},
        {"renderAimBeam", [&] { weapon.renderAimBeam(); }},
    };
    expectEachQuitsNotPorted("CBaronWeapon", calls);
}

} // namespace
} // namespace nocturne::core
