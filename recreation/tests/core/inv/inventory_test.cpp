#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/game.h"
#include "core/inv/inventory.h"
#include "core/weapon/weapon.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <cstdio>
#include <format>
#include <memory>
#include <numbers>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CInventory, IsConcrete) {
    static_assert(!std::is_abstract_v<CInventory>);
}

TEST(CInventory, Constructors) {
    static_assert(std::is_constructible_v<CInventory>);
}

TEST(CInventory, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CInventory::initialize),
                                 void (CInventory::*)(common::CWatcomRandom &)>);
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
    static_assert(
        std::is_same_v<decltype(&CInventory::load), void (CInventory::*)(CActorArchive &)>);
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

std::unique_ptr<CDemonActor> makeItem();
std::unique_ptr<CDemonActor> makeGun();

const CDemonActorType kItemType = makeActorType("CTestItem", &kTestBaseType, &makeItem, 1);
// Of a weapon's class, by its record.
const CDemonActorType kGunType = makeActorType("CTestGun", &CWeapon::kType, &makeGun, 1);

std::unique_ptr<CDemonActor> makeItem() {
    return std::make_unique<CTestActor>(kItemType);
}

std::unique_ptr<CDemonActor> makeGun() {
    return std::make_unique<CTestActor>(kGunType);
}

TEST(CInventory, AnInventoryStartsEmptyWithAFullBattery) {
    const CInventory inventory;
    EXPECT_TRUE(inventory.getItems().empty());
    EXPECT_EQ(inventory.getSelectedWeapon(), nullptr);
    EXPECT_EQ(inventory.getBatteryCharge(), 100.0F);
}

// One draw for each place an item can be drawn at, turned into an angle of up to a full turn.
TEST(CInventory, InitializingDrawsAnAngleForEachPlace) {
    CInventory inventory;
    common::CWatcomRandom crt;
    common::CWatcomRandom fresh;
    inventory.initialize(crt);
    for (const float angle : inventory.getItemAngles()) {
        const double expected = fresh.rand() / 32767.0 * 2.0 * std::numbers::pi;
        EXPECT_NEAR(angle, expected, 1e-5);
    }
    EXPECT_EQ(crt.rand(), fresh.rand());
}

// A hero's inventory, read for the hero Gabriel, with the item classes registered.
class CInventoryLoadTest : public ::testing::Test {
protected:
    CInventoryLoadTest() {
        owner_.setActorName("Gabriel");
        classes_.registerActorClass(kItemType);
        classes_.registerActorClass(kGunType);
    }

    // An inventory of the version, held weapon and battery given, listing the items, each of
    // whose bodies is empty.
    static std::string text(int version, int held, const std::vector<std::string> &items) {
        std::string list;
        std::string bodies;
        for (const std::string &item : items) {
            list += std::format("\t\t{}\n", item);
            bodies += std::format("\t\t{{ {}\n\t\t}} {}\n", item, item);
        }
        const std::string battery = version >= 1 ? "\t\t// battery strength\n\t\t60.5\n" : "";
        const std::string closing = version >= 2 ? "\t}\n" : "";
        return std::format("\t{{ // Inventory\n\t\t// fileVersion\n\t\t{}\n\t\t// itemCount\n"
                           "\t\t{}\n\t\t// currentWeapon\n\t\t{}\n{}\t\t// actor name list\n{}"
                           "\t\t// actor data list\n{}{}next",
                           version, items.size(), held, battery, list, bodies, closing);
    }

    // Reads it, then gives what is left after.
    std::string load(const std::string &inventory_text) {
        common::CTextScanner scanner(inventory_text);
        CActorArchive archive(scanner, owner_,
                              {.actor_classes = classes_, .actors = actors_, .crt_random = crt_});
        inventory_.load(archive);
        return std::string(scanner.readLine());
    }

    [[nodiscard]] std::vector<std::string> itemNames() const {
        std::vector<std::string> names;
        for (const std::unique_ptr<CDemonActor> &item : inventory_.getItems()) {
            names.push_back(std::format("{} {}", item->getActorClassName(), item->getActorName()));
        }
        return names;
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CTestActor owner_{kTestBaseType};
    CInventory inventory_;
};

// Items the file doesn't list as carried are made from their class and name.
TEST_F(CInventoryLoadTest, TheItemsAreMadeAndTheWeaponHeld) {
    EXPECT_EQ(load(text(2, 1, {"CTestItem \"Some_ammo\"", "CTestGun \"Your_weapon\""})), "next");
    EXPECT_THAT(itemNames(), ::testing::ElementsAre("CTestItem Some_ammo", "CTestGun Your_weapon"));
    EXPECT_EQ(inventory_.getSelectedWeapon(), inventory_.getItems()[1].get());
    EXPECT_EQ(inventory_.getBatteryCharge(), 60.5F);
}

TEST_F(CInventoryLoadTest, ACarriedItemComesFromTheMission) {
    auto carried = std::make_unique<CTestActor>(kGunType);
    const CDemonActor *carried_item = carried.get();
    EXPECT_CALL(actors_, takeCarriedActor(StrEq("Your_weapon")))
        .WillOnce(Return(::testing::ByMove(std::move(carried))));
    load(text(2, 0, {"CTestGun \"Your_weapon\""}));
    EXPECT_EQ(inventory_.getItems()[0].get(), carried_item);
}

// Version 0 had no battery and 1 no closing line.
TEST_F(CInventoryLoadTest, OlderInventoriesHaveFewerParts) {
    EXPECT_EQ(load(text(0, -1, {"CTestItem \"Key\""})), "next");
    EXPECT_EQ(inventory_.getBatteryCharge(), 100.0F);
    EXPECT_EQ(inventory_.getSelectedWeapon(), nullptr);
    EXPECT_EQ(load(text(1, -1, {})), "next");
    EXPECT_EQ(inventory_.getBatteryCharge(), 60.5F);
    EXPECT_TRUE(inventory_.getItems().empty());
}

TEST_F(CInventoryLoadTest, AHeldWeaponThatIsntOneIsFatal) {
    for (const int held : {0, 1}) {
        EXPECT_THAT(
            [&] { load(text(2, held, {"CTestItem \"Key\""})); },
            ThrowsMessage<common::CFatalError>(StrEq("CInventory::load - Can't find your weapon")))
            << held;
    }
}

// The original's hundred places for items overran.
TEST_F(CInventoryLoadTest, MoreItemsThanItHoldsIsFatal) {
    EXPECT_THAT([&] { load("{\n// v\n2\n// count\n101\n// held\n-1\n// list\n"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CInventory::load - 101 items is more than it holds")));
}

} // namespace
} // namespace nocturne::core
