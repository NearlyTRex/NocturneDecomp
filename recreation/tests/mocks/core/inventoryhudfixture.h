#pragma once

#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/letterbox.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/weapon/weapon.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/core/testhero.h"
#include "tests/mocks/engine/mockfont.h"

#include <gmock/gmock.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// A weapon of whatever class the test names, so the classes not constructible yet can be held.
class CTestWeapon : public CWeapon {
public:
    CTestWeapon(CActor &classes, const CDemonActorType &type) : CWeapon(classes), type_(type) {}

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return type_;
    }

private:
    const CDemonActorType &type_;
};

// The inventory's pictures, each of its own colour, at the sizes the game reads them.
struct SInventoryPicture {
    std::string_view name;
    int width;
    int height;
};
inline constexpr std::array<SInventoryPicture, 14> kInventoryPictures{{
    {.name = "invback", .width = 0xd0, .height = 0x60},
    {.name = "invback2", .width = 0x60, .height = 0x60},
    {.name = "weapback", .width = 0xd0, .height = 0x60},
    {.name = "weapback2", .width = 0x60, .height = 0x60},
    {.name = "battery", .width = 0x10, .height = 0x20},
    {.name = "hbar1", .width = 0x1b, .height = 0x40},
    {.name = "hbar2", .width = 0x1b, .height = 0x40},
    {.name = "tommyclip24x24", .width = 0x18, .height = 0x18},
    {.name = "bullet24x24", .width = 0x18, .height = 0x18},
    {.name = "lithium24x24", .width = 0x18, .height = 0x18},
    {.name = "mercurybullet24x24", .width = 0x18, .height = 0x18},
    {.name = "shotshell24x24", .width = 0x18, .height = 0x18},
    {.name = "silverbullet24x24", .width = 0x18, .height = 0x18},
    {.name = "holybullet24x24", .width = 0x18, .height = 0x18},
}};

// An inventory drawn on a Width by Height screen of the background colour, the scene camera sized
// for it, with the item list's names and a hero to show the health of. Its items come from the
// mission by name, read from the text the test gives each. Text drawn in the small editor and
// micro fonts goes to stand-in OS fonts, which report each line where it is drawn.
template <int Width, int Height>
class CInventoryHudFixture : public CMissionFixture {
protected:
    static constexpr std::uint32_t kBackground = 0x123456;

    CInventoryHudFixture() : CMissionFixture(Width, Height) {
        drawGameOnto(game_parts_, screen_,
                     [this](const std::string &name, const std::string &contents) {
                         givenFile(name, contents);
                     });
        session_.camera.init(Height);
        ON_CALL(keyframed_models_, loadModel(::testing::_))
            .WillByDefault(::testing::ReturnRef(item_model_));
        ON_CALL(actors_, loadActor)
            .WillByDefault([this](common::CTextScanner &scanner, const CDemonActor &owner,
                                  std::string_view description) {
                return mission_.loadActor(scanner, owner, description);
            });
        for (std::size_t i = 0; i < kInventoryPictures.size(); ++i) {
            const SInventoryPicture &picture = kInventoryPictures.at(i);
            const auto index = static_cast<char>(i + 1);
            givenFile(std::format("art\\{}.raw", picture.name),
                      std::string(static_cast<std::size_t>(picture.width * picture.height), index));
            std::string palette(std::size_t{768}, '\0');
            palette.replace((i + 1) * 3, 3,
                            {static_cast<char>(0x10 * (i + 1)), static_cast<char>(0xf0 - (8 * i)),
                             static_cast<char>(0x80)});
            givenFile(std::format("art\\{}.act", picture.name), palette);
        }
        givenFile("itemlist.txt", "\"gat.kfm\", \"Pistol\", \"A gun.\"\n"
                                  "\"gatbullet.kfm\", \"Bullets\", \"Lead.\"\n"
                                  "\"med.kfm\", \"Medkit\", \"Heals.\"\n");
        actor_.setSavedVersion(CDemonActor::kType, 7);
        actor_.setSavedVersion(CWeapon::kType, 7);
        screen_.fill(kBackground);
    }

    // The fonts' text goes to these from now on; lines a test doesn't name may be drawn.
    void watchText() {
        game_parts_.getFonts().getSmallEditorFont()->setWinFont(small_text_);
        game_parts_.getFonts().getMicroFont()->setWinFont(micro_text_);
        allowAnyText();
    }

