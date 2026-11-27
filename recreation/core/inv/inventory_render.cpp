#include "common/video/presentation.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/ammo/ammo.h"
#include "core/ammo/ammotype.h"
#include "core/charactr/character.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/health/healthitem.h"
#include "core/hudlayout.h"
#include "core/inv/inv.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/inv/inventorylayout.h"
#include "core/lightgun/lightgun.h"
#include "core/weapon/weapon.h"
#include "engine/2d/2d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

// Below this height the panels are halved and take the micro font, unless they show the
// description.
constexpr int kSmallScreen = 0x180;
constexpr int kTextColor = 0xf8;
constexpr int kShadowColor = 0;
// CBitFont's line height is measured on this glyph.
constexpr int kMeasureChar = 'X';
constexpr int kMaxDescriptionLines = 10;
constexpr int kDescriptionLineWidth = 0x100;

// A panel's text in the camera's space: its padding, the margin its description wraps short of
// and the ammunition icon's inset from the corner, at full size and halved.
struct SPanelSpacing {
    int text_pad;
    int wrap_margin;
    int ammo_inset;
};
constexpr SPanelSpacing kFullSpacing{.text_pad = 0x10, .wrap_margin = 0x70, .ammo_inset = 0x24};
constexpr SPanelSpacing kSmallSpacing{.text_pad = 8, .wrap_margin = 0x28, .ammo_inset = 0x12};

// The weapon classes that show no count: melee weapons, and the Baron and the shovel, which fire
// nothing (the decomp's hero_weapon.h).
constexpr std::array<std::string_view, 2> kUncountedWeapons{"CBaronWeapon", "CShovel"};

// The ammunition icon a gun shows: a later match wins, and a pistol's silver, lithium and mercury
// rounds take the lithium, mercury and silver pictures, as in the original.
std::optional<EInventoryBitmap> getAmmoIcon(const CWeapon &weapon) {
    std::optional<EInventoryBitmap> icon;
    if (isOfClass(&weapon, "CTommyGun")) {
        icon = EInventoryBitmap::kTommyClip;
    }
    if (isOfClass(&weapon, "CShotgun") || isOfClass(&weapon, "CElephantGun")) {
        icon = EInventoryBitmap::kShotShell;
    }
    if (!isOfClass(&weapon, "CGun")) {
        return icon;
    }
    constexpr std::array<std::pair<EAmmoType, EInventoryBitmap>, 5> kRounds{{
        {EAmmoType::kGeneric, EInventoryBitmap::kBullet},
        {EAmmoType::kHoly, EInventoryBitmap::kHolyBullet},
        {EAmmoType::kSilver, EInventoryBitmap::kLithium},
        {EAmmoType::kLithium, EInventoryBitmap::kMercuryBullet},
        {EAmmoType::kMercury, EInventoryBitmap::kSilverBullet},
    }};
    const auto *found = std::ranges::find(kRounds, weapon.getAmmoType(),
                                          &std::pair<EAmmoType, EInventoryBitmap>::first);
    return found == kRounds.end() ? icon : std::optional(found->second);
}

int toScreen(const SInventoryHud &hud, int camera_pixels) {
    return static_cast<int>(std::lround(static_cast<float>(camera_pixels) * getCameraScale(hud)));
}

// A panel's box and its text's spacing on the screen.
struct SPanelText {
    common::SViewport box;
    int pad = 0;
    int wrap_margin = 0;
    int ammo_inset = 0;
    float text_scale = 1.0F;
};

SPanelText getPanelText(const SInventoryHud &hud, bool small, bool detail_view) {
    const SPanelSpacing &spacing = small ? kSmallSpacing : kFullSpacing;
    return {.box = getPanelBox(hud, getPanelSize(hud, small, detail_view)),
            .pad = toScreen(hud, spacing.text_pad),
            .wrap_margin = toScreen(hud, spacing.wrap_margin),
            .ammo_inset = toScreen(hud, spacing.ammo_inset),
            .text_scale = engine::getUiTextScale(hud.frame.height)};
}

// The text right- and bottom-aligned pad in from the box's corner.
void drawInCorner(engine::CBitFont &font, std::string_view text, const common::SViewport &box,
                  int pad, float scale) {
    const int width = font.getTextWidthScaled(text, scale);
    const int height = font.getCharHeightScaled(kMeasureChar, scale);
    font.drawTextScaled(text, box.x + box.width - pad - width, box.y + box.height - pad - height,
                        kTextColor, kShadowColor, scale);
}

