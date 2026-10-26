#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammo.h"
#include "core/ammo/ammotype.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CAmmo, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CAmmo>);
}

TEST(CAmmo, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CAmmo>);
}

TEST(CAmmo, IsConcrete) {
    static_assert(!std::is_abstract_v<CAmmo>);
}

TEST(CAmmo, Constructors) {
    static_assert(std::is_constructible_v<CAmmo>);
}

TEST(CAmmo, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAmmo::setup), void (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::process), void (CAmmo::*)(float)>);
    static_assert(std::is_same_v<decltype(&CAmmo::renderOpaque), int (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::getBoundingBox),
                                 CBoundingBox3D *(CAmmo::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::getCollisionType),
                                 ECollisionType (CAmmo::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::canPickup), int (CAmmo::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CAmmo::getActorType), const CDemonActorType &(CAmmo::*)() const>);
    static_assert(std::is_same_v<decltype(&CAmmo::archive), void (CAmmo::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setWeaponClass), void (CAmmo::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setAmmoCount), void (CAmmo::*)(int)>);
}

TEST(CAmmo, ItsRecordIsAVersion1ActorThatMissionsCanCreate) {
    EXPECT_EQ(CAmmo::kType.class_name, "CAmmo");
    EXPECT_EQ(CAmmo::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CAmmo::kType.latest_version, 1);
    ASSERT_NE(CAmmo::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> ammo = CAmmo::kType.factory_func();
    EXPECT_EQ(&ammo->getActorType(), &CAmmo::kType);
}

TEST(CAmmo, AmmoIsTwentyOrdinaryBulletsForTheGun) {
    const CAmmo ammo;
    EXPECT_EQ(ammo.getModel().getModelName(), "bullet.kfm");
    EXPECT_EQ(ammo.getWeaponClassName(), "CGun");
    EXPECT_EQ(ammo.getAmmoCount(), 20);
    EXPECT_EQ(ammo.getAmmoType(), EAmmoType::kGeneric);
}

// After CDemonActor's fields: its model, the weapon class, how many rounds, and of which kind.
TEST(CAmmo, ItsFileSaysWhatRoundsItHolds) {
    CAmmo ammo;
    const std::string text =
        "0,0,0,0\n0,0,0\n0\n\"gatbullet.kfm\"    // modelName\n"
        "\"CGun\"    // weaponClassName\n12    // ammoCount\n5    // ammoType\n";
    CTestArchive archive(ammo, text);
    ammo.archive(archive.get());
    EXPECT_EQ(ammo.getModel().getModelName(), "gatbullet.kfm");
    EXPECT_EQ(ammo.getWeaponClassName(), "CGun");
    EXPECT_EQ(ammo.getAmmoCount(), 12);
    EXPECT_EQ(ammo.getAmmoType(), EAmmoType::kFlaming);
    EXPECT_TRUE(archive.getScanner().atEnd());
}

TEST(CAmmo, TheFunctionsNotPortedYetQuit) {
    CAmmo ammo;
    const NotPortedCalls calls = {
        {"setup", [&] { ammo.setup(); }},
        {"process", [&] { ammo.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(ammo.renderOpaque()); }},
        {"getBoundingBox", [&] { static_cast<void>(ammo.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(ammo.getCollisionType(nullptr)); }},
        {"canPickup", [&] { static_cast<void>(ammo.canPickup(nullptr)); }},
    };
    expectEachQuitsNotPorted("CAmmo", calls);
}

} // namespace
} // namespace nocturne::core
