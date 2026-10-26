#include "core/inv/inventory.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/random/watcomrandom.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actor_functions.h"
#include "core/actor/actorarchive.h"
#include "core/actor/actorlookup.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/weapon/weapon.h"

#include <bit>
#include <cstddef>
#include <format>
#include <memory>
#include <span>
#include <string>
#include <utility>

namespace nocturne::core {
namespace {

// The versions that first held the battery, and that ended with a closing line.
constexpr int kBatteryVersion = 1;
constexpr int kClosedVersion = 2;
// 1/32767, pi and 2, as the original stores them, which turn a C library draw into an angle.
constexpr float kCrtRandomScale = std::bit_cast<float>(0x38000100U);
constexpr double kPi = 3.1415926535;
constexpr double kTwo = 2.0;

} // namespace

// nocedit 0x004fd020
CInventory::CInventory() = default;

// The items go with it, as clear destroyed them.
// nocedit 0x004fd0c0
CInventory::~CInventory() = default;

// The original took each item out through removeItem, destroying it unless the mission still held
// it, and let go of the selected item, which nothing reads yet.
// deferred: destroying the ammo counter, with CAmmo
// nocedit 0x004fd0e0
void CInventory::clear() {
    items_.clear();
    selected_weapon_ = nullptr;
}

// Each angle is a draw from the C library's generator, so a hundred are drawn.
// deferred: making and setting up the ammo counter, with CAmmo
// nocedit 0x004fd190
void CInventory::initialize(common::CWatcomRandom &crt_random) {
    clear();
    for (float &angle : item_angles_) {
        const common::CExtendedFloat draw(static_cast<double>(crt_random.rand()));
        angle = (draw * common::CExtendedFloat(kCrtRandomScale) * common::CExtendedFloat(kPi) *
                 common::CExtendedFloat(kTwo))
                    .toFloat();
    }
}

// The original read each heading with fgets, 254 characters at most. A version it couldn't read
// stayed the last one read, and a weapon whatever its stack held; here they are 0 and none. More
// than its items overran them. It took the carried items off the mission's list after, with
// loadItems; here each comes off as it is claimed.
// deferred: showing the held weapon's ammo, with CAmmo
// nocedit 0x004ff400
// nocedit 0x004ff740
void CInventory::load(CActorArchive &actor_archive) {
    common::CTextScanner &scanner = actor_archive.getScanner();
    const SActorArchiveOwners &owners = actor_archive.getOwners();
    initialize(owners.crt_random);
    scanner.skipLine();
    scanner.skipLine();
    int version = 0;
    common::scanFormat(scanner, "%d\n", version);
    scanner.skipLine();
    int item_count = 0;
    common::scanFormat(scanner, "%d\n", item_count);
    scanner.skipLine();
    int weapon_index = -1;
    common::scanFormat(scanner, "%d\n", weapon_index);
    if (version >= kBatteryVersion) {
        scanner.skipLine();
        common::scanFormat(scanner, "%f\n", battery_charge_);
    }
    scanner.skipLine();
    if (std::cmp_greater(item_count, kMaxItems)) {
        common::displayErrorAndQuit(
            std::format("CInventory::load - {} items is more than it holds", item_count));
    }
    for (int i = 0; i < item_count; ++i) {
        std::string class_name;
        std::string actor_name;
        common::scanFormat(scanner, " %s \"%[^\"]\"\n", class_name, actor_name);
        std::unique_ptr<CDemonActor> item = owners.actors.takeCarriedActor(actor_name);
        if (item == nullptr) {
            item = owners.actor_classes.createActorByName(class_name);
            item->setActorName(actor_name);
        }
        items_.push_back(std::move(item));
    }
    scanner.skipLine();
    for (const std::unique_ptr<CDemonActor> &item : items_) {
        item->load(scanner, owners);
    }
    if (version >= kClosedVersion) {
        scanner.skipLine();
    }
    if (weapon_index < 0) {
        return;
    }
    CDemonActor *held = std::cmp_less(weapon_index, items_.size())
                            ? items_[static_cast<std::size_t>(weapon_index)].get()
                            : nullptr;
    selected_weapon_ = castToClassHash(held, CWeapon::kType.name_hash);
    if (selected_weapon_ == nullptr) {
        common::displayErrorAndQuit("CInventory::load - Can't find your weapon");
    }
}

std::span<const std::unique_ptr<CDemonActor>> CInventory::getItems() const {
    return items_;
}

CDemonActor *CInventory::getSelectedWeapon() const {
    return selected_weapon_;
}

float CInventory::getBatteryCharge() const {
    return battery_charge_;
}

std::span<const float, CInventory::kMaxItems> CInventory::getItemAngles() const {
    return item_angles_;
}

} // namespace nocturne::core
