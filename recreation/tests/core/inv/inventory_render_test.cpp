#include "common/text/textscanner.h"
#include "core/actor/demonactortype.h"
#include "core/ammo/ammo.h"
#include "core/boxactor/boxactor.h"
#include "core/charactr/character.h"
#include "core/elephant/elephantgun.h"
#include "core/gun/gun.h"
#include "core/health/healthitem.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/lightgun/lightgun.h"
#include "core/melee/melee.h"
#include "core/shotgun/shotgun.h"
#include "core/shovel/shovel.h"
#include "core/tommygun/tommygun.h"
#include "engine/package/gamecontent.h"
#include "engine/special/special.h"
#include "tests/mocks/core/inventoryhudfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <format>
#include <memory>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::_;

constexpr int kTextColor = 0xf8;
constexpr int kShadowColor = 0;

const CDemonActorType kTestTommyType = makeActorType("CTestTommy", &CTommyGun::kType, nullptr, 1);
const CDemonActorType kTestShotgunType =
    makeActorType("CTestShotgun", &CShotgun::kType, nullptr, 1);
const CDemonActorType kTestElephantType =
    makeActorType("CTestElephant", &CElephantGun::kType, nullptr, 1);
const CDemonActorType kTestMeleeType = makeActorType("CTestMelee", &CMelee::kType, nullptr, 1);
const CDemonActorType kTestShovelType = makeActorType("CTestShovel", &CShovel::kType, nullptr, 1);

// A character of no class but its own, to give the health bar a hero of any health.
class CWoundedCharacter : public CCharacter {
public:
    using CCharacter::CCharacter;

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }
};

template <int Width, int Height>
class CInventoryRenderTest : public CInventoryHudFixture<Width, Height> {
protected:
    using Fixture = CInventoryHudFixture<Width, Height>;

    // The Stranger's pistol, its rounds of the kind given.
    void holdPistol(int ammo_type = 0) {
        Fixture::hold(std::make_unique<CGun>(this->actor_), "Your_weapon",
                      Fixture::weaponFields("gat.kfm", 20, ammo_type));
    }

    // A weapon of the class, of a model no game lists unless given one.
    void holdWeapon(const CDemonActorType &type, int ammo_count = 12,
                    std::string_view model = "tommy.kfm") {
        Fixture::hold(std::make_unique<CTestWeapon>(this->actor_, type), "Weapon",
                      Fixture::weaponFields(model, ammo_count, 0));
    }

    void holdHealth(std::string_view name, int uses, float health) {
        Fixture::hold(std::make_unique<CHealthItem>(this->actor_), name,
                      Fixture::healthFields(uses, health));
    }

    // A hero of hit points out of the most it can have.
    void woundHero(float hit_points, float max_hit_points) {
        this->actor_.setSavedVersion(CCharacter::kType, 6);
        const std::string text = std::format(
            "{{ CCharacter \"Hero\"\n0,0,0,0\n0,0,0\n0\n1\n\"none\"\n{}\n2\n0\n\"(none)\"\n1\n"
            "\"(none)\"\n\"none\"\n\"(none)\"\n0\n{{\n0\n}}\n1\n0\n\"Hero\"\n{}\n}} CCharacter "
            "\"Hero\"\n",
            hit_points, max_hit_points);
        common::CTextScanner scanner(text);
        wounded_.load(scanner, {.actor_classes = this->actor_,
                                .actors = this->actors_,
                                .crt_random = this->crt_random_});
    }

    void renderWounded() {
        SInventoryHud hud = this->hud();
        this->inventory_.renderAllItems(SInventoryHud{.assets = hud.assets,
                                                      .fonts = hud.fonts,
                                                      .messages = hud.messages,
                                                      .screen = hud.screen,
                                                      .two_d = hud.two_d,
                                                      .special = hud.special,
                                                      .content = hud.content,
                                                      .camera = hud.camera,
                                                      .hero = wounded_,
                                                      .frame = hud.frame,
                                                      .letterbox_up = false});
    }

    [[nodiscard]] std::uint32_t pixel(int x, int y) const {
        return this->screen_.pixel(x, y);
    }

    CWoundedCharacter wounded_{this->actor_};
};

using CInventoryRender480Test = CInventoryRenderTest<640, 480>;
using CInventoryRender360Test = CInventoryRenderTest<480, 360>;

