#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/charactr/character.h"
#include "core/enemy/enemy.h"
#include "core/set/demonset.h"
#include "core/trigger/trigger.h"
#include "core/trigger/triggercause.h"
#include "core/waypoint/waypoint.h"

#include <span>

namespace nocturne::core {

// A trigger a bullet sets off is something auto-aim turns to when it asks to be.
// nocedit 0x00570fc0
void CDemonSet::buildActorTypeLists() {
    renderable_actors_.clear();
    characters_.clear();
    enemies_.clear();
    waypoints_.clear();
    threats_.clear();
    for (CDemonActor *actor : actors_) {
        if (actor->isTransparent() || actor->isRenderable()) {
            renderable_actors_.push_back(actor);
        }
        if (auto *character = castToClass<CCharacter>(actor)) {
            characters_.push_back(character);
            if (auto *enemy = castToClass<CEnemy>(actor)) {
                enemies_.push_back(enemy);
                threats_.push_back(actor);
            }
            continue;
        }
        if (auto *waypoint = castToClass<CWayPoint>(actor)) {
            waypoints_.push_back(waypoint);
        }
        const auto *trigger = castToClass<CTrigger>(actor);
        if (trigger != nullptr && trigger->getTriggerCause() == ETriggerCause::kBullet &&
            trigger->isAutoAimAtMe()) {
            threats_.push_back(actor);
        }
    }
}

// nocedit 0x005743e0
void CDemonSet::buildCollidableActorList() {
    collidable_actors_.clear();
    for (CDemonActor *actor : actors_) {
        if (!actor->isCollisionDisabled()) {
            collidable_actors_.push_back(actor);
        }
    }
}

std::span<CDemonActor *const> CDemonSet::getRenderableActors() const {
    return renderable_actors_;
}

std::span<CCharacter *const> CDemonSet::getCharacters() const {
    return characters_;
}

std::span<CEnemy *const> CDemonSet::getEnemies() const {
    return enemies_;
}

std::span<CWayPoint *const> CDemonSet::getWaypoints() const {
    return waypoints_;
}

std::span<CDemonActor *const> CDemonSet::getThreats() const {
    return threats_;
}

std::span<CDemonActor *const> CDemonSet::getCollidableActors() const {
    return collidable_actors_;
}

} // namespace nocturne::core
