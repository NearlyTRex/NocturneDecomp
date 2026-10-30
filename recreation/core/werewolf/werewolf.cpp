#include "core/werewolf/werewolf.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;
// The versions that first held each field after the motion.
constexpr int kEyesVersion = 2;
// From this version the guard distance is CEnemy's alone to save.
constexpr int kEnemyGuardVersion = 3;
constexpr int kChainVersion = 4;
constexpr int kTypeVersion = 5;
constexpr int kPhaseVersion = 6;

} // namespace

// nocedit 0x005efb70
constinit const CDemonActorType CWerewolf::kType =
    makeActorType("CWerewolf", &CEnemy::kType, &CWerewolf::create, kVersion);

// deferred: the collision cylinder and the detection range, with CWerewolf::process
// deferred: chasing the hero netplay gives it rather than the local one (the decomp's
//   nocturne_net_sim_target_for), with CWerewolf::process
// nocedit 0x005efc10
CWerewolf::CWerewolf(CActor &classes) : CEnemy(classes) {
    getModel().init("wolfbrn.dfm");
}

// nocedit 0x005f2220
CWerewolf::~CWerewolf() = default;

// nocedit 0x005efc00
const CDemonActorType &CWerewolf::getActorType() const {
    return kType;
}

// nocedit 0x005efbd0
std::unique_ptr<CDemonActor> CWerewolf::create(CActor &classes) {
    return std::make_unique<CWerewolf>(classes);
}

// The speed is saved again after CEnemy's.
// nocedit 0x005f1980
void CWerewolf::archive(CActorArchive &actor_archive) {
    CEnemy::archive(actor_archive);
    archiveSpeed(actor_archive);
    actor_archive.archiveDeformableModelInstance(getModel(), "modelName");
    const int version = actor_archive.getSavedVersion(kType);
    if (version < kEnemyGuardVersion) {
        archiveGuardDistance(actor_archive);
    }
    actor_archive.archiveMotionState(getModel(), "motion state");
    if (version >= kEyesVersion) {
        actor_archive.archiveFlag(eyes_lit_, "lightUpEyes");
    }
    if (version >= kChainVersion) {
        actor_archive.archiveActor(chain_anchor_, "chainAnchor");
        actor_archive.archiveFloat(chain_length_, "chainLength");
    }
    if (version >= kTypeVersion) {
        actor_archive.archiveEnum(werewolf_type_, "type");
    }
    if (version >= kPhaseVersion) {
        actor_archive.archiveInteger(phase_, "phase");
        actor_archive.archiveFloat(phase_timer_, "phaseTimer");
        actor_archive.archiveActor(first_alpha_, "alpha1");
        actor_archive.archiveActor(second_alpha_, "alpha2");
    }
}

EWerewolfType CWerewolf::getWerewolfType() const {
    return werewolf_type_;
}

bool CWerewolf::areEyesLit() const {
    return eyes_lit_;
}

CDemonActor *CWerewolf::getChainAnchor() const {
    return chain_anchor_;
}

float CWerewolf::getChainLength() const {
    return chain_length_;
}

int CWerewolf::getPhase() const {
    return phase_;
}

float CWerewolf::getPhaseTimer() const {
    return phase_timer_;
}

CDemonActor *CWerewolf::getFirstAlpha() const {
    return first_alpha_;
}

CDemonActor *CWerewolf::getSecondAlpha() const {
    return second_alpha_;
}

} // namespace nocturne::core
