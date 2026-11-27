#include "core/dmodel/keyframedmodelinstance.h"
#include "core/gun/gun.h"
#include "core/weapon/weaponspecs.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using engine::SWeaponSpec;
using ::testing::ElementsAre;
using ::testing::IsEmpty;

SWeaponSpec weapon(std::string_view id, std::string_view class_name, std::string_view model = {},
                   std::string_view actor = {}) {
    return {.id = std::string(id),
            .class_name = std::string(class_name),
            .model = std::string(model),
            .actor = std::string(actor),
            .name = {},
            .description = {},
            .counted = std::nullopt,
            .names_rounds = std::nullopt};
}

// The Colonel's sidearm: a pistol of its own model and name.
class CWeaponSpecsTest : public ::testing::Test {
protected:
    CWeaponSpecsTest() {
        sidearm_.getModel().setModelName("COLT.KFM");
        sidearm_.setActorName("Sidearm");
    }

    CTestClasses classes_;
    CGun sidearm_{classes_.get()};
    engine::SGameContent content_;
};

// A weapon of the class, or one it derives from, and of any model and name given, in either case.
TEST_F(CWeaponSpecsTest, AWeaponIsAnActorOfItsClassModelAndName) {
    content_.weapons = {weapon("pistol", "cgun"),
                        weapon("any", "CWeapon"),
                        weapon("rifle", "CRifle"),
                        weapon("colt", "CGun", "colt.kfm"),
                        weapon("luger", "CGun", "luger.kfm"),
                        weapon("named", "CGun", "", "sidearm"),
                        weapon("other", "CGun", "", "Revolver")};
    EXPECT_THAT(findWeaponSpecs(content_, sidearm_),
                ElementsAre(&content_.weapons[5], &content_.weapons[3], content_.weapons.data(),
                            &content_.weapons[1]));
}

// A weapon naming the actor comes before one naming its model, that before one of its class
// alone, and a nearer class before a farther one.
TEST_F(CWeaponSpecsTest, TheMostSpecificWeaponComesFirst) {
    content_.weapons = {
        weapon("any", "CWeapon"), weapon("pistol", "CGun"), weapon("colt", "CGun", "colt.kfm"),
        weapon("old_colt", "CWeapon", "colt.kfm"), weapon("sidearm", "CWeapon", "", "Sidearm")};
    EXPECT_THAT(findWeaponSpecs(content_, sidearm_),
                ElementsAre(&content_.weapons[4], &content_.weapons[2], &content_.weapons[3],
                            &content_.weapons[1], content_.weapons.data()));
}

// Each value comes from the most specific weapon that gives it, so the sidearm takes the
// pistols' rounds and its own count.
TEST_F(CWeaponSpecsTest, EachValueComesFromTheMostSpecificWeaponGivingIt) {
    content_.weapons = {weapon("any", "CWeapon"), weapon("pistol", "CGun"),
                        weapon("sidearm", "CGun", "colt.kfm")};
    content_.weapons[0].counted = true;
    content_.weapons[0].names_rounds = false;
    content_.weapons[1].names_rounds = true;
    content_.weapons[2].counted = false;
    EXPECT_FALSE(isWeaponCounted(content_, sidearm_));
    EXPECT_TRUE(doesWeaponNameRounds(content_, sidearm_));
}

// A name and description come from the most specific weapon giving them.
TEST_F(CWeaponSpecsTest, TheNameAndDescriptionComeFromTheMostSpecificGivingThem) {
    EXPECT_EQ(getWeaponName(content_, sidearm_), std::nullopt);
    EXPECT_EQ(getWeaponDescriptionText(content_, sidearm_), std::nullopt);
    content_.weapons = {weapon("pistol", "CGun"), weapon("sidearm", "CGun", "colt.kfm")};
    content_.weapons[0].name = "Pistol";
    content_.weapons[0].description = "A pistol.";
    content_.weapons[1].name = "Sidearm";
    EXPECT_EQ(getWeaponName(content_, sidearm_), (SWeaponText{.text = "Sidearm"}));
    EXPECT_EQ(getWeaponDescriptionText(content_, sidearm_), (SWeaponText{.text = "A pistol."}));
    EXPECT_EQ(getText(getWeaponName(content_, sidearm_)), "Sidearm");
    EXPECT_EQ(getActorsOwnText(getWeaponName(content_, sidearm_)), std::nullopt);
}

// A weapon naming its actor is that actor's own, its text coming ahead of the item list's.
TEST_F(CWeaponSpecsTest, AWeaponNamingItsActorIsThatActorsOwn) {
    EXPECT_EQ(getText(std::nullopt), std::nullopt);
    EXPECT_EQ(getActorsOwnText(std::nullopt), std::nullopt);
    content_.weapons = {weapon("pistol", "CGun"), weapon("sidearm", "CGun", "", "Sidearm")};
    content_.weapons[0].description = "A pistol.";
    content_.weapons[1].name = "The Colonel's Sidearm";
    EXPECT_EQ(getWeaponName(content_, sidearm_),
              (SWeaponText{.text = "The Colonel's Sidearm", .actors_own = true}));
    EXPECT_EQ(getActorsOwnText(getWeaponName(content_, sidearm_)), "The Colonel's Sidearm");
    EXPECT_EQ(getActorsOwnText(getWeaponDescriptionText(content_, sidearm_)), std::nullopt);
}

// A weapon no entry speaks for shows its count and describes itself alone.
TEST_F(CWeaponSpecsTest, AWeaponNoneSpeaksForIsCountedAndNamesNoRounds) {
    EXPECT_TRUE(isWeaponCounted(content_, sidearm_));
    EXPECT_FALSE(doesWeaponNameRounds(content_, sidearm_));
    content_.weapons = {weapon("pistol", "CGun")};
    EXPECT_TRUE(isWeaponCounted(content_, sidearm_));
    EXPECT_FALSE(doesWeaponNameRounds(content_, sidearm_));
}

// An actor that is no weapon has no model, so only a weapon of its class alone is it.
TEST_F(CWeaponSpecsTest, AnActorThatIsNoWeaponHasNoModel) {
    const CTestActor actor{kTestBaseType};
    content_.weapons = {weapon("base", kTestBaseType.class_name),
                        weapon("modelled", kTestBaseType.class_name, "a.kfm")};
    EXPECT_THAT(findWeaponSpecs(content_, actor), ElementsAre(content_.weapons.data()));
    content_.weapons.clear();
    EXPECT_THAT(findWeaponSpecs(content_, actor), IsEmpty());
}

} // namespace
} // namespace nocturne::core