// The text wrapped margin short of the box and drawn from its top left, pad in, kept to the box.
void drawDescription(engine::C2d &two_d, engine::CBitFont &font, std::string_view text,
                     const common::SViewport &box, int pad, int margin, float scale) {
    const engine::CBitFont::SWrappedText wrapped = font.wrapTextScaled(
        text, kMaxDescriptionLines, kDescriptionLineWidth, box.width - margin, scale);
    const engine::SClipRect saved = two_d.getClipRect();
    two_d.setClipRect({.left = std::max(saved.left, box.x),
                       .top = std::max(saved.top, box.y),
                       .right = std::min(saved.right, box.x + box.width - 1),
                       .bottom = std::min(saved.bottom, box.y + box.height - 1)});
    int y = box.y + pad;
    for (const std::string &line : wrapped.lines) {
        font.drawTextScaled(line, box.x + pad, y, kTextColor, kShadowColor, scale);
        y += wrapped.line_pitch;
    }
    two_d.setClipRect(saved);
}

} // namespace

// Drawn as the decomp's HUD draws it: each panel's text in the panel's box, the camera's space
// laid onto the corner of the scene's picture, at the HUD's text scale, and the health bar and its
// pictures at the HUD's scale where the game's [hud.health_bar] places it.
// deferred: the battery gauge while the hero's own flashlight or goggles are on, filled by its
//   charge, where the game's [hud.battery_gauge] places it, with the per-hero flashlight and goggles
//   switches
// deferred: the film reel's name in the item's panel, with CFilmReel
// deferred: the message, such as a pickup's help, under the top letterbox bar, with
//   CInventory::addItem
// deferred: BW1's and BW3's panels and message put away while the field notes show, with
//   CFieldNotes
// deferred: BW1's light pistol's charge too, a light gun's charge 0x30 in (0x18 small) and its
//   count as well, no count for the flashlight, the SPS meter at the top left and the compass at
//   the bottom left, with the Blair Witch weapons, the SPS meter and the compass
// deferred: BW2's crosses showing no count, "Bullets" before the count while the ammunition's
//   name shows, an ammunition item's "N x 6" in the item's panel, and the compass, with the Blair
//   Witch crosses, BW2's ammunition items and the compass
// deferred: BW3's weapon panel giving "infinite" or the hero's own mana or rounds and nothing for
//   the holy cross, without icons or charge, its description without the rounds a gun loads, its
//   item panel giving health items alone, the health and mana bar with their numbers, and the SPS
//   meter, with BW3's hero ammunition, its crosses and the SPS meter
// unverified: whether a pistol's silver, lithium and mercury rounds showing the lithium, mercury
//   and silver icons, as the original maps them, is the pictures' own naming or the original's
//   slip, by looking at the three pictures
// nocedit 0x00500690
void CInventory::renderAllItems(const SInventoryHud &hud) const {
    if (hud.letterbox_up) {
        return;
    }
    if (hud.assets.getScreenHeight() != hud.screen.getWindowHeight()) {
        hud.assets.loadAssets();
    }
    const bool external = hud.special.getUseExternalRenderer();
    hud.special.setUseExternalRenderer(false);
    engine::CBitFont &font =
        hasSmallPanels(hud) ? *hud.fonts.getMicroFont() : *hud.fonts.getSmallEditorFont();
    if (selected_weapon_ != nullptr && weapon_highlight_timer_ > 0.0F) {
        renderWeaponText(hud, font);
    }
    if (selected_item_ != nullptr && item_highlight_timer_ > 0.0F) {
        renderItemText(hud, font);
    }
    renderHealthBar(hud);
    hud.special.setUseExternalRenderer(external);
}

bool CInventory::hasSmallPanels(const SInventoryHud &hud) const {
    return hud.screen.getWindowHeight() < kSmallScreen && !detail_view_;
}

std::string CInventory::getWeaponDescription(const SInventoryHud &hud) const {
    const std::span<const SInventoryItemInfo> items = hud.assets.getItems();
    const std::string name = getItemDisplayName(*selected_weapon_, items);
    const std::string description = getItemDescription(*selected_weapon_, items);
    if (!isWeaponInCategory(*selected_weapon_, EWeaponCategory::kMelee) &&
        (isWeaponInCategory(*selected_weapon_, EWeaponCategory::kPistol) ||
         isWeaponInCategory(*selected_weapon_, EWeaponCategory::kLongGun))) {
        return std::format("{}\n\n{} {}{}", name, description, getItemDisplayName(*ammo_, items),
                           hud.messages.getLocalizedString(" are loaded."));
    }
    return std::format("{}\n\n{}", name, description);
}