// With no panel up and the inventory not shown, nothing is drawn.
TEST_F(CInventoryRender480Test, NothingShowsWhileNoPanelIsUp) {
    holdPistol();
    holdHealth("Medkit", 1, 50.0F);
    load(0);
    inventory_.selectItem(1);
    inventory_.resetWeaponSwitchTimers(false);
    inventory_.updateInventory(5.0F);
    watchText();
    EXPECT_CALL(small_text_, drawText).Times(0);
    render();
    EXPECT_EQ(pixel(620, 30), kBackground);
}

// The quick view is a square as tall as the panel in the frame's bottom right, the count 16 in
// from its corner.
TEST_F(CInventoryRender480Test, AWeaponSwitchShowsTheCountInThePanelsCorner) {
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_,
                drawText(std::string_view("20"), 624, 464 - smallLine(), kTextColor, kShadowColor));
    render();
    // Drawn again at the same size, the pictures stay as loaded.
    EXPECT_CALL(small_text_,
                drawText(std::string_view("20"), 624, 464 - smallLine(), kTextColor, kShadowColor));
    render();
}

// The rounds' name comes from the ammunition counter, which takes the held gun's rounds.
TEST_F(CInventoryRender480Test, TheRoundsNameShowsWithTheCountWhileAsked) {
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(true);
    watchText();
    EXPECT_CALL(small_text_,
                drawText(std::string_view("Bullets 20"), 624, 464 - smallLine(), _, _));
    render();
}

// A hero's own weapon, by its actor's name, is named and described ahead of the item list's row
// for its model.
TEST_F(CInventoryRender480Test, AHerosOwnWeaponComesAheadOfTheItemList) {
    hold(std::make_unique<CGun>(actor_), "Colonel_sidearm", weaponFields("gat.kfm", 20, 0));
    load(0);
    ASSERT_EQ(inventory_.getSelectedWeapon()->getActorName(), "Colonel_sidearm");
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Colonel's Sidearm"), 448, 400, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("His service pistol.  It never runs dry. "
                                                       "Bullets are loaded."),
                                      448, _, _, _));
    render();
}

// The description view takes the inventory's full width, 0xd0, and keeps the count alone; a gun's
// description ends with the rounds it loads.
TEST_F(CInventoryRender480Test, TheDescriptionViewDescribesTheWeapon) {
    holdPistol();
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(true);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("20"), 624, 464 - smallLine(), _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Pistol"), 448, 400, _, _));
    EXPECT_CALL(small_text_,
                drawText(std::string_view("A gun. Bullets are loaded."), 448, _, _, _));
    render();
}

// A long gun's description names its rounds too. A model the item list lacks takes the game's
// name and description for it; rounds the list lacks ask to be added.
TEST_F(CInventoryRender480Test, ALongGunsDescriptionNamesItsRounds) {
    holdWeapon(kTestTommyType, 12, "tommygun.kfm");
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Tommy gun"), 448, 400, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Thompson submachine gun. Add to dict: "
                                                       "bullet.kfm are loaded."),
                                      448, _, _, _));
    render();
}

// A weapon no game lists shows its count and describes itself alone; with nothing to name it,
// it asks to be added.
TEST_F(CInventoryRender480Test, AnUnlistedWeaponShowsItsCountAndNoRounds) {
    holdWeapon(kTestTommyType);
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("12"), _, _, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Add to dict: tommy.kfm"), 448, _, _, _))
        .Times(2);
    render();
}

// A light gun shows its charge in place of a count, and its description no rounds.
TEST_F(CInventoryRender480Test, ALightGunShowsItsCharge) {
    hold(std::make_unique<CLightGun>(actor_), "Light", weaponFields("gat.kfm", 0, 0));
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("100%"), 624, 464 - smallLine(), _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("A gun."), 448, _, _, _));
    render();
}

// Nocturne's axe and shovel fire nothing, so they show no count or icon.
TEST_F(CInventoryRender480Test, AWeaponThatFiresNothingShowsNoCount) {
    for (const auto &[type, model] :
         {std::pair{&kTestMeleeType, "axe1.kfm"}, std::pair{&kTestShovelType, "shoveit.kfm"}}) {
        holdWeapon(*type, 12, model);
        load(0);
        inventory_.resetWeaponSwitchTimers(false);
        watchText();
        EXPECT_CALL(small_text_, drawText).Times(0);
        render();
        EXPECT_EQ(pixel(606, 446), kBackground);
        ::testing::Mock::VerifyAndClearExpectations(&small_text_);
        ::testing::Mock::VerifyAndClearExpectations(&micro_text_);
    }
}

