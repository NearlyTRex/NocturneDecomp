#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <span>
#include <vector>

namespace nocturne::core {

// What a hero carries: the items, which it owns, the weapon it holds, and its flashlight's
// battery.
class CInventory {
public:
    // The most items it can hold.
    static constexpr std::size_t kMaxItems = 100;

    // deferred: the inventory's 14 bitmaps, with this constructor
    // nocedit 0x004fcc30
    CInventory();
    ~CInventory();
    CInventory(const CInventory &) = delete;
    CInventory &operator=(const CInventory &) = delete;
    CInventory(CInventory &&) = delete;
    CInventory &operator=(CInventory &&) = delete;

    // Empties it, and gives each place an item can be drawn at a new angle.
    void initialize(common::CWatcomRandom &crt_random);
    int addItem(CDemonActor *item_actor, int show_tutorial_message);
    CDemonActor *findItemByName(char *item_name);
    int hasItemOfClass(char *class_name);
    void removeItem(CDemonActor *item_to_remove, int should_delete_actor);
    void selectWeapon(CDemonActor *specific_weapon, int weapon_category, int direction);
    void selectItem(int direction);
    void cycleWeaponOfSameClass(int direction);
    void save(std::FILE *file_handle);
    void saveItems(std::FILE *file_handle);
    // Reads the inventory as an actor's file holds it: headings, its version, the item count, the
    // weapon held, the battery from version 1, each item's class and name, the items' own fields,
    // and a closing line from version 2. Items the file lists as carried are taken from the
    // mission; otherwise they are made. A held weapon that isn't one of the items is fatal.
    void load(CActorArchive &actor_archive);
    void setupItems();
    int select(CDemonActor *actor_ptr);
    CLightGun *getActiveLightGun();
    void updateInventory();
    float calculateTotalBatteryCharge(float max_charge);
    void resetWeaponSwitchTimers(int reset_both);
    void resetInventoryDisplayTimer();
    void renderSelectedItems();
    void renderAllItems();
    int checkHasMatchingKey(std::uint32_t key_mask, int show_message);
    void removeMatchingKeys(std::uint32_t key_mask);
    void toggleDetailView();
    void autoUseHealthItem();

    [[nodiscard]] std::span<const std::unique_ptr<CDemonActor>> getItems() const;
    // One of the items, of a weapon's class; null when none is held.
    [[nodiscard]] CDemonActor *getSelectedWeapon() const;
    [[nodiscard]] float getBatteryCharge() const;
    // In radians, one for each place an item can be drawn at.
    [[nodiscard]] std::span<const float, kMaxItems> getItemAngles() const;

private:
    static constexpr float kFullBattery = 100.0F;

    void clear();

    std::vector<std::unique_ptr<CDemonActor>> items_;
    CDemonActor *selected_weapon_ = nullptr;
    float battery_charge_ = kFullBattery;
    std::array<float, kMaxItems> item_angles_{};
};

} // namespace nocturne::core
