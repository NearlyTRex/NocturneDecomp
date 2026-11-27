#include "core/inv/inv.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/ammo/ammo.h"
#include "core/boxactor/boxactor.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/health/healthitem.h"
#include "core/inv/inventoryassets.h"
#include "core/weapon/weapon.h"

#include <algorithm>
#include <format>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

// The item's model, const as the item is.
template <typename Actor>
auto &findItemModel(Actor &actor) {
    if (auto *weapon = castToClass<CWeapon>(&actor)) {
        return weapon->getModel();
    }
    if (auto *ammo = castToClass<CAmmo>(&actor)) {
        return ammo->getModel();
    }
    if (auto *box = castToClass<CBoxActor>(&actor)) {
        return box->getModel();
    }
    if (auto *health = castToClass<CHealthItem>(&actor)) {
        return health->getModel();
    }
    common::displayErrorAndQuit(
        std::format("getModel - Can't classify : {}", actor.getActorName()));
}

const SInventoryItemInfo *findItemInfo(const CDemonActor &actor,
                                       std::span<const SInventoryItemInfo> items) {
    const std::string &model = getItemModel(actor).getModelName();
    const auto found = std::ranges::find_if(items, [&model](const SInventoryItemInfo &item) {
        return common::equalsIgnoringAsciiCase(model, item.model_name);
    });
    return found == items.end() ? nullptr : &*found;
}

std::string getMissingItemText(const CDemonActor &actor) {
    return std::format("Add to dict: {}", getItemModel(actor).getModelName());
}

} // namespace

// deferred: classifying CKeyActor, CGasMask, CFilmReel, CTrap and CBattery by their models, with
//   each class's model
// deferred: BW1's CGoggles classified after the gas mask, with the Blair Witch goggles
// BW3 classifies only weapons, ammunition, keys, box actors and health items; the other classes
// are never items there, so the wider check stands for every game.
// nocedit 0x004fcda0
// bw2 0x004d9db0
const CKeyFramedModelInstance &getItemModel(const CDemonActor &actor) {
    return findItemModel(actor);
}

CKeyFramedModelInstance &getItemModel(CDemonActor &actor) {
    return findItemModel(actor);
}

// deferred: a hero's own item read by its actor or model name ahead of the list, Moloch's amulet,
//   the Colonel's sidearm, Scat's pistol and Gabriella's pistol (the decomp's hero_weapon.h,
//   HERO_WEAPON), with the network game's heroes' weapons
// nocedit 0x004fcf00
// bw1 0x004f62e0
// bw2 0x004d9f10
// bw3 0x004d9e40
std::string getItemDisplayName(const CDemonActor &actor,
                               std::span<const SInventoryItemInfo> items) {
    const SInventoryItemInfo *info = findItemInfo(actor, items);
    return info == nullptr ? getMissingItemText(actor) : info->display_name;
}

// deferred: a hero's own item's description ahead of the list (the decomp's hero_weapon.h,
//   HERO_WEAPON), with the network game's heroes' weapons
// nocedit 0x004fcf70
// bw1 0x004f6350
// bw2 0x004d9f80
// bw3 0x004d9eb0
std::string getItemDescription(const CDemonActor &actor,
                               std::span<const SInventoryItemInfo> items) {
    const SInventoryItemInfo *info = findItemInfo(actor, items);
    return info == nullptr ? getMissingItemText(actor) : info->description;
}

} // namespace nocturne::core
