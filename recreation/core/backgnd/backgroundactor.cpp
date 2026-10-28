#include "core/backgnd/backgroundactor.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// The version that first held what the actor's surface is made of.
constexpr int kGroundVersion = 2;

} // namespace

// nocedit 0x00412740
constinit const CDemonActorType CBackgroundActor::kType =
    makeActorType("CBackgroundActor", &CDemonActor::kType, &CBackgroundActor::create, kVersion);

// nocedit 0x004127b0
CBackgroundActor::CBackgroundActor() {
    model_.setModelName("candle.kfm");
}

// nocedit 0x00412ad0
CBackgroundActor::~CBackgroundActor() = default;

// nocedit 0x004127a0
const CDemonActorType &CBackgroundActor::getActorType() const {
    return kType;
}

// nocedit 0x00412770
std::unique_ptr<CDemonActor> CBackgroundActor::create() {
    return std::make_unique<CBackgroundActor>();
}

// nocedit 0x00412990
void CBackgroundActor::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveKeyframedModelInstance(model_, "modelName");
    actor_archive.archiveFlag(collide_with_me_, "collideWithMe");
    if (actor_archive.getSavedVersion(kType) < kGroundVersion) {
        return;
    }
    actor_archive.archiveEnum(ground_type_, "groundType");
}

// nocedit 0x00412850
void CBackgroundActor::process(float /*delta_time*/) {}

// nocedit 0x00412a30
EGroundType CBackgroundActor::getGroundType() {
    return ground_type_;
}

const CKeyFramedModelInstance &CBackgroundActor::getModel() const {
    return model_;
}

bool CBackgroundActor::isCollidedWith() const {
    return collide_with_me_;
}

} // namespace nocturne::core
