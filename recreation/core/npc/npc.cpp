#include "core/npc/npc.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;
// Before this version only CDemonActor's fields and the hit points were saved.
constexpr int kCharacterVersion = 2;
constexpr int kModelVersion = 3;
constexpr int kShootableVersion = 4;
constexpr int kBloodPoolVersion = 5;

} // namespace

// nocedit 0x00544770
constinit const CDemonActorType CNPC::kType =
    makeActorType("CNPC", &CCharacter::kType, &CNPC::create, kVersion);

// deferred: the path map, the collision cylinder and catching fire from a gun's flame, with
//   CNPC::setup and CCharacter::process
// nocedit 0x005447e0
CNPC::CNPC() {
    getModel().init("priest.dfm");
}

// nocedit 0x004f4700
CNPC::~CNPC() = default;

// nocedit 0x005447d0
const CDemonActorType &CNPC::getActorType() const {
    return kType;
}

// nocedit 0x005447a0
std::unique_ptr<CDemonActor> CNPC::create(CActor & /*classes*/) {
    return std::make_unique<CNPC>();
}

// nocedit 0x00544ba0
void CNPC::archive(CActorArchive &actor_archive) {
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kCharacterVersion) {
        archiveDemonActorFields(actor_archive);
        archiveHitPoints(actor_archive);
        return;
    }
    CCharacter::archive(actor_archive);
    if (version >= kModelVersion) {
        actor_archive.archiveDeformableModelInstance(getModel(), "modelName");
        actor_archive.archiveMotionState(getModel(), "motion state");
    }
    if (version >= kShootableVersion) {
        actor_archive.archiveFlag(shootable_, "shootMe");
    }
    if (version >= kBloodPoolVersion) {
        actor_archive.archiveFlag(left_blood_pool_, "poolMe");
    }
}

// nocedit 0x00544e10
int CNPC::isInvulnerable() {
    return shootable_ ? 0 : 1;
}

bool CNPC::isShootable() const {
    return shootable_;
}

bool CNPC::hasLeftBloodPool() const {
    return left_blood_pool_;
}

} // namespace nocturne::core
