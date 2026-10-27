#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <format>
#include <memory>
#include <utility>

namespace nocturne::core {

// The original also quit when the index was past the hero count or its hero was already made,
// which createHeros never asks for.
// deferred: giving a newly built player hero the weapon its class attacks with, by hero type: the
//   Colonel's pistol, an empty slot for Haystack and Ice Pick, and Scat's network pistol (the
//   decomp's hero_weapon.h nocturne_hero_default_weapon), with the weapon classes
// deferred: putting every hero's shoves, grab hold, Gabriella's throw, switch, pump, mask, ladder
//   and held presses, Moloch's attacks and the Colonel's aim back at rest as the first hero is
//   built (the decomp's hero_*_reset calls), with CColonel::process, CGabriella::process,
//   CMoloch::process and the grab escape and shoves in CHero
// nocedit 0x00524920
bool CDemonMission::createOneHero(std::size_t index, EHeroType hero_type,
                                  std::unique_ptr<CHero> existing_hero) {
    const auto found = std::ranges::find_if(actors_, [index](const auto &actor) {
        const auto *placeholder = dynamic_cast<const CHeroPlaceholder *>(
            castToClassHash(actor.get(), CHeroPlaceholder::kType.name_hash));
        return placeholder != nullptr && std::cmp_equal(placeholder->getIndex(), index);
    });
    if (found == actors_.end()) {
        owners_.editor_tools.showError(
            std::format("Can't find hero placeholder for hero {}", index));
        return false;
    }
    const auto &placeholder = dynamic_cast<const CHeroPlaceholder &>(**found);
    std::unique_ptr<CHero> hero;
    if (existing_hero == nullptr) {
        hero = placeholder.createHero(hero_type, owners_.actor, *this);
    } else {
        hero = std::move(existing_hero);
        CLocation location = placeholder.getLocation();
        common::CVector3f orientation = placeholder.getOrientation();
        hero->setPositionAndOrientation(&location.position, &orientation);
        location = hero->getLocation();
        location.area_id = placeholder.getLocation().area_id;
        hero->setLocation(location);
        hero->getModel().jumpToMotion(0, 0.0F);
        hero->setWalkTarget(nullptr, 0.0F, 0.0F);
    }
    heroes_.at(index) = hero.get();
    addActorToList(std::move(hero));
    return true;
}

// deferred: making each network player's hero, and noting which is this machine's, with CNetGame
// deferred: giving the hero the game's aim mode and the player's control, with the hero's aiming
//   and control
// deferred: rebuilding the set's actor lists after, with the set's per-frame readers
// deferred: reviving a hero carried into the next mission: its most hit points back, a
//   destroying death undone and STAND forced (the decomp's hero_death.h nocturne_hero_revive),
//   with CCharacter::getDeathState
// nocedit 0x00524a80
bool CDemonMission::createHeros(std::unique_ptr<CHero> existing_hero) {
    heroes_.fill(nullptr);
    hero_count_ = 1;
    if (!createOneHero(0, owners_.game.hero_number, std::move(existing_hero))) {
        return false;
    }
    for (auto placeholder = actors_.begin(); placeholder != actors_.end();) {
        if (isOfClass(placeholder->get(), "CHeroPlaceholder")) {
            removeActor(**placeholder);
            placeholder = actors_.begin();
        } else {
            ++placeholder;
        }
    }
    return true;
}

int CDemonMission::getHeroCount() const {
    return hero_count_;
}

CHero *CDemonMission::getHero(std::size_t index) const {
    return heroes_.at(index);
}

} // namespace nocturne::core
