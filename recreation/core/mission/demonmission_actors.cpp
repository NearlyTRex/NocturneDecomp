#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "core/actor/demonactor.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"

#include <algorithm>
#include <format>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {

// nocedit 0x00523b70
void CDemonMission::addActorToList(std::unique_ptr<CDemonActor> actor) {
    if (actor == nullptr) {
        return;
    }
    if (actor->getActorName().empty()) {
        generateActorName(*actor);
    }
    actors_.push_back(std::move(actor));
}

// The original also checked each actor it passed for corruption, in the editor build only.
// nocedit 0x00523be0
std::unique_ptr<CDemonActor> CDemonMission::removeActorFromList(const CDemonActor &actor_ptr) {
    const auto found = std::ranges::find(actors_, &actor_ptr, &std::unique_ptr<CDemonActor>::get);
    if (found == actors_.end()) {
        return nullptr;
    }
    std::unique_ptr<CDemonActor> removed = std::move(*found);
    actors_.erase(found);
    return removed;
}

// The original's flag to keep the actor is removeActorFromList here, which hands it back. Its
// deleteActor checked the actor for corruption first in the editor build; retail doesn't. It
// also destroyed an actor that wasn't on the list, which here belongs to its caller.
// deferred: clearing what the player heroes hold of the actor (the weapon in hand, both carry
//   hands, the inventory's selected weapon and item), which the original left dangling (the
//   decomp's actor_delete.h nocturne_actor_delete_unbind_heroes, ACTOR_DELETE), with
//   CStranger's weapon in hand and CInventory's selection
// deferred: a sound tracking the actor's position finishing where the actor last was instead of
//   reading it after it is freed (the decomp's actor_delete.h nocturne_actor_delete_unbind_sounds,
//   ACTOR_DELETE), with CDemonActor::playSound and CSound::playActorSound
// nocedit 0x00523f20
// nocedit 0x00408820
// nocedit 0x0040ac80
void CDemonMission::removeActor(const CDemonActor &actor) {
    if (removeActorFromList(actor) != nullptr) {
        std::ranges::replace_if(
            heroes_, [&actor](const CHero *hero) { return hero == &actor; }, nullptr);
    }
}

// The set's list is rebuilt, so it holds none of them.
// deferred: clearing the delete queue, with markActorToDelete
// deferred: committing the raytracer's shadow voxels and resetting the path maps, with the
//   raytracer and the path maps
// deferred: rewinding the path lookup cache and forgetting which hero set each trigger off, so a
//   network game's next mission starts in step (the decomp's nocturne_net_pathcache_rewind and
//   nocturne_net_sim_forget_trigger_hero), with CNetGame and the path maps
// nocedit 0x00523f50
void CDemonMission::removeAllActors() {
    while (!actors_.empty()) {
        removeActor(*actors_.front());
    }
    buildSetActorList();
    hero_count_ = 0;
    actors_prepared_ = false;
}

// nocedit 0x00524030
CDemonActor *CDemonMission::findActorByName(std::string_view name) const {
    const auto found = std::ranges::find_if(actors_, [name](const auto &actor) {
        return common::equalsIgnoringAsciiCase(actor->getActorName(), name);
    });
    return found == actors_.end() ? nullptr : found->get();
}

// A number is whatever sscanf's "%d" reads after the base name, so "Door-2" counts as -2. The
// original went on to skip a name already taken, which the highest number rules out.
// deferred: counting the names of the items in every hero's inventory too, which the original's
//   lookup of the mission's actors misses, so a save holds no two actors of one name (the
//   decomp's item_names.h, ITEM_NAMES), with CInventory's items
// nocedit 0x00524660
std::string CDemonMission::generateUniqueActorName(std::string_view base_name) const {
    int highest = -1;
    for (const std::unique_ptr<CDemonActor> &actor : actors_) {
        const std::string_view name = actor->getActorName();
        if (!common::equalsIgnoringAsciiCase(name.substr(0, base_name.size()), base_name)) {
            continue;
        }
        const std::optional<int> number = common::scanInteger(name.substr(base_name.size()));
        if (number && *number > highest) {
            highest = *number;
        }
    }
    return std::format("{}{}", base_name, highest + 1);
}

// nocedit 0x00524700
void CDemonMission::generateActorName(CDemonActor &actor) const {
    actor.setActorName("");
    std::string_view base_name = actor.getActorClassName();
    if (base_name.starts_with('C')) {
        base_name.remove_prefix(1);
    }
    actor.setActorName(generateUniqueActorName(base_name));
}

} // namespace nocturne::core