TEST_F(CInventoryRender480Test, AMeleeWeaponsDescriptionNamesNoRounds) {
    holdWeapon(kTestMeleeType);
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("Add to dict: tommy.kfm"), 448, _, _, _))
        .Times(2);
    render();
}

// The icon of a gun's rounds sits 0x24 in from the panel's corner. A pistol's silver, lithium and
// mercury rounds show the lithium, mercury and silver pictures, as the original maps them.
struct SIconCase {
    const CDemonActorType *type;
    int ammo_type;
    std::optional<EInventoryBitmap> icon;
};

class CInventoryIconTest : public CInventoryRender480Test,
                           public ::testing::WithParamInterface<SIconCase> {};

TEST_P(CInventoryIconTest, AGunShowsTheIconOfItsRounds) {
    const SIconCase &icon = GetParam();
    const std::uint32_t expected =
        icon.icon ? pictureColour(*icon.icon) : CInventoryRender480Test::kBackground;
    if (icon.type == nullptr) {
        holdPistol(icon.ammo_type);
    } else {
        holdWeapon(*icon.type);
    }
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    render();
    EXPECT_EQ(pixel(606, 446), expected);
}

INSTANTIATE_TEST_SUITE_P(
    Rounds, CInventoryIconTest,
    ::testing::Values(SIconCase{nullptr, 0, EInventoryBitmap::kBullet},
                      SIconCase{nullptr, 1, EInventoryBitmap::kHolyBullet},
                      SIconCase{nullptr, 3, EInventoryBitmap::kLithium},
                      SIconCase{nullptr, 7, EInventoryBitmap::kMercuryBullet},
                      SIconCase{nullptr, 8, EInventoryBitmap::kSilverBullet},
                      SIconCase{nullptr, 2, std::nullopt},
                      SIconCase{&kTestTommyType, 0, EInventoryBitmap::kTommyClip},
                      SIconCase{&kTestShotgunType, 0, EInventoryBitmap::kShotShell},
                      SIconCase{&kTestElephantType, 0, EInventoryBitmap::kShotShell},
                      SIconCase{&kTestMeleeType, 0, std::nullopt}));

// Below 384 lines the quick view is halved and takes the micro font: the count 8 in, the icon 0x12.
TEST_F(CInventoryRender360Test, ASmallScreenHalvesThePanels) {
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    const std::uint32_t bullet = pictureColour(EInventoryBitmap::kBullet);
    watchText();
    EXPECT_CALL(micro_text_, drawText(std::string_view("20"), 472, 352 - microLine(), _, _));
    render();
    EXPECT_EQ(pixel(463, 343), bullet);
}

TEST_F(CInventoryRender360Test, ASmallScreensItemPanelIsHalvedToo) {
    holdHealth("Medkit", 1, 50.0F);
    load(-1);
    inventory_.selectItem(1);
    watchText();
    EXPECT_CALL(micro_text_, drawText(std::string_view("1 x 50%"), 472, 352 - microLine(), _, _));
    render();
}

// The description view keeps its full size and the small editor font there.
TEST_F(CInventoryRender360Test, TheDescriptionViewIsFullSizeOnASmallScreen) {
    holdPistol();
    load(0);
    inventory_.toggleDetailView();
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("20"), 464, 344 - smallLine(), _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Pistol"), 288, 280, _, _));
    render();
}

