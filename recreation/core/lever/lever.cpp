#include "core/lever/lever.h"

#include "core/actor/actorarchive.h"
#include "core/actor/collisiontype.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/event/rulelist.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 8;
// The versions that first held each field after the lever's position.
constexpr int kMomentaryVersion = 2;
constexpr int kLinkedLeverVersion = 3;
constexpr int kEndVertexVersion = 4;
constexpr int kMovingVersion = 5;
constexpr int kRulesVersion = 6;
constexpr int kAllowedSidesVersion = 7;
constexpr int kCollisionVersion = 8;

} // namespace

// nocedit 0x00504760
constinit const CDemonActorType CLever::kType =
    makeActorType("CLever", &CDemonActor::kType, &CLever::create, kVersion);

// nocedit 0x005047d0
CLever::CLever() {
    model_.setModelName("glever.kfm");
}

// nocedit 0x00505430
CLever::~CLever() = default;

// nocedit 0x005047c0
const CDemonActorType &CLever::getActorType() const {
    return kType;
}

// nocedit 0x00504790
std::unique_ptr<CDemonActor> CLever::create() {
    return std::make_unique<CLever>();
}

// nocedit 0x00504e80
void CLever::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveEnum(lever_type_, "leverType");
    actor_archive.archiveString(on_event_, "onEvent");
    actor_archive.archiveString(off_event_, "offEvent");
    actor_archive.archiveString(sound_, "sound");
    actor_archive.archiveFloat(param_, "param");
    const int version = actor_archive.getSavedVersion(kType);
    if (version >= kMomentaryVersion) {
        actor_archive.archiveFlag(momentary_, "momentaryFlag");
    }
    if (version >= kLinkedLeverVersion) {
        actor_archive.archiveActor(linked_lever_, "linkedLever");
    }
    if (version >= kEndVertexVersion) {
        actor_archive.archiveInteger(end_vertex_index_, "endVertexIndex");
    }
    if (version >= kMovingVersion) {
        actor_archive.archiveFlag(moving_, "moving");
        actor_archive.archiveFloat(move_to_pct_, "moveToPct");
    }
    if (version >= kRulesVersion) {
        actor_archive.archiveRules(rules_, "rules");
    }
    if (version >= kAllowedSidesVersion) {
        actor_archive.archiveEnum(allowed_sides_, "allowedSides");
    }
    if (version >= kCollisionVersion) {
        actor_archive.archiveFlag(collision_enabled_, "enableCollision");
    }
}

// nocedit 0x00505060
ECollisionType CLever::getCollisionType(SCollisionInfo * /*collision_info*/) {
    return collision_enabled_ ? ECollisionType::kMesh : ECollisionType::kNone;
}

const CKeyFramedModelInstance &CLever::getModel() const {
    return model_;
}

ELeverType CLever::getLeverType() const {
    return lever_type_;
}

const std::string &CLever::getOnEvent() const {
    return on_event_;
}

const std::string &CLever::getOffEvent() const {
    return off_event_;
}

const std::string &CLever::getSound() const {
    return sound_;
}

float CLever::getParam() const {
    return param_;
}

bool CLever::isMomentary() const {
    return momentary_;
}

CDemonActor *CLever::getLinkedLever() const {
    return linked_lever_;
}

int CLever::getEndVertexIndex() const {
    return end_vertex_index_;
}

bool CLever::isMoving() const {
    return moving_;
}

float CLever::getMoveToPct() const {
    return move_to_pct_;
}

const CRuleList &CLever::getRules() const {
    return rules_;
}

ELeverOpenSides CLever::getAllowedSides() const {
    return allowed_sides_;
}

} // namespace nocturne::core
