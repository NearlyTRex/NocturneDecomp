#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammo.h"
#include "core/ammo/ammotype.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testarchive.h"
#include "tests/mocks/core/testclasses.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
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
    static_assert(std::is_constructible_v<CAmmo, CActor &>);
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
    static_assert(
        std::is_same_v<decltype(&CAmmo::setWeaponClass), void (CAmmo::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setAmmoCount), void (CAmmo::*)(int)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setAmmoType), void (CAmmo::*)(EAmmoType)>);
}

// The rounds of a weapon class, by the ammunition's kind, as setWeaponClass picks them.
struct SRoundCase {
    std::string_view weapon_class;
    EAmmoType ammo_type;
    std::string_view model;
};

class CAmmoRoundTest : public ::testing::TestWithParam<SRoundCase> {};

TEST_P(CAmmoRoundTest, AWeaponClassTakesItsRoundsModelAndLoadsIt) {
    const SRoundCase &round = GetParam();
    CTestClasses classes;
    CAmmo ammo{classes.get()};
    ammo.setAmmoType(round.ammo_type);
    EXPECT_CALL(classes.getKeyFramedModels(), loadModel(::testing::StrEq(round.model)))
        .WillOnce(::testing::ReturnRef(classes.getKeyFramedModel()));
    ammo.setWeaponClass(round.weapon_class);
    EXPECT_EQ(ammo.getWeaponClassName(), round.weapon_class);
    EXPECT_EQ(ammo.getModel().getModelName(), round.model);
}

INSTANTIATE_TEST_SUITE_P(
    Rounds, CAmmoRoundTest,
    ::testing::Values(SRoundCase{"CGun", EAmmoType::kHoly, "holybullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kWood, "woodbullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kSilver, "silverbullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kGold, "goldbullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kLithium, "lithiumbullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kMercury, "mercurybullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kGeneric, "gatbullet.kfm"},
                      SRoundCase{"CGun", EAmmoType::kFlaming, "gatbullet.kfm"},
                      SRoundCase{"CShotgun", EAmmoType::kGeneric, "shell.kfm"},
                      SRoundCase{"CCrossbow", EAmmoType::kHoly, "holystake.kfm"},
                      SRoundCase{"CCrossbow", EAmmoType::kWood, "stake.kfm"},
                      SRoundCase{"CDynamite", EAmmoType::kGeneric, "dynamitebundle.kfm"},
                      SRoundCase{"CTommyGun", EAmmoType::kGeneric, "tommybullet.kfm"},
                      SRoundCase{"CFlameThrower", EAmmoType::kGeneric, "fgunammo.kfm"},
                      SRoundCase{"CElephantGun", EAmmoType::kGeneric, "eleshell.kfm"},
                      // A class with no rounds of its own keeps the model it had.
                      SRoundCase{"CMelee", EAmmoType::kGeneric, "bullet.kfm"},
                      // Matched case and all.
                      SRoundCase{"cshotgun", EAmmoType::kGeneric, "bullet.kfm"}));

TEST(CAmmo, ItsCountAndKindAreSet) {
    CTestClasses classes;
    CAmmo ammo{classes.get()};
    ammo.setAmmoCount(7);
    ammo.setAmmoType(EAmmoType::kSilver);
    EXPECT_EQ(ammo.getAmmoCount(), 7);
    EXPECT_EQ(ammo.getAmmoType(), EAmmoType::kSilver);
}

TEST(CAmmo, ItsRecordIsAVersion1ActorThatMissionsCanCreate) {
    EXPECT_EQ(CAmmo::kType.class_name, "CAmmo");
    EXPECT_EQ(CAmmo::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CAmmo::kType.latest_version, 1);
    ASSERT_NE(CAmmo::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> ammo = CAmmo::kType.factory_func(classes.get());
    EXPECT_EQ(&ammo->getActorType(), &CAmmo::kType);
}

TEST(CAmmo, AmmoIsTwentyOrdinaryBulletsForTheGun) {
    CTestClasses classes;
    const CAmmo ammo{classes.get()};
    EXPECT_EQ(ammo.getModel().getModelName(), "bullet.kfm");
    EXPECT_EQ(ammo.getWeaponClassName(), "CGun");
    EXPECT_EQ(ammo.getAmmoCount(), 20);
    EXPECT_EQ(ammo.getAmmoType(), EAmmoType::kGeneric);
}

// After CDemonActor's fields: its model, the weapon class, how many rounds, and of which kind.
TEST(CAmmo, ItsFileSaysWhatRoundsItHolds) {
    CTestClasses classes;
    CAmmo ammo{classes.get()};
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
    CTestClasses classes;
    CAmmo ammo{classes.get()};
    const NotPortedCalls calls = {
        {"process", [&] { ammo.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(ammo.renderOpaque()); }},
        {"getBoundingBox", [&] { static_cast<void>(ammo.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(ammo.getCollisionType(nullptr)); }},
        {"canPickup", [&] { static_cast<void>(ammo.canPickup(nullptr)); }},
    };
    expectEachQuitsNotPorted("CAmmo", calls);
}

TEST(CAmmo, SettingUpFindsItsModel) {
    CTestClasses classes;
    CAmmo ammo{classes.get()};
    EXPECT_CALL(classes.getKeyFramedModels(), loadModel(::testing::StrEq("bullet.kfm")))
        .WillOnce(::testing::ReturnRef(classes.getKeyFramedModel()));
    ammo.setup();
}

} // namespace
} // namespace nocturne::core
