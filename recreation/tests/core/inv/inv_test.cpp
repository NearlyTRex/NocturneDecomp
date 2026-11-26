#include "common/error/fatalerror.h"
#include "core/ammo/ammo.h"
#include "core/boxactor/boxactor.h"
#include "core/gun/gun.h"
#include "core/health/healthitem.h"
#include "core/inv/inv.h"
#include "core/inv/inventoryassets.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <span>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CoreInvFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&freeInventory), void (*)()>);
    static_assert(std::is_same_v<decltype(&getItemModel),
                                 const CKeyFramedModelInstance &(*)(const CDemonActor &)>);
    static_assert(
        std::is_same_v<decltype(&getItemDisplayName),
                       std::string (*)(const CDemonActor &, std::span<const SInventoryItemInfo>)>);
    static_assert(
        std::is_same_v<decltype(&getItemDescription),
                       std::string (*)(const CDemonActor &, std::span<const SInventoryItemInfo>)>);
}

// Weapons, ammunition, box actors and health items are shown with their own models.
TEST(CoreInvFunctions, AnItemIsShownWithItsOwnModel) {
    CTestClasses classes;
    const CGun gun{classes.get()};
    const CAmmo ammo{classes.get()};
    const CBoxActor box{classes.get()};
    const CHealthItem health{classes.get()};
    EXPECT_EQ(&getItemModel(gun), &gun.getModel());
    EXPECT_EQ(&getItemModel(ammo), &ammo.getModel());
    EXPECT_EQ(&getItemModel(box), &box.getModel());
    EXPECT_EQ(&getItemModel(health), &health.getModel());
}

TEST(CoreInvFunctions, AnActorThatIsNoItemIsFatal) {
    CTestActor actor{kTestBaseType};
    actor.setActorName("Door");
    EXPECT_THAT([&] { static_cast<void>(getItemModel(actor)); },
                ThrowsMessage<common::CFatalError>(StrEq("getModel - Can't classify : Door")));
}

// Matched by the model's name in either case; a model the list lacks asks to be added.
TEST(CoreInvFunctions, TheItemListNamesAndDescribesAnItemByItsModel) {
    CTestClasses classes;
    const CAmmo ammo{classes.get()};
    const std::array<SInventoryItemInfo, 2> items{{
        {.model_name = "gat.kfm", .display_name = "Pistol", .description = "A gun."},
        {.model_name = "BULLET.KFM", .display_name = "Bullets", .description = "Lead."},
    }};
    EXPECT_EQ(getItemDisplayName(ammo, items), "Bullets");
    EXPECT_EQ(getItemDescription(ammo, items), "Lead.");
    EXPECT_EQ(getItemDisplayName(ammo, std::span(items).first(1)), "Add to dict: bullet.kfm");
    EXPECT_EQ(getItemDescription(ammo, std::span(items).first(1)), "Add to dict: bullet.kfm");
}

} // namespace
} // namespace nocturne::core