TEST_F(CInventoryRender480Test, AHealthItemShowsItsUsesAndHealth) {
    holdHealth("Medkit", 2, 25.0F);
    load(-1);
    inventory_.selectItem(1);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("2 x 25%"), 624, 464 - smallLine(), _, _));
    render();
    inventory_.toggleDetailView();
    EXPECT_CALL(small_text_, drawText(std::string_view("2 x 25%"), 624, 464 - smallLine(), _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Medkit"), 448, 400, _, _));
    EXPECT_CALL(small_text_, drawText(std::string_view("Heals."), 448, _, _, _));
    render();
}

// An item that isn't a health item shows only its description, in the description view.
TEST_F(CInventoryRender480Test, AnotherItemShowsNoCount) {
    hold(std::make_unique<CAmmo>(actor_), "Some_ammo", "\"gatbullet.kfm\"\n\"CGun\"\n20\n0\n");
    hold(std::make_unique<CBoxActor>(actor_), "Box",
         "\"box.kfm\"\n1\n1\n0,0,0\n\"none\"\n\"none\"\n0\n\"(none)\"\n");
    load(-1);
    inventory_.selectItem(1);
    watchText();
    EXPECT_CALL(small_text_, drawText).Times(0);
    render();
}

// The health bar's 64 rows at the top right, 4 in, while the inventory shows: a full bar's fill
// runs to its top.
TEST_F(CInventoryRender480Test, TheHealthBarShowsWithTheInventory) {
    load(-1);
    inventory_.resetInventoryDisplayTimer();
    render();
    EXPECT_NE(pixel(620, 4), kBackground);
    EXPECT_EQ(pixel(620, 4), pixel(620, 60));
    EXPECT_EQ(pixel(608, 30), kBackground);
    EXPECT_EQ(pixel(620, 68), kBackground);
}

// A quarter of the hero's most health cuts the fill at round(63 - 63 / 4) = 47 rows down.
TEST_F(CInventoryRender480Test, TheFillIsTheHerosShareOfItsMostHealth) {
    woundHero(25.0F, 100.0F);
    load(-1);
    inventory_.resetInventoryDisplayTimer();
    renderWounded();
    EXPECT_NE(pixel(620, 50), pixel(620, 51));
    EXPECT_EQ(pixel(620, 51), pixel(620, 60));
}

// More than the most health fills the bar, as full health does.
TEST_F(CInventoryRender480Test, TheFillIsHeldToAFullBar) {
    woundHero(150.0F, 100.0F);
    load(-1);
    inventory_.resetInventoryDisplayTimer();
    renderWounded();
    EXPECT_EQ(pixel(620, 4), pixel(620, 60));
}

// The item's panel shows the bar too.
TEST_F(CInventoryRender480Test, AnItemsPanelShowsTheHealthBar) {
    holdHealth("Medkit", 1, 50.0F);
    load(-1);
    inventory_.selectItem(1);
    render();
    EXPECT_NE(pixel(620, 30), kBackground);
}

// The game's [hud.health_bar] places it.
TEST_F(CInventoryRender480Test, TheGamePlacesTheHealthBar) {
    game_parts_.getContent().health_bar =
        engine::SHealthBar{.place = {.anchor = engine::EHudAnchor::BottomLeft, .x = 4, .y = 4}};
    load(-1);
    inventory_.resetInventoryDisplayTimer();
    render();
    EXPECT_NE(pixel(10, 420), kBackground);
    EXPECT_EQ(pixel(620, 30), kBackground);
}

// The game's [[weapons.weapon]] say which weapons show no count.
TEST_F(CInventoryRender480Test, TheGamesWeaponsSayWhatShowsNoCount) {
    game_parts_.getContent().weapons = {{.id = "club",
                                         .class_name = "CGun",
                                         .model = {},
                                         .actor = {},
                                         .name = {},
                                         .description = {},
                                         .counted = false,
                                         .names_rounds = {}}};
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_, drawText(std::string_view("20"), _, _, _, _)).Times(0);
    render();
}

// The game's [hud.inventory] places the panels: at the top left, 10 and 20 camera pixels in,
// the count sits 16 in from that panel's corner.
TEST_F(CInventoryRender480Test, TheGamePlacesThePanels) {
    game_parts_.getContent().inventory_panel =
        engine::SInventoryPanel{.place = {.anchor = engine::EHudAnchor::TopLeft, .x = 10, .y = 20}};
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    watchText();
    EXPECT_CALL(small_text_,
                drawText(std::string_view("20"), 10 + 96 - 16, 20 + 96 - 16 - smallLine(), _, _));
    render();
}

// The letterbox hides the inventory.
TEST_F(CInventoryRender480Test, TheLetterboxHidesTheInventory) {
    holdPistol();
    load(0);
    inventory_.resetWeaponSwitchTimers(false);
    inventory_.resetInventoryDisplayTimer();
    letterbox_up_ = true;
    watchText();
    EXPECT_CALL(small_text_, drawText).Times(0);
    render();
    EXPECT_EQ(pixel(620, 30), kBackground);
}

// The inventory is drawn by the 2D code, and the hardware renderer is left as it was.
TEST_F(CInventoryRender480Test, TheExternalRendererIsLeftAsItWas) {
    load(-1);
    game_parts_.getSpecial().setUseExternalRenderer(true);
    render();
    EXPECT_TRUE(game_parts_.getSpecial().getUseExternalRenderer());
}

} // namespace
} // namespace nocturne::core
