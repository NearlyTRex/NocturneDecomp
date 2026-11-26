#pragma once

#include "common/fwd.h"
#include "common/video/presentation.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "support/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// What the inventory's HUD is drawn with and laid out in: the scene's picture, the scene camera
// whose space the item panels are laid out in, and the local hero whose health shows.
struct SInventoryHud {
    CInventoryAssets &assets;
    const CDFont &fonts;
    const support::CNewMsg &messages;
    const engine::IScreenDevice &screen;
    engine::C2d &two_d;
    engine::CSpecial &special;
    const engine::SGameContent &content;
    const CDemonCamera &camera;
    const CCharacter &hero;
    common::SViewport frame;
    // The script's letterbox is up.
    bool letterbox_up = false;
};

// What a hero carries: the items, which it owns, the weapon it holds, the ammunition counter that
// names the weapon's rounds, and its flashlight's battery.
class CInventory {
public:
    // The most items it can hold.
    static constexpr std::size_t kMaxItems = 100;
    // How long the panel a switch or a pickup shows stays up, in seconds.
    static constexpr float kDisplaySeconds = 5.0F;

    // deferred: the inventory's 14 bitmaps, with this constructor
    // nocedit 0x004fcc30
    CInventory();
    ~CInventory();
    CInventory(const CInventory &) = delete;
    CInventory &operator=(const CInventory &) = delete;
    CInventory(CInventory &&) = delete;
    CInventory &operator=(CInventory &&) = delete;

    // Empties it, gives each place an item can be drawn at a new angle, and makes the ammunition
    // counter.
    void initialize(common::CWatcomRandom &crt_random, CActor &classes);
    int addItem(CDemonActor *item_actor, int show_tutorial_message);
    CDemonActor *findItemByName(char *item_name);
    int hasItemOfClass(char *class_name);
    void removeItem(CDemonActor *item_to_remove, int should_delete_actor);
    void selectWeapon(CDemonActor *specific_weapon, int weapon_category, int direction);
    // The next item, by direction, that is neither a weapon nor ammunition, its panel shown; the
    // first such item when none is selected.
    void selectItem(int direction);
    void cycleWeaponOfSameClass(int direction);
    void save(std::FILE *file_handle);
    void saveItems(std::FILE *file_handle);
    // Reads the inventory as an actor's file holds it: headings, its version, the item count, the
    // weapon held, the battery from version 1, each item's class and name, the items' own fields,
    // and a closing line from version 2. Items the file lists as carried are taken from the
    // mission; otherwise they are made. A held weapon that isn't one of the items is fatal.
    void load(CActorArchive &actor_archive);
    // Sets each item up, as the mission does its actors.
    void setupItems();
    int select(CDemonActor *actor_ptr);
    CLightGun *getActiveLightGun();
    // A frame of the inventory: the weapon's panel shown when its rounds change, and the panels'
    // times counted down.
    void updateInventory(float delta_time);
    float calculateTotalBatteryCharge(float max_charge);
    // The weapon's panel shown, the item's put away, and the ammunition's name shown with the
    // count while asked.
    void resetWeaponSwitchTimers(bool show_ammo_name);
    // The health bar shown.
    void resetInventoryDisplayTimer();
    void renderSelectedItems();
    // The panels' text and the health bar, over the finished scene.
    void renderAllItems(const SInventoryHud &hud) const;
    int checkHasMatchingKey(std::uint32_t key_mask, int show_message);
    void removeMatchingKeys(std::uint32_t key_mask);
    // The panels between their counts alone and their name and description; a panel up is shown
    // afresh.
    void toggleDetailView();
    void autoUseHealthItem();

    [[nodiscard]] std::span<const std::unique_ptr<CDemonActor>> getItems() const;
    // One of the items, of a weapon's class; null when none is held.
    [[nodiscard]] CDemonActor *getSelectedWeapon() const;
    [[nodiscard]] float getBatteryCharge() const;
    // The panels show their items' names and descriptions.
    [[nodiscard]] bool isDetailView() const;
    // In radians, one for each place an item can be drawn at.
    [[nodiscard]] std::span<const float, kMaxItems> getItemAngles() const;

private:
    static constexpr float kFullBattery = 100.0F;

    // The classes a weapon category takes, the numbers scripts select them by.
    enum class EWeaponCategory : std::uint8_t {
        kPistol = 0,
        kLongGun = 1,
        kBeam = 2,
        kMelee = 3,
        kDynamite = 4,
    };

    void clear();
    // The item's panel shown, the weapon's put away.
    void resetItemSwitchTimers();
    // The counter takes the held weapon's rounds.
    void updateSelectedWeaponAmmoDisplay();
    [[nodiscard]] static bool isWeaponInCategory(const CDemonActor &weapon,
                                                 EWeaponCategory category);

    void renderWeaponText(const SInventoryHud &hud, engine::CBitFont &font) const;
    void renderItemText(const SInventoryHud &hud, engine::CBitFont &font) const;
    void renderHealthBar(const SInventoryHud &hud) const;
    [[nodiscard]] bool hasSmallPanels(const SInventoryHud &hud) const;
    // The weapon's name, description and, for a gun, the rounds it loads.
    [[nodiscard]] std::string getWeaponDescription(const SInventoryHud &hud) const;

    std::vector<std::unique_ptr<CDemonActor>> items_;
    CDemonActor *selected_weapon_ = nullptr;
    CDemonActor *selected_item_ = nullptr;
    std::unique_ptr<CAmmo> ammo_;
    int cached_ammo_count_ = 0;
    float battery_charge_ = kFullBattery;
    std::array<float, kMaxItems> item_angles_{};
    bool detail_view_ = false;
    float weapon_highlight_timer_ = 0.0F;
    float item_highlight_timer_ = 0.0F;
    float inventory_display_timer_ = 0.0F;
    float ammo_detail_timer_ = 0.0F;
};

} // namespace nocturne::core
