#include "common/error/error.h"
#include "core/actor/demonactor.h"
#include "core/loadingscreen.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "support/newmsg/newmsg.h"

#include <cstddef>
#include <format>
#include <memory>
#include <span>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

// The most actors a set can hold.
constexpr std::size_t kMaxSetActors = 2000;

} // namespace

// The original read past its names for a set it didn't have.
// nocedit 0x00523fb0
void CDemonMission::loadSet(int set_index) {
    if (set_index == current_set_index_) {
        return;
    }
    if (set_index < 0 || static_cast<std::size_t>(set_index) >= set_names_.size()) {
        common::displayErrorAndQuit(
            std::format("CDemonMission::loadSet - the mission has no set {}", set_index));
    }
    current_set_index_ = set_index;
    owners_.set.load(set_names_[static_cast<std::size_t>(set_index)]);
    buildSetActorList();
    if (!actors_prepared_) {
        prepareAllActors();
    }
    for (CDemonActor *actor : owners_.set.getActors()) {
        actor->updateCollisionData();
    }
}

// The loading screen moves on as the first quarter, half and three quarters are set up, once for
// each of those a count falls on, so twice at once for some short lists.
// deferred: setting a hero up as the local hero in a network game, with CNetGame's sessions
// nocedit 0x00523cf0
void CDemonMission::prepareAllActors() {
    const std::string step(owners_.messages.getLocalizedString("Setting up actors"));
    owners_.loading_screen.update(step, false);
    const std::size_t count = actors_.size();
    std::size_t prepared = 0;
    for (const std::unique_ptr<CDemonActor> &actor : actors_) {
        actor->setup();
        ++prepared;
        for (const std::size_t point : {count / 4, count / 2, count * 3 / 4}) {
            if (prepared == point) {
                owners_.loading_screen.update(step, false);
            }
        }
    }
    actors_prepared_ = true;
}

// deferred: the set's lists of actors that collide and of each class, with their readers
// nocedit 0x00523e60
void CDemonMission::buildSetActorList() {
    std::vector<CDemonActor *> in_set;
    for (const std::unique_ptr<CDemonActor> &actor : actors_) {
        if (actor->getLocation().area_id != current_set_index_) {
            continue;
        }
        if (in_set.size() >= kMaxSetActors) {
            common::displayErrorAndQuit(
                "CDemonMission::buildSetActorList - Too many actors in current set!");
        }
        in_set.push_back(actor.get());
    }
    owners_.set.setActors(std::move(in_set));
}

std::span<const std::string> CDemonMission::getSetNames() const {
    return set_names_;
}

int CDemonMission::getCurrentSetIndex() const {
    return current_set_index_;
}

} // namespace nocturne::core
