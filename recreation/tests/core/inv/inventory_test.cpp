#include "core/inv/inventory.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CInventory, IsConcrete) {
    static_assert(!std::is_abstract_v<CInventory>);
}

TEST(CInventory, Constructors) {
    static_assert(std::is_constructible_v<CInventory>);
}

TEST(CInventory, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CInventory::initialize), void (CInventory::*)()>);
    static_assert(
        std::is_same_v<decltype(&CInventory::addItem), int (CInventory::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CInventory::findItemByName),
                                 CDemonActor *(CInventory::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::hasItemOfClass), int (CInventory::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CInventory::removeItem),
                                 void (CInventory::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CInventory::selectWeapon),
                                 void (CInventory::*)(CDemonActor *, int, int)>);
    static_assert(std::is_same_v<decltype(&CInventory::selectItem), void (CInventory::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::cycleWeaponOfSameClass), void (CInventory::*)(int)>);
    static_assert(std::is_same_v<decltype(&CInventory::save), void (CInventory::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::saveItems), void (CInventory::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CInventory::load), void (CInventory::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CInventory::loadItems), void (CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::setupItems), void (CInventory::*)()>);
    static_assert(
        std::is_same_v<decltype(&CInventory::select), int (CInventory::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::getActiveLightGun), CLightGun *(CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::updateInventory), void (CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::calculateTotalBatteryCharge),
                                 float (CInventory::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::resetWeaponSwitchTimers), void (CInventory::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CInventory::resetInventoryDisplayTimer), void (CInventory::*)()>);
    static_assert(
        std::is_same_v<decltype(&CInventory::renderSelectedItems), void (CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::renderAllItems), void (CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::checkHasMatchingKey),
                                 int (CInventory::*)(std::uint32_t, int)>);
    static_assert(std::is_same_v<decltype(&CInventory::removeMatchingKeys),
                                 void (CInventory::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CInventory::toggleDetailView), void (CInventory::*)()>);
    static_assert(std::is_same_v<decltype(&CInventory::autoUseHealthItem), void (CInventory::*)()>);
}

} // namespace
} // namespace nocturne::core