    // A line's height in the watched small editor and micro fonts, which corner text rises by.
    [[nodiscard]] int smallLine() {
        return game_parts_.getFonts().getSmallEditorFont()->getCharHeightScaled('X', 1.0F);
    }
    [[nodiscard]] int microLine() {
        return game_parts_.getFonts().getMicroFont()->getCharHeightScaled('X', 1.0F);
    }

    void allowAnyText() {
        EXPECT_CALL(small_text_, drawText).Times(::testing::AnyNumber());
        EXPECT_CALL(micro_text_, drawText).Times(::testing::AnyNumber());
    }

    // A weapon's fields: its model, carried by none, in the inventory, with its rounds.
    static std::string weaponFields(std::string_view model, int ammo_count, int ammo_type) {
        return std::format("\"{}\"\n\"(none)\"\n1\n{}\n{}\n0\n", model, ammo_count, ammo_type);
    }

    // A health item's fields: its model, uses and the health each gives.
    static std::string healthFields(int uses, float health) {
        return std::format("\"med.kfm\"\n{}\n{}\n", uses, health);
    }

    // The item, named name, kept for the inventory to claim with the fields given.
    void hold(std::unique_ptr<CDemonActor> item, std::string_view name, std::string fields) {
        held_.push_back({.item = std::move(item), .name = std::string(name), .fields = fields});
    }

    // The inventory read with the weapon at held_weapon held (-1 for none), each item claimed.
    void load(int held_weapon) {
        std::string list;
        std::string bodies;
        ::testing::InSequence order;
        for (SHeldItem &held : held_) {
            const std::string tag =
                std::format("{} \"{}\"", held.item->getActorClassName(), held.name);
            list += std::format("{}\n", tag);
            bodies += std::format("{{ {}\n0,0,0,0\n0,0,0\n0\n1\n\"none\"\n{}}} {}\n", tag,
                                  held.fields, tag);
            EXPECT_CALL(actors_, getNextLoadedInventoryActor(::testing::StrEq(held.name)))
                .WillOnce(::testing::Return(::testing::ByMove(std::move(held.item))));
        }
        const std::string text =
            std::format("{{\n// version\n2\n// count\n{}\n// held\n{}\n// battery\n100\n// list\n"
                        "{}// bodies\n{}}}\n",
                        held_.size(), held_weapon, list, bodies);
        held_.clear();
        common::CTextScanner scanner(text);
        CActorArchive archive(
            scanner, hero_,
            {.actor_classes = actor_, .actors = actors_, .crt_random = crt_random_});
        inventory_.load(archive);
    }

    [[nodiscard]] SInventoryHud hud() {
        return {.assets = inventory_assets_,
                .fonts = game_parts_.getFonts(),
                .messages = messages_,
                .screen = game_parts_.getScreen(),
                .two_d = game_parts_.getTwoD(),
                .special = game_parts_.getSpecial(),
                .content = game_parts_.getContent(),
                .camera = session_.camera,
                .hero = hero_,
                .frame = {.x = 0, .y = 0, .width = Width, .height = Height},
                .letterbox_up = letterbox_up_};
    }

    void render() {
        inventory_.renderAllItems(hud());
    }

    // The picture's colour where it is drawn at its own size and full alpha on a clear screen.
    [[nodiscard]] std::uint32_t pictureColour(EInventoryBitmap picture) {
        inventory_assets_.loadAssets();
        screen_.fill(kBackground);
        inventory_assets_.getBitmap(picture).display(0, 0, 0xffff);
        const std::uint32_t colour = screen_.pixel(0, 0);
        screen_.fill(kBackground);
        return colour;
    }

    struct SHeldItem {
        std::unique_ptr<CDemonActor> item;
        std::string name;
        std::string fields;
    };

    CKeyFramedModel item_model_{dosio_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CTestHero hero_{actor_};
    CInventory inventory_;
    std::vector<SHeldItem> held_;
    bool letterbox_up_ = false;
    ::testing::NiceMock<engine::MockFont> small_text_;
    ::testing::NiceMock<engine::MockFont> micro_text_;
};

} // namespace nocturne::core
