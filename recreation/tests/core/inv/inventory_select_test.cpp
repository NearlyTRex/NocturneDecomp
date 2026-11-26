#include "core/ammo/ammo.h"
#include "core/gun/gun.h"
#include "core/health/healthitem.h"
#include "core/inv/inventory.h"
#include "core/lightgun/lightgun.h"
#include "tests/mocks/core/inventoryhudfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::_;

// An inventory at 640x480, whose panels' counts are drawn 16 in from the screen's corner.
class CInventorySelectTest : public CInventoryHudFixture<640, 480> {
protected:
    void holdPistol() {
        hold(std::make_unique<CGun>(actor_), "Your_weapon", weaponFields("gat.kfm", 20, 0));
    }

    void holdHealth(std::string_view name, int uses) {
        hold(std::make_unique<CHealthItem>(actor_), name, healthFields(uses, 50.0F));
    }

    // The ammunition, the pistol, and health items of 1, 2 and 3 uses.
    void loadMixed() {
        hold(std::make_unique<CAmmo>(actor_), "Some_ammo", "\"gatbullet.kfm\"\n\"CGun\"\n20\n0\n");
        holdPistol();
        holdHealth("One", 1);
        holdHealth("Two", 2);
        holdHealth("Three", 3);
        load(1);
    }

    // The panel text drawn in the corner by the next frame.
    void expectCorner(std::string_view text) {
        EXPECT_CALL(small_text_, drawText(text, 624, 464 - smallLine(), _, _));
    }

    void expectNothing() {
        EXPECT_CALL(small_text_, drawText).Times(0);
    }

    void frame() {
        render();
        ::testing::Mock::VerifyAndClearExpectations(&small_text_);
        allowAnyText();
    }
};

// The first item that is neither a weapon nor ammunition, then on and round, either way.
TEST_F(CInventorySelectTest, SelectingAnItemStepsThroughTheItems) {
    loadMixed();
    watchText();
    for (const auto &[direction, shown] :
         {std::pair{1, "1 x 50%"}, std::pair{1, "2 x 50%"}, std::pair{1, "3 x 50%"},
          std::pair{1, "1 x 50%"}, std::pair{-1, "3 x 50%"}, std::pair{-1, "2 x 50%"}}) {
        inventory_.selectItem(direction);
        expectCorner(shown);
        frame();
    }
}

// With nothing to choose, nothing is selected, and the weapon's panel goes.
TEST_F(CInventorySelectTest, WithOnlyWeaponsNoItemIsSelected) {
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    inventory_.selectItem(1);
    watchText();
    expectNothing();
    frame();
}

// Choosing an item puts the weapon's panel away, and switching weapons the item's.
TEST_F(CInventorySelectTest, EachPanelPutsTheOtherAway) {
    loadMixed();
    watchText();
    inventory_.resetWeaponSwitchTimers(false);
    expectCorner("20");
    frame();
    inventory_.selectItem(1);
    expectCorner("1 x 50%");
    EXPECT_CALL(small_text_, drawText(std::string_view("20"), _, _, _, _)).Times(0);
    frame();
    inventory_.resetWeaponSwitchTimers(false);
    expectCorner("20");
    EXPECT_CALL(small_text_, drawText(std::string_view("1 x 50%"), _, _, _, _)).Times(0);
    frame();
}

// A panel stays up five seconds.
TEST_F(CInventorySelectTest, APanelGoesAfterFiveSeconds) {
    loadMixed();
    inventory_.updateInventory(0.0F);
    inventory_.selectItem(1);
    watchText();
    inventory_.updateInventory(4.5F);
    expectCorner("1 x 50%");
    frame();
    inventory_.updateInventory(0.5F);
    expectNothing();
    frame();
    inventory_.updateInventory(1.0F);
    expectNothing();
    frame();
}

// The rounds' name goes with its own time.
TEST_F(CInventorySelectTest, TheRoundsNameGoesWithItsTime) {
    loadMixed();
    inventory_.updateInventory(0.0F);
    inventory_.resetWeaponSwitchTimers(true);
    inventory_.updateInventory(5.0F);
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    expectCorner("20");
    frame();
}

// Toggling the view shows a panel that is up for its full time again, and shows none that isn't.
TEST_F(CInventorySelectTest, TogglingTheViewShowsThePanelsUpAfresh) {
    loadMixed();
    // The first frame finds the pistol's rounds and shows its panel, which then runs out.
    inventory_.updateInventory(0.0F);
    inventory_.updateInventory(5.0F);
    watchText();
    inventory_.toggleDetailView();
    expectNothing();
    frame();
    inventory_.selectItem(1);
    inventory_.updateInventory(4.5F);
    inventory_.toggleDetailView();
    inventory_.updateInventory(4.5F);
    expectCorner("1 x 50%");
    frame();
    inventory_.resetWeaponSwitchTimers(false);
    inventory_.updateInventory(4.5F);
    inventory_.toggleDetailView();
    inventory_.updateInventory(4.5F);
    expectCorner("20");
    frame();
}

// The inventory notes the held gun's rounds; when they change, as the first frame finds them, the
// weapon's panel shows.
TEST_F(CInventorySelectTest, ChangedRoundsShowTheWeaponsPanel) {
    holdPistol();
    load(0);
    watchText();
    inventory_.updateInventory(0.0F);
    expectCorner("20");
    frame();
    inventory_.updateInventory(5.0F);
    inventory_.updateInventory(0.0F);
    expectNothing();
    frame();
}

// A light gun's charge isn't rounds, so it shows nothing; nor does an inventory with no weapon.
TEST_F(CInventorySelectTest, ALightGunOrNoWeaponShowsNoPanel) {
    hold(std::make_unique<CLightGun>(actor_), "Light", weaponFields("cre.kfm", 5, 0));
    load(0);
    watchText();
    inventory_.updateInventory(0.0F);
    expectNothing();
    frame();
    load(-1);
    inventory_.updateInventory(0.0F);
    expectNothing();
    frame();
}

} // namespace
} // namespace nocturne::core
