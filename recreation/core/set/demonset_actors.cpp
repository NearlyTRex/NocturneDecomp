#include "common/math/vector3f.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/charactr/character.h"
#include "core/enemy/enemy.h"
#include "core/game/game.h"
#include "core/set/demonset.h"
#include "core/trigger/trigger.h"
#include "core/trigger/triggercause.h"
#include "core/waypoint/waypoint.h"

#include <span>

namespace nocturne::core {
namespace {

// The order the set's first pass processes, and the one its passes stop at: an actor ordered
// below the first, or at the last or past it, is never processed.
constexpr int kFirstProcessOrder = -999999;
constexpr int kPastLastProcessOrder = 999999;

} // namespace

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

// The actors process by their order, lowest first, those of one order as the set lists them; an
// actor whose turn changed has its angles brought within pi and its transforms turned. A frame
// without time processes nothing. The original also checked each actor's pointers before and
// after, in nocedit alone.
// deferred: the dynamic lights' and corona globes' counts started again, with the actors that
//   add them
// deferred: the frame's actors' process times printed while profiling, the slowest twenty in
//   order, with processCheatCodes' profile mode
// deferred: each actor numbered by its place in the list, with the actors' AI that reads it
// deferred: the actor being processed known while it is, with CHostage::processDamage and
//   CBarrier::getCollisionType
// deferred: an actor's path map brought up to date for its place after it processes, with
//   CHero::getPathMap and CNPC::getPathMap
// deferred: a living character in an explosion falling apart from its damage, glass in one
//   shattering when it can break, a damage trigger without a wildcard name taking its damage,
//   and a flame can in one lit, with CFireEffect::getExplosionEffect's explosions
// nocedit 0x0056b810
// bw1 0x0054fc20
// bw2 0x0052e940
// bw3 0x005353e0
void CDemonSet::processActors() {
    const float delta_time = owners_.game.getDeltaTimeFloat();
    if (!(delta_time > 0.0F)) {
        return;
    }
    buildCollidableActorList();
    int order = kFirstProcessOrder;
    do {
        int next = kPastLastProcessOrder;
        for (CDemonActor *const listed : actors_) {
            CDemonActor &actor = *listed;
            if (actor.isProcessDisabled()) {
                continue;
            }
            const int actor_order = actor.getProcessOrder();
            if (actor_order == order) {
                const common::CVector3f before = actor.getOrientation();
                actor.process(delta_time);
                const common::CVector3f &after = actor.getOrientation();
                if (after.x != before.x || after.y != before.y || after.z != before.z) {
                    actor.updateOrientationMatrix();
                }
            } else if (actor_order > order && actor_order < next) {
                next = actor_order;
            }
        }
        order = next;
    } while (order < kPastLastProcessOrder);
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
