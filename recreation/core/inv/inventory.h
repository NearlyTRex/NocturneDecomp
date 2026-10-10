#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::core {

class CInventory {
public:
    CInventory();
    ~CInventory();

    void initialize();
    int addItem(CDemonActor *item_actor, int show_tutorial_message);
    CDemonActor *findItemByName(char *item_name);
    int hasItemOfClass(char *class_name);
    void removeItem(CDemonActor *item_to_remove, int should_delete_actor);
    void selectWeapon(CDemonActor *specific_weapon, int weapon_category, int direction);
    void selectItem(int direction);
    void cycleWeaponOfSameClass(int direction);
    void save(std::FILE *file_handle);
    void saveItems(std::FILE *file_handle);
    void load(std::FILE *file_handle);
    void loadItems();
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
};

} // namespace nocturne::core
