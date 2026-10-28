#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammotype.h"
#include "core/game/game.h"
#include "core/weapon/weapon.h"
#include "core/weapon/weaponstate.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWeapon, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CWeapon>);
}

TEST(CWeapon, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWeapon>);
}

TEST(CWeapon, IsAbstract) {
    static_assert(std::is_abstract_v<CWeapon>);
}

TEST(CWeapon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWeapon::setup), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::process), void (CWeapon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CWeapon::renderOpaque), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::getBoundingBox),
                                 CBoundingBox3D *(CWeapon::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::getCollisionType),
                                 ECollisionType (CWeapon::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::onPickup), void (CWeapon::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::canPickup), int (CWeapon::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::pickup), void (CWeapon::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CWeapon::onDropped), void (CWeapon::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::getCarrier), CDemonActor *(CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::archive), void (CWeapon::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CWeapon::onFired), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::setWeaponState), void (CWeapon::*)(int)>);
    static_assert(std::is_same_v<decltype(&CWeapon::getMuzzlePoint),
                                 common::CVector3f *(CWeapon::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::fire), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::isReadyToFire), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::getDamage), float (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::renderAimBeam), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::updateLighting), void (CWeapon::*)()>);
}

TEST(CWeapon, ItsRecordIsVersion7UnderCDemonActor) {
    EXPECT_EQ(CWeapon::kType.class_name, "CWeapon");
    EXPECT_EQ(CWeapon::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CWeapon::kType.factory_func, nullptr);
    EXPECT_EQ(CWeapon::kType.latest_version, 7);
}

// A weapon of no class but its own, so its calls reach CWeapon's.
class CTestWeapon : public CWeapon {
public:
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }
};

TEST(CWeapon, AWeaponLiesAroundWithTwentyRoundsUntilCarried) {
    CTestWeapon weapon;
    EXPECT_EQ(weapon.getModel().getModelName(), "gat.kfm");
    EXPECT_EQ(weapon.getCarrier(), nullptr);
    EXPECT_EQ(weapon.getWeaponState(), EWeaponState::kLyingAround);
    EXPECT_EQ(weapon.getAmmoCount(), 20);
    EXPECT_EQ(weapon.getAmmoType(), EAmmoType::kGeneric);
    EXPECT_EQ(weapon.getSimTimer(), 0.0F);
}

// A weapon whose carriedByActor field finds the actor Svetlana.
class CWeaponArchiveTest : public ::testing::Test {
protected:
    CWeaponArchiveTest() {
        carrier_.setActorName("Svetlana");
        ON_CALL(actors_, loadActor)
            .WillByDefault([this](common::CTextScanner &scanner, const CDemonActor &,
                                  std::string_view) -> CDemonActor * {
                return scanner.readLine().starts_with("\"Svetlana\"") ? &carrier_ : nullptr;
            });
    }

    // Reads the weapon's own fields as the version given, after CDemonActor's.
    void readAs(int saved_version, std::string_view fields) {
        classes_.setSavedVersion(CWeapon::kType, saved_version);
        const std::string text = std::format("0,0,0,0\n0,0,0\n0\n{}next", fields);
        common::CTextScanner scanner(text);
        CActorArchive archive(scanner, weapon_,
                              {.actor_classes = classes_, .actors = actors_, .crt_random = crt_});
        weapon_.archive(archive);
        EXPECT_EQ(scanner.readLine(), "next");
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CTestWeapon weapon_;
    CTestActor carrier_{kTestBaseType};
};

TEST_F(CWeaponArchiveTest, AWeaponIsReadWithAllItsFields) {
    readAs(7,
           "\"gat.kfm\"    // modelName\n\"Svetlana\"\t\t// carriedByActor\n1    // weaponState\n"
           "15    // ammoCount\n3    // ammoType\n2.5    // simTimer\n");
    EXPECT_EQ(weapon_.getModel().getModelName(), "gat.kfm");
    EXPECT_EQ(weapon_.getCarrier(), &carrier_);
    EXPECT_EQ(weapon_.getWeaponState(), EWeaponState::kInInventory);
    EXPECT_EQ(weapon_.getAmmoCount(), 15);
    EXPECT_EQ(weapon_.getAmmoType(), EAmmoType::kSilver);
    EXPECT_EQ(weapon_.getSimTimer(), 2.5F);
}

// Version 5 held a shown name, passed over; before 7 there was no clock, before 4 no state or
// ammunition, and before 3 no carrier.
TEST_F(CWeaponArchiveTest, AnOlderWeaponHasFewerFields) {
    readAs(5, "\"pistol.kfm\"\n\"(none)\"\n2\n6\n1\n\"Pistol\"\n");
    EXPECT_EQ(weapon_.getModel().getModelName(), "pistol.kfm");
    EXPECT_EQ(weapon_.getWeaponState(), EWeaponState::kInHand);
    EXPECT_EQ(weapon_.getSimTimer(), 0.0F);
    readAs(4, "\"a.kfm\"\n\"Svetlana\"\n3\n1\n2\n");
    EXPECT_EQ(weapon_.getWeaponState(), EWeaponState::kOnHook);
    readAs(3, "\"b.kfm\"\n\"(none)\"\n");
    EXPECT_EQ(weapon_.getCarrier(), nullptr);
    EXPECT_EQ(weapon_.getAmmoCount(), 1);
    readAs(2, "\"c.kfm\"\n");
    EXPECT_EQ(weapon_.getModel().getModelName(), "c.kfm");
}

TEST(CWeapon, TheFunctionsNotPortedYetQuit) {
    CTestWeapon weapon;
    const NotPortedCalls calls = {
        {"setup", [&] { weapon.setup(); }},
        {"process", [&] { weapon.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(weapon.renderOpaque()); }},
        {"getBoundingBox", [&] { static_cast<void>(weapon.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(weapon.getCollisionType(nullptr)); }},
        {"onPickup", [&] { weapon.onPickup(nullptr); }},
        {"canPickup", [&] { static_cast<void>(weapon.canPickup(nullptr)); }},
        {"pickup", [&] { weapon.pickup(nullptr); }},
        {"onDropped", [&] { weapon.onDropped(nullptr); }},
        {"onFired", [&] { weapon.onFired(); }},
        {"setWeaponState", [&] { weapon.setWeaponState(0); }},
        {"getMuzzlePoint", [&] { static_cast<void>(weapon.getMuzzlePoint(nullptr)); }},
        {"fire", [&] { static_cast<void>(weapon.fire()); }},
        {"isReadyToFire", [&] { static_cast<void>(weapon.isReadyToFire()); }},
        {"getDamage", [&] { static_cast<void>(weapon.getDamage()); }},
        {"renderAimBeam", [&] { weapon.renderAimBeam(); }},
        {"updateLighting", [&] { weapon.updateLighting(); }},
    };
    EXPECT_EQ(calls.size(), 17U);
    expectEachQuitsNotPorted("CWeapon", calls);
}

} // namespace
} // namespace nocturne::core
