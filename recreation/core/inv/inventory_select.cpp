#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/ammo/ammo.h"
#include "core/inv/inventory.h"
#include "core/lightgun/lightgun.h"
#include "core/weapon/weapon.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <iterator>
#include <memory>
#include <string_view>

namespace nocturne::core {
namespace {

bool isSelectableItem(const CDemonActor &item) {
    return !isOfClassHash(&item, CWeapon::kType.name_hash) &&
           !isOfClassHash(&item, CAmmo::kType.name_hash);
}

// Counts a timer down to 0.
void countDown(float &timer, float delta_time) {
    timer = std::max(timer - delta_time, 0.0F);
}

} // namespace

// Only the local hero's inventory is drawn, so the original's check that this was the local
// hero's, here and in the other timers' resets, is dropped: another's times are never read.
// deferred: BW1's, BW2's and BW3's item panel left alone while the goggles are on, a first press
//   only showing the panel and the next choosing, with the Blair Witch goggles
// deferred: BW2's selection for each of its players, from the items that player owns, ammunition
//   included, with BW2's shared inventory
// nocedit 0x004fec10
void CInventory::selectItem(int direction) {
    resetItemSwitchTimers();
    const auto count = static_cast<int>(items_.size());
    if (selected_item_ == nullptr) {
        for (const std::unique_ptr<CDemonActor> &item : items_) {
            if (isSelectableItem(*item)) {
                selected_item_ = item.get();
                return;
            }
        }
        return;
    }
    auto index = static_cast<int>(
        std::distance(items_.begin(), std::ranges::find(items_, selected_item_,
                                                        &std::unique_ptr<CDemonActor>::get)));
    // The selected item is one of the items and can be chosen, so the search ends on it at the
    // latest.
    do {
        index += direction;
        if (index >= count) {
            index = 0;
        } else if (index < 0) {
            index = count - 1;
        }
    } while (!isSelectableItem(*items_[static_cast<std::size_t>(index)]));
    selected_item_ = items_[static_cast<std::size_t>(index)].get();
}

// nocedit 0x00501500
// bw1 0x004fc370
// bw2 0x004defa0
// bw3 0x004de740
void CInventory::toggleDetailView() {
    detail_view_ = !detail_view_;
    if (item_highlight_timer_ > 0.0F) {
        resetItemSwitchTimers();
    }
    if (weapon_highlight_timer_ > 0.0F) {
        resetWeaponSwitchTimers(false);
    }
}

// nocedit 0x004ffff0
// bw1 0x004fa710
// bw2 0x004dd2c0
// bw3 0x004dd390
void CInventory::resetItemSwitchTimers() {
    weapon_highlight_timer_ = 0.0F;
    item_highlight_timer_ = kDisplaySeconds;
}

// nocedit 0x004fffa0
// bw1 0x004fa6c0
// bw2 0x004dd270
// bw3 0x004dd340
void CInventory::resetWeaponSwitchTimers(bool show_ammo_name) {
    item_highlight_timer_ = 0.0F;
    weapon_highlight_timer_ = kDisplaySeconds;
    if (show_ammo_name) {
        ammo_detail_timer_ = kDisplaySeconds;
    }
}

// nocedit 0x00500020
// bw1 0x004fa740
// bw2 0x004dd2f0
// bw3 0x004dd3c0
void CInventory::resetInventoryDisplayTimer() {
    inventory_display_timer_ = kDisplaySeconds;
}

// deferred: the battery drained while the hero's own flashlight or goggles are on, by 100 over 30
//   seconds and each battery's discharge time, and charged otherwise, by 100 over 120 seconds and
//   each battery's recharge time, held to 0..100 and kept full by the cheat menu's infinite
//   battery (the decomp's hero_light.h, NETPLAY; CHEAT_MENU), with the per-hero flashlight and
//   goggles switches and CBattery's times
// deferred: each light gun not in hand processed for the frame, with CLightGun::process
// deferred: the message counted down and emptied when its time is up, with CInventory::addItem
// deferred: BW1's panels and message put away while the goggles, the field notes, a puzzle or the
//   letterbox are up, its light gun's rounds showing its panel too, and the SPS sounds played by
//   how near each character is, with the SPS meter, CFieldNotes and CPuzzle
// deferred: BW2's held weapon per player, and its battery's drain over 500 seconds and charge
//   over 15, with BW2's shared inventory and the [battery] drain and charge
// deferred: BW3's panel shown when the hero's own mana or rounds change, and the voodoo sounds
//   played by how near each enemy is, with BW3's hero ammunition and the SPS meter
// nocedit 0x004ffad0
void CInventory::updateInventory(float delta_time) {
    if (const auto *weapon = castToClass<CWeapon>(selected_weapon_)) {
        if (cached_ammo_count_ != weapon->getAmmoCount() &&
            castToClass<CLightGun>(selected_weapon_) == nullptr) {
            resetWeaponSwitchTimers(false);
        }
        cached_ammo_count_ = weapon->getAmmoCount();
    }
    countDown(weapon_highlight_timer_, delta_time);
    countDown(item_highlight_timer_, delta_time);
    countDown(inventory_display_timer_, delta_time);
    countDown(ammo_detail_timer_, delta_time);
}

// deferred: BW2's held weapon per player, with BW2's shared inventory
// deferred: BW3's counter keeping the rounds it named, its count and kind alone changed, with
//   BW3's hero ammunition
// nocedit 0x004ffe10
// bw1 0x004fa4e0
void CInventory::updateSelectedWeaponAmmoDisplay() {
    const CWeapon *weapon = castToClass<CWeapon>(selected_weapon_);
    if (weapon == nullptr) {
        return;
    }
    ammo_->setAmmoCount(weapon->getAmmoCount());
    ammo_->setAmmoType(weapon->getAmmoType());
    ammo_->setWeaponClass(weapon->getActorClassName());
}

// deferred: BW1's and BW2's rifle among the long guns and flashlight with the dynamite, and BW1's
//   light pistol among the beams, with the Blair Witch weapons
// deferred: BW2's crosses out of the melee weapons and in a category 6 of their own, with the
//   Blair Witch crosses
// deferred: BW3's category read from the weapon itself, with BW3's weapons
// deferred: category 5 taking any weapon, with CInventory::selectWeapon
// nocedit 0x004ffe70
bool CInventory::isWeaponInCategory(const CDemonActor &weapon, EWeaponCategory category) {
    struct SCategoryClasses {
        EWeaponCategory category;
        std::array<std::string_view, 4> classes;
    };
    constexpr std::array<SCategoryClasses, 5> kCategories{{
        {.category = EWeaponCategory::kPistol, .classes = {"CGun"}},
        {.category = EWeaponCategory::kLongGun,
         .classes = {"CShotgun", "CCrossbow", "CTommyGun", "CElephantGun"}},
        {.category = EWeaponCategory::kBeam, .classes = {"CFlameThrower", "CLightGun"}},
        {.category = EWeaponCategory::kMelee, .classes = {"CMelee"}},
        {.category = EWeaponCategory::kDynamite, .classes = {"CDynamite"}},
    }};
    const auto *found = std::ranges::find(kCategories, category, &SCategoryClasses::category);
    return std::ranges::any_of(found->classes, [&weapon](std::string_view class_name) {
        return !class_name.empty() && isOfClass(&weapon, class_name);
    });
}

} // namespace nocturne::core