// The light gun's charge, or a gun's count, by the icon of the rounds it takes, in the panel's
// corner, and its description over the panel in the description view.
void CInventory::renderWeaponText(const SInventoryHud &hud, engine::CBitFont &font) const {
    const SPanelText panel = getPanelText(hud, hasSmallPanels(hud), detail_view_);
    const common::SViewport &box = panel.box;
    const auto *weapon = castToClass<CWeapon>(selected_weapon_);
    if (const auto *light_gun = castToClass<CLightGun>(selected_weapon_)) {
        const auto percent =
            static_cast<int>(std::lround(static_cast<double>(light_gun->getChargeRatio()) * 100.0));
        drawInCorner(font, std::format("{}%", percent), box, panel.pad, panel.text_scale);
    } else if (!isWeaponInCategory(*weapon, EWeaponCategory::kMelee) &&
               std::ranges::none_of(kUncountedWeapons, [weapon](std::string_view class_name) {
                   return isOfClass(weapon, class_name);
               })) {
        if (const std::optional<EInventoryBitmap> icon = getAmmoIcon(*weapon)) {
            engine::CAlphaBitmap &picture = hud.assets.getBitmap(*icon);
            const int ui_scale = engine::getUiScale(hud.screen.getWindowHeight());
            picture.displayScaled(
                box.x + box.width - panel.ammo_inset, box.y + box.height - panel.ammo_inset,
                picture.getWidth() * ui_scale, picture.getHeight() * ui_scale,
                getFadeAlpha(weapon_highlight_timer_), engine::EBitmapFilter::Nearest);
        }
        const std::string count =
            ammo_detail_timer_ <= 0.0F || detail_view_
                ? std::format("{}", weapon->getAmmoCount())
                : std::format("{} {}", getItemDisplayName(*ammo_, hud.assets.getItems()),
                              weapon->getAmmoCount());
        drawInCorner(font, count, box, panel.pad, panel.text_scale);
    }
    if (!detail_view_) {
        return;
    }
    drawDescription(hud.two_d, font, getWeaponDescription(hud), box, panel.pad, panel.wrap_margin,
                    panel.text_scale);
}

// A health item's uses and the health each gives, in the panel's corner, and the item's name and
// description over the panel in the description view.
void CInventory::renderItemText(const SInventoryHud &hud, engine::CBitFont &font) const {
    const SPanelText panel = getPanelText(hud, hasSmallPanels(hud), detail_view_);
    if (const auto *health = castToClass<CHealthItem>(selected_item_)) {
        drawInCorner(font,
                     std::format("{} x{:3.0f}%", health->getUseCount(), health->getHpRestored()),
                     panel.box, panel.pad, panel.text_scale);
    }
    if (!detail_view_) {
        return;
    }
    const std::span<const SInventoryItemInfo> items = hud.assets.getItems();
    drawDescription(hud.two_d, font,
                    std::format("{}\n\n{}", getItemDisplayName(*selected_item_, items),
                                getItemDescription(*selected_item_, items)),
                    panel.box, panel.pad, panel.wrap_margin, panel.text_scale);
}

// While the inventory or the item's panel shows: the bar's fill cut down by the health the hero
// has lost, then its frame, both at half the fading alpha. The fill is the hero's share of its
// own most health (the decomp's HERO_ACTIONS); the original took the hit points as a percentage.
void CInventory::renderHealthBar(const SInventoryHud &hud) const {
    const float timer = std::max(inventory_display_timer_, item_highlight_timer_);
    if (timer <= 0.0F) {
        return;
    }
    const float health =
        std::clamp(hud.hero.getHitPoints() / hud.hero.getMaxHitPoints(), 0.0F, 1.0F);
    engine::CAlphaBitmap &fill = hud.assets.getBitmap(EInventoryBitmap::kHealthBar1);
    engine::CAlphaBitmap &frame = hud.assets.getBitmap(EInventoryBitmap::kHealthBar2);
    const int ui_scale = engine::getUiScale(hud.screen.getWindowHeight());
    const int width = fill.getWidth() * ui_scale;
    const int height = fill.getHeight() * ui_scale;
    const common::SViewport bar =
        placeHudBox(hud.frame, hud.content.health_bar.value_or(engine::SHealthBar{}).place,
                    fill.getWidth(), fill.getHeight(), static_cast<float>(ui_scale));
    // The original cut the fill at its last row's index, not its height.
    const auto last_row = static_cast<float>(fill.getHeight() - 1);
    const auto lost = static_cast<int>(std::lround(last_row - (last_row * health)));
    const int alpha = getFadeAlpha(timer) / 2;
    fill.displayScaledWithin(bar.x, bar.y, width, height, alpha, engine::EBitmapFilter::Nearest,
                             {.left = bar.x,
                              .top = bar.y + (lost * ui_scale),
                              .right = bar.x + width,
                              .bottom = bar.y + height});
    frame.displayScaled(bar.x, bar.y, frame.getWidth() * ui_scale, frame.getHeight() * ui_scale,
                        alpha, engine::EBitmapFilter::Nearest);
}

} // namespace nocturne::core
