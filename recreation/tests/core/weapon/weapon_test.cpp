#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammotype.h"
#include "core/box/boundingbox3d.h"
#include "core/box/box.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/game/game.h"
#include "core/weapon/weapon.h"
#include "core/weapon/weaponstate.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/mockdeformablemodels.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/podfixture.h"

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
    using CWeapon::CWeapon;

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }
};

TEST(CWeapon, AWeaponLiesAroundWithTwentyRoundsUntilCarried) {
    CTestClasses classes;
    CTestWeapon weapon{classes.get()};
    EXPECT_TRUE(weapon.isCollisionDisabled());
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
    CGameParts game_parts_{clock_};
    CGame &game_ = game_parts_.getGame();
    common::CWatcomRandom crt_;
    ::testing::NiceMock<MockDeformableModels> models_;
    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CActor classes_{game_, crt_, models_, keyframed_models_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CTestWeapon weapon_{classes_};
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

// A gun of one frame, one unit wide and high and flat, lying at (1,2,3) unturned.
class CWeaponSetupTest : public engine::CPodFixture {
protected:
    CWeaponSetupTest() {
        givenFile("models\\gat.kfm", "/\n5\n;\n3,1,1,0,1\n;\n1\n;\n0,0,0\n256,0,0\n0,256,0\n"
                                     ";\n0,3, 0,0,0, 1,0,0, 2,0,0\n;\nSKIN.RAW\n");
        classes_.getKeyFramedModel().load("gat.kfm");
        weapon_.setLocation({.position = {.x = 1.0F, .y = 2.0F, .z = 3.0F}});
        weapon_.setOrientation({});
    }

    CTestClasses classes_{dosio_};
    CTestWeapon weapon_{classes_.get()};
};

TEST_F(CWeaponSetupTest, AWeaponOfFiveIsPutInThePhysicsWhereItsFirstFrameSits) {
    EXPECT_EQ(weapon_.getWeight(), 5.0F);
    weapon_.setup();
    const CBox &box = weapon_.getPhysicsBox();
    EXPECT_EQ(box.getValidity(), 1);
    EXPECT_EQ(box.getPosition().x, 1.5F);
    EXPECT_EQ(box.getPosition().y, 2.5F);
    EXPECT_EQ(box.getPosition().z, 3.0F);
    EXPECT_EQ(box.getExtents().x, 1.0F);
    EXPECT_EQ(box.getExtents().y, 1.0F);
    EXPECT_EQ(box.getExtents().z, 0.0F);
    CBoundingBox3D bounds;
    EXPECT_EQ(weapon_.getBoundingBox(&bounds), &bounds);
    EXPECT_EQ(bounds.max.x, 1.0F);
    EXPECT_EQ(bounds.max.y, 1.0F);
}

// The test classes' one model has no frames until it is loaded.
TEST(CWeapon, AModelWithNoFramesHasNoBounds) {
    CTestClasses classes;
    CTestWeapon weapon{classes.get()};
    weapon.setup();
    CBoundingBox3D bounds{.min = {.x = 1.0F}, .max = {.x = 2.0F}};
    static_cast<void>(weapon.getBoundingBox(&bounds));
    EXPECT_EQ(bounds.min.x, 0.0F);
    EXPECT_EQ(bounds.max.x, 0.0F);
    EXPECT_EQ(weapon.getPhysicsBox().getValidity(), 1);
}

TEST(CWeapon, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CTestWeapon weapon{classes.get()};
    const NotPortedCalls calls = {
        {"process", [&] { weapon.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(weapon.renderOpaque()); }},
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
    EXPECT_EQ(calls.size(), 15U);
    expectEachQuitsNotPorted("CWeapon", calls);
}

} // namespace
} // namespace nocturne::core
